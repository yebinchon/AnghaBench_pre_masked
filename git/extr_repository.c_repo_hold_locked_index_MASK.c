
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int index_file; } ;
struct lock_file {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct lock_file*,int ,int) ;

int FUNC_2(struct repository *VAR_0,
      struct lock_file *VAR_1,
      int VAR_2)
{
 if (!VAR_0->index_file)
  FUNC_0("the repo hasn't been setup");
 return FUNC_1(VAR_1, VAR_0->index_file, VAR_2);
}
