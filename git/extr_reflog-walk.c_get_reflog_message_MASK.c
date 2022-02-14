
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct reflog_walk_info {struct commit_reflog* last_commit_reflog; } ;
struct reflog_info {int message; } ;
struct commit_reflog {int recno; TYPE_1__* reflogs; } ;
struct TYPE_2__ {struct reflog_info* items; } ;


 int FUNC_0 (struct strbuf*,int ,size_t) ;
 size_t FUNC_1 (int ) ;

void FUNC_2(struct strbuf *VAR_0,
   struct reflog_walk_info *VAR_1)
{
 struct commit_reflog *VAR_2 = VAR_1->last_commit_reflog;
 struct reflog_info *VAR_3;
 size_t VAR_4;

 if (!VAR_2)
  return;

 VAR_3 = &VAR_2->reflogs->items[VAR_2->recno+1];
 VAR_4 = FUNC_1(VAR_3->message);
 if (VAR_4 > 0)
  VAR_4--;
 FUNC_0(VAR_0, VAR_3->message, VAR_4);
}
