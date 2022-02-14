
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atom_value {int * s; } ;


 int VAR_0 ;
 int * FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(struct atom_value *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct atom_value *VAR_3 = &VAR_1[VAR_2];
  if (VAR_3->s == ((void*)0))
   VAR_3->s = FUNC_0("");
 }
}
