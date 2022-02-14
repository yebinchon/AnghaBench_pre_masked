
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reflog_walk_info {struct commit_reflog* last_commit_reflog; } ;
struct reflog_info {char const* email; } ;
struct commit_reflog {int recno; TYPE_1__* reflogs; } ;
struct TYPE_2__ {struct reflog_info* items; } ;



const char *FUNC_0(struct reflog_walk_info *VAR_0)
{
 struct commit_reflog *VAR_1 = VAR_0->last_commit_reflog;
 struct reflog_info *VAR_2;

 if (!VAR_1)
  return ((void*)0);

 VAR_2 = &VAR_1->reflogs->items[VAR_1->recno+1];
 return VAR_2->email;
}
