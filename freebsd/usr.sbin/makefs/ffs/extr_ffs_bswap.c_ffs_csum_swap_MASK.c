
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct csum {int dummy; } ;


 int FUNC_0 (int ) ;

void
FUNC_1(struct csum *VAR_0, struct csum *VAR_1, int VAR_2)
{
 size_t VAR_3;
 u_int32_t *VAR_4, *VAR_5;

 VAR_4 = (u_int32_t*)VAR_0;
 VAR_5 = (u_int32_t*)VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_2 / sizeof(u_int32_t); VAR_3++)
  VAR_5[VAR_3] = FUNC_0(VAR_4[VAR_3]);
}
