
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct firedtv_tuner_status {int carrier_noise_ratio; } ;
struct firedtv {int dummy; } ;
struct dvb_frontend {struct firedtv* sec_priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct firedtv*,struct firedtv_tuner_status*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1, u16 *VAR_2)
{
 struct firedtv *VAR_3 = VAR_1->sec_priv;
 struct firedtv_tuner_status VAR_4;

 if (FUNC_0(VAR_3, &VAR_4))
  return -VAR_0;


 *VAR_2 = VAR_4.carrier_noise_ratio * 257;
 return 0;
}
