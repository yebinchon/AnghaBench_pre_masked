
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct lqrdata {int dummy; } ;


 int FUNC_0 (int ) ;

void
FUNC_1(struct lqrdata *VAR_0, struct lqrdata *VAR_1)
{
  u_int32_t *VAR_2, *VAR_3;
  unsigned VAR_4;

  VAR_2 = (u_int32_t *) VAR_0;
  VAR_3 = (u_int32_t *) VAR_1;
  for (VAR_4 = 0; VAR_4 < sizeof(struct lqrdata) / sizeof(u_int32_t); VAR_4++, VAR_2++, VAR_3++)
    *VAR_3 = FUNC_0(*VAR_2);
}
