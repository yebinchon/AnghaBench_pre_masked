
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_name {char const* head_name; int generation; } ;
struct commit {int dummy; } ;


 struct commit_name** FUNC_0 (int *,struct commit*) ;
 int VAR_0 ;
 struct commit_name* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct commit *VAR_1, const char *VAR_2, int VAR_3)
{
 struct commit_name *VAR_4;

 VAR_4 = *FUNC_0(&VAR_0, VAR_1);
 if (!VAR_4) {
  VAR_4 = FUNC_1(sizeof(*VAR_4));
  *FUNC_0(&VAR_0, VAR_1) = VAR_4;
 }
 VAR_4->head_name = VAR_2;
 VAR_4->generation = VAR_3;
}
