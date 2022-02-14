
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dvb_frontend {struct dib9000_state* demodulator_priv; } ;
struct TYPE_2__ {scalar_t__ status; } ;
struct dib9000_state {int tune_state; int status; int * i2c_read_buffer; TYPE_1__ channel_status; } ;
typedef int s8 ;


 scalar_t__ VAR_0 ;


 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct dib9000_state*) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dib9000_state*,int ,int *,int ) ;
 int FUNC_3 (struct dib9000_state*,int ,int *,int) ;
 int FUNC_4 (struct dib9000_state*,int ,int *) ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_13)
{
 struct dib9000_state *VAR_14 = VAR_13->demodulator_priv;
 int VAR_15 = 10, VAR_16 = VAR_14->channel_status.status == VAR_0;
 s8 VAR_17;

 switch (VAR_14->tune_state) {
 case 129:
  FUNC_0(VAR_14);


  FUNC_4(VAR_14, VAR_5, (u8 *) VAR_12);
  FUNC_4(VAR_14, VAR_6, (u8 *) VAR_12);

  if (VAR_16)
   FUNC_2(VAR_14, VAR_10, ((void*)0), 0);
  else {
   FUNC_1(VAR_13);
   FUNC_2(VAR_14, VAR_11, ((void*)0), 0);
  }
  VAR_14->tune_state = 128;
  break;
 case 128:
  if (VAR_16)
   FUNC_3(VAR_14, VAR_3, VAR_14->i2c_read_buffer, 1);
  else
   FUNC_3(VAR_14, VAR_4, VAR_14->i2c_read_buffer, 1);
  VAR_17 = (s8)VAR_14->i2c_read_buffer[0];
  switch (VAR_17) {
  case 0:
   break;
  case -2:
   if (VAR_16)
    VAR_14->status = VAR_7;
   else {
    VAR_14->tune_state = VAR_1;
    VAR_14->status = VAR_8;
   }
   break;
  default:
   VAR_14->status = VAR_9;
   VAR_14->tune_state = VAR_1;
   break;
  }
  break;
 default:
  VAR_15 = VAR_2;
  break;
 }

 return VAR_15;
}
