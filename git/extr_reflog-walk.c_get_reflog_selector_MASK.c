
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct reflog_walk_info {struct commit_reflog* last_commit_reflog; } ;
struct reflog_info {int tz; int timestamp; } ;
struct date_mode {int dummy; } ;
struct commit_reflog {scalar_t__ selector; int recno; TYPE_1__* reflogs; } ;
struct TYPE_2__ {char* short_ref; char* ref; int nr; struct reflog_info* items; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ,struct date_mode const*) ;
 int FUNC_2 (struct strbuf*,char) ;
 int FUNC_3 (struct strbuf*,char*,...) ;
 int FUNC_4 (struct strbuf*,int ) ;

void FUNC_5(struct strbuf *VAR_2,
    struct reflog_walk_info *VAR_3,
    const struct date_mode *VAR_4, int VAR_5,
    int VAR_6)
{
 struct commit_reflog *VAR_7 = VAR_3->last_commit_reflog;
 struct reflog_info *VAR_8;
 const char *VAR_9;

 if (!VAR_7)
  return;

 if (VAR_6) {
  if (!VAR_7->reflogs->short_ref)
   VAR_7->reflogs->short_ref
    = FUNC_0(VAR_7->reflogs->ref, 0);
  VAR_9 = VAR_7->reflogs->short_ref;
 } else {
  VAR_9 = VAR_7->reflogs->ref;
 }

 FUNC_3(VAR_2, "%s@{", VAR_9);
 if (VAR_7->selector == VAR_0 ||
     (VAR_7->selector == VAR_1 && VAR_5)) {
  VAR_8 = &VAR_7->reflogs->items[VAR_7->recno+1];
  FUNC_4(VAR_2, FUNC_1(VAR_8->timestamp, VAR_8->tz, VAR_4));
 } else {
  FUNC_3(VAR_2, "%d", VAR_7->reflogs->nr
       - 2 - VAR_7->recno);
 }

 FUNC_2(VAR_2, '}');
}
