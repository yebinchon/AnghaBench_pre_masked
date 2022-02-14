
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;

void
FUNC_1(const char *VAR_2, const void *VAR_3, const char *VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_1 < VAR_0)
 {
  for (VAR_6 = 0; VAR_6 < VAR_1 - 1; ++VAR_6)
   FUNC_0("\t");

  FUNC_0("= PTR %s: %p, %s: %d\n", VAR_2, VAR_3, VAR_4, VAR_5);
 }
}
