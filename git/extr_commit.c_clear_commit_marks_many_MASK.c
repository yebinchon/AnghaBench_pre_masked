
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_list {int dummy; } ;
struct commit {int dummy; } ;


 int FUNC_0 (struct commit_list**,struct commit*,unsigned int) ;
 struct commit* FUNC_1 (struct commit_list**) ;

void FUNC_2(int VAR_0, struct commit **VAR_1, unsigned int VAR_2)
{
 struct commit_list *VAR_3 = ((void*)0);

 while (VAR_0--) {
  FUNC_0(&VAR_3, *VAR_1, VAR_2);
  VAR_1++;
 }
 while (VAR_3)
  FUNC_0(&VAR_3, FUNC_1(&VAR_3), VAR_2);
}
