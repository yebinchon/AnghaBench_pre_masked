
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv_tuner_status {scalar_t__ no_rf; } ;
struct firedtv {int dummy; } ;
struct dvb_frontend {struct firedtv* sec_priv; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct firedtv*,struct firedtv_tuner_status*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_6, enum fe_status *VAR_7)
{
 struct firedtv *VAR_8 = VAR_6->sec_priv;
 struct firedtv_tuner_status VAR_9;

 if (FUNC_0(VAR_8, &VAR_9))
  return -VAR_0;

 if (VAR_9.no_rf)
  *VAR_7 = 0;
 else
  *VAR_7 = VAR_3 | VAR_5 | VAR_4 |
     VAR_1 | VAR_2;
 return 0;
}
