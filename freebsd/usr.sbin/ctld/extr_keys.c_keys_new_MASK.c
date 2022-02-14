
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keys {int dummy; } ;


 struct keys* FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;

struct keys *
FUNC_2(void)
{
 struct keys *VAR_0;

 VAR_0 = FUNC_0(1, sizeof(*VAR_0));
 if (VAR_0 == ((void*)0))
  FUNC_1(1, "calloc");

 return (VAR_0);
}
