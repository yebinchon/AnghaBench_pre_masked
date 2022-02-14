
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {int dummy; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_frontend*,int*) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_2,
   bool VAR_3,
   unsigned int VAR_4,
   unsigned int *VAR_5,
   enum fe_status *VAR_6)
{
 int VAR_7;

 if (!VAR_2 || !VAR_5 || !VAR_6) {
  FUNC_2("invalid arg.");
  return -VAR_0;
 }

 if (VAR_3) {
  VAR_7 = FUNC_1(VAR_2);
  if (VAR_7) {
   FUNC_2("cxd2880_set_frontend failed %d\n", VAR_7);
   return VAR_7;
  }
 }

 *VAR_5 = VAR_1 / 5;

 return FUNC_0(VAR_2, VAR_6);
}
