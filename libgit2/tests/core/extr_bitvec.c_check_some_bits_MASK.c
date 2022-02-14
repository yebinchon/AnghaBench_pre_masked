
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_bitvec ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,size_t) ;

__attribute__((used)) static void FUNC_2(git_bitvec *VAR_0, size_t VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2)
  FUNC_0(VAR_2 % 3 == 0 || VAR_2 % 7 == 0, FUNC_1(VAR_0, VAR_2));
}
