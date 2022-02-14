
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_name {scalar_t__ generation; int head_name; } ;
struct commit {int dummy; } ;


 struct commit_name* FUNC_0 (struct commit*) ;
 int FUNC_1 (struct commit*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct commit *VAR_0, struct commit *VAR_1)
{
 struct commit_name *VAR_2 = FUNC_0(VAR_0);
 struct commit_name *VAR_3 = FUNC_0(VAR_1);
 if (!VAR_2)
  return;
 if (!VAR_3 ||
     VAR_2->generation + 1 < VAR_3->generation)
  FUNC_1(VAR_1, VAR_2->head_name,
       VAR_2->generation + 1);
}
