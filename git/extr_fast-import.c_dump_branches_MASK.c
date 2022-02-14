
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct branch {struct branch* table_next_branch; } ;


 struct branch** VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct branch*) ;

__attribute__((used)) static void FUNC_1(void)
{
 unsigned int VAR_3;
 struct branch *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  for (VAR_4 = VAR_0[VAR_3]; VAR_4; VAR_4 = VAR_4->table_next_branch)
   VAR_2 |= FUNC_0(VAR_4);
 }
}
