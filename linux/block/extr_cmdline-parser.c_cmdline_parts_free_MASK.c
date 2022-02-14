
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdline_parts {struct cmdline_parts* next_parts; } ;


 int FUNC_0 (struct cmdline_parts*) ;
 int FUNC_1 (struct cmdline_parts*) ;

void FUNC_2(struct cmdline_parts **VAR_0)
{
 struct cmdline_parts *VAR_1;

 while (*VAR_0) {
  VAR_1 = (*VAR_0)->next_parts;
  FUNC_0(*VAR_0);
  FUNC_1(*VAR_0);
  *VAR_0 = VAR_1;
 }
}
