
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {char* buf; } ;
struct reflog_walk_info {struct commit_reflog* last_commit_reflog; } ;
struct reflog_info {char* message; char* email; } ;
struct date_mode {int dummy; } ;
struct commit_reflog {int recno; TYPE_1__* reflogs; } ;
struct TYPE_2__ {struct reflog_info* items; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct strbuf*,struct reflog_walk_info*,struct date_mode const*,int,int ) ;
 int FUNC_1 (char*,char*,char*,...) ;
 int FUNC_2 (struct strbuf*) ;

void FUNC_3(struct reflog_walk_info *VAR_1, int VAR_2,
    const struct date_mode *VAR_3, int VAR_4)
{
 if (VAR_1 && VAR_1->last_commit_reflog) {
  struct commit_reflog *VAR_5 = VAR_1->last_commit_reflog;
  struct reflog_info *VAR_6;
  struct strbuf VAR_7 = VAR_0;

  VAR_6 = &VAR_5->reflogs->items[VAR_5->recno+1];
  FUNC_0(&VAR_7, VAR_1, VAR_3, VAR_4, 0);
  if (VAR_2) {
   FUNC_1("%s: %s", VAR_7.buf, VAR_6->message);
  }
  else {
   FUNC_1("Reflog: %s (%s)\nReflog message: %s",
          VAR_7.buf, VAR_6->email, VAR_6->message);
  }

  FUNC_2(&VAR_7);
 }
}
