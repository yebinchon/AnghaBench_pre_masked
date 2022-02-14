
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct delta_info {int delta_off; } ;
struct TYPE_3__ {int deltas; int entry_start; } ;
typedef TYPE_1__ git_indexer ;


 int FUNC_0 (struct delta_info*) ;
 struct delta_info* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int *,struct delta_info*) ;

__attribute__((used)) static int FUNC_3(git_indexer *VAR_0)
{
 struct delta_info *VAR_1;

 VAR_1 = FUNC_1(1, sizeof(struct delta_info));
 FUNC_0(VAR_1);
 VAR_1->delta_off = VAR_0->entry_start;

 if (FUNC_2(&VAR_0->deltas, VAR_1) < 0)
  return -1;

 return 0;
}
