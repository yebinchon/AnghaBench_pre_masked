
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_frontend {int dummy; } ;
typedef enum fe_status { ____Placeholder_fe_status } fe_status ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_frontend*,int*) ;
 int FUNC_1 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1, bool VAR_2,
 unsigned int VAR_3, unsigned int *VAR_4, enum fe_status *VAR_5)
{
 *VAR_4 = VAR_0 / 5;
 if (VAR_2) {
  int VAR_6 = FUNC_1(VAR_1);
  if (VAR_6)
   return VAR_6;
 }
 return FUNC_0(VAR_1, VAR_5);
}
