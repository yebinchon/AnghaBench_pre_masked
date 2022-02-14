
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x {char* buf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;

int FUNC_1(void *VAR_1, uintptr_t VAR_2, int VAR_3, void *VAR_4)
{
 char *VAR_5 = (VAR_3 & VAR_0) ?
  ((struct x *)VAR_2)->buf : (char *)VAR_2;
 return (FUNC_0(((struct x *)VAR_1)->buf, VAR_5) == 0);
}
