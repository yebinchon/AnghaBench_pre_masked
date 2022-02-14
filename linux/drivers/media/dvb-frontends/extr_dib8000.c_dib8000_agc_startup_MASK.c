
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int frequency; } ;
struct dvb_frontend {TYPE_1__ dtv_property_cache; struct dib8000_state* demodulator_priv; } ;
struct TYPE_4__ {int (* agc_control ) (struct dvb_frontend*,int) ;} ;
struct dib8000_state {int tune_state; int revision; TYPE_2__ cfg; int status; } ;
typedef enum frontend_tune_state { ____Placeholder_frontend_tune_state } frontend_tune_state ;


 scalar_t__ FUNC_0 (int) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dib8000_state*) ;
 int FUNC_2 (struct dib8000_state*,int) ;
 int FUNC_3 (struct dib8000_state*) ;
 int FUNC_4 (struct dib8000_state*,int ) ;
 int FUNC_5 (struct dib8000_state*,unsigned char) ;
 int FUNC_6 (struct dib8000_state*,int ) ;
 int FUNC_7 (struct dib8000_state*) ;
 int FUNC_8 (struct dib8000_state*,int,int) ;
 int FUNC_9 (struct dvb_frontend*,int) ;
 int FUNC_10 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_11(struct dvb_frontend *VAR_4)
{
 struct dib8000_state *VAR_5 = VAR_4->demodulator_priv;
 enum frontend_tune_state *VAR_6 = &VAR_5->tune_state;
 int VAR_7 = 0;
 u16 VAR_8;
 u32 VAR_9 = 0x8000;

 switch (*VAR_6) {
 case 131:


  if (VAR_5->revision != 0x8090)
   FUNC_4(VAR_5, VAR_2);
  else {
   FUNC_6(VAR_5, VAR_1);

   VAR_8 = FUNC_2(VAR_5, 1947)&0xff00;
   FUNC_8(VAR_5, 1946,
     VAR_9 & 0xFFFF);

   FUNC_8(VAR_5, 1947, VAR_8 | (1<<14) |
     ((VAR_9 >> 16) & 0xFF));


   VAR_8 = FUNC_2(VAR_5, 1920);
   FUNC_8(VAR_5, 1920, (VAR_8 | 0x3) &
     (~(1 << 7)));
  }

  if (FUNC_5(VAR_5, (unsigned char)(FUNC_0(VAR_4->dtv_property_cache.frequency / 1000))) != 0) {
   *VAR_6 = VAR_0;
   VAR_5->status = VAR_3;
   break;
  }

  VAR_7 = 70;
  *VAR_6 = 130;
  break;

 case 130:

  if (VAR_5->cfg.agc_control)
   VAR_5->cfg.agc_control(VAR_4, 1);

  FUNC_3(VAR_5);


  VAR_7 = 50;
  *VAR_6 = 129;
  break;

 case 129:

  VAR_7 = 70;

  if (FUNC_7(VAR_5))

   VAR_7 = 50;
  else
   *VAR_6 = 128;
  break;

 case 128:
  FUNC_1(VAR_5);

  if (VAR_5->cfg.agc_control)
   VAR_5->cfg.agc_control(VAR_4, 0);

  *VAR_6 = VAR_0;
  break;
 default:
  VAR_7 = FUNC_1(VAR_5);
  break;
 }
 return VAR_7;

}
