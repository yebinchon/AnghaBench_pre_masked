
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int * FUNC_2 (int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_2;

 if ((VAR_0 = FUNC_2(VAR_1 * sizeof(*VAR_0))) == ((void*)0))
  FUNC_1(1, "malloc failed");

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_0(VAR_2);
}
