
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_name {struct commit_name* path; int * tag; } ;


 int FUNC_0 (struct commit_name*) ;
 struct commit_name* FUNC_1 (int) ;
 struct commit_name* FUNC_2 (struct commit_name*) ;
 scalar_t__ FUNC_3 (int **,int *) ;
 int FUNC_4 (struct commit_name*,struct commit_name*,int) ;

__attribute__((used)) static int FUNC_5(struct commit_name **VAR_0, struct commit_name *VAR_1)
{
 struct commit_name *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct commit_name));
 FUNC_0(VAR_2);

 FUNC_4(VAR_2, VAR_1, sizeof(struct commit_name));
 VAR_2->tag = ((void*)0);
 VAR_2->path = ((void*)0);

 if (VAR_1->tag && FUNC_3(&VAR_2->tag, VAR_1->tag) < 0)
  return -1;

 VAR_2->path = FUNC_2(VAR_1->path);
 FUNC_0(VAR_2->path);

 *VAR_0 = VAR_2;
 return 0;
}
