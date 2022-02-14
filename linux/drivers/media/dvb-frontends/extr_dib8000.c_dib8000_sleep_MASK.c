
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct dvb_frontend {struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int revision; TYPE_2__** fe; } ;
struct TYPE_3__ {int (* sleep ) (TYPE_2__*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dib8000_state*,int ) ;
 int FUNC_1 (struct dvb_frontend*,int ) ;
 int FUNC_2 (struct dib8000_state*,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_5)
{
 struct dib8000_state *VAR_6 = VAR_5->demodulator_priv;
 u8 VAR_7;
 int VAR_8;

 for (VAR_7 = 1; (VAR_7 < VAR_3) && (VAR_6->fe[VAR_7] != ((void*)0)); VAR_7++) {
  VAR_8 = VAR_6->fe[VAR_7]->ops.sleep(VAR_6->fe[VAR_7]);
  if (VAR_8 < 0)
   return VAR_8;
 }

 if (VAR_6->revision != 0x8090)
  FUNC_1(VAR_5, VAR_4);
 FUNC_2(VAR_6, VAR_0);
 return FUNC_0(VAR_6, VAR_2) | FUNC_0(VAR_6, VAR_1);
}
