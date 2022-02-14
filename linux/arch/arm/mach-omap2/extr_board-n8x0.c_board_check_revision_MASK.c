
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void)
{
 if (FUNC_0("nokia,n800"))
  VAR_3 = VAR_0;
 else if (FUNC_0("nokia,n810"))
  VAR_3 = VAR_1;
 else if (FUNC_0("nokia,n810-wimax"))
  VAR_3 = VAR_2;

 if (!VAR_3)
  FUNC_1("Unknown board\n");
}
