
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct dvb_frontend {struct cxd2880_priv* demodulator_priv; } ;
struct TYPE_2__ {int tune_info; } ;
struct cxd2880_priv {TYPE_1__ dvbt2_tune_param; int tnrdmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,scalar_t__*) ;
 int FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_4)
{
 u8 VAR_5 = 0;
 u8 VAR_6;
 int VAR_7;
 struct cxd2880_priv *VAR_8 = ((void*)0);

 if (!VAR_4) {
  FUNC_2("invalid arg\n");
  return -VAR_3;
 }

 VAR_8 = VAR_4->demodulator_priv;

 VAR_7 = FUNC_0(&VAR_8->tnrdmd,
            &VAR_5);
 if (VAR_7)
  return VAR_7;

 if (!VAR_5)
  return -VAR_2;

 VAR_7 = FUNC_1(&VAR_8->tnrdmd,
            &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_6) {
  VAR_8->dvbt2_tune_param.tune_info =
   VAR_0;
 } else {
  VAR_8->dvbt2_tune_param.tune_info =
   VAR_1;
 }

 return 0;
}
