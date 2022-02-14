
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atom_exec_context ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static void FUNC_6(atom_exec_context *VAR_1, int *VAR_2, int VAR_3)
{
 unsigned VAR_4 = FUNC_1((*VAR_2)++);
 FUNC_0("   count: %d\n", VAR_4);
 if (VAR_3 == VAR_0)
  FUNC_5(VAR_4);
 else if (!FUNC_2())
  FUNC_3(VAR_4);
 else
  FUNC_4(VAR_4);
}
