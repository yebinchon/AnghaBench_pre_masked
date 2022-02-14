
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int children; } ;
struct commit_list {int next; struct commit* item; } ;
struct commit {int object; } ;


 int FUNC_0 (int *,int *,struct commit_list*) ;
 struct commit_list* FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct rev_info *VAR_0, struct commit *VAR_1, struct commit *VAR_2)
{
 struct commit_list *VAR_3 = FUNC_1(1, sizeof(*VAR_3));

 VAR_3->item = VAR_2;
 VAR_3->next = FUNC_0(&VAR_0->children, &VAR_1->object, VAR_3);
}
