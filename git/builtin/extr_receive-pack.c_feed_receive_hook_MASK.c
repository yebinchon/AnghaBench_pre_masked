
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buf; size_t len; } ;
struct receive_hook_feed_state {TYPE_1__ buf; struct command* cmd; scalar_t__ skip_broken; } ;
struct command {struct command* next; int ref_name; int new_oid; int old_oid; scalar_t__ did_not_exist; scalar_t__ error_string; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, const char **VAR_1, size_t *VAR_2)
{
 struct receive_hook_feed_state *VAR_3 = VAR_0;
 struct command *VAR_4 = VAR_3->cmd;

 while (VAR_4 &&
        VAR_3->skip_broken && (VAR_4->error_string || VAR_4->did_not_exist))
  VAR_4 = VAR_4->next;
 if (!VAR_4)
  return -1;
 FUNC_2(&VAR_3->buf);
 FUNC_1(&VAR_3->buf, "%s %s %s\n",
      FUNC_0(&VAR_4->old_oid), FUNC_0(&VAR_4->new_oid),
      VAR_4->ref_name);
 VAR_3->cmd = VAR_4->next;
 if (VAR_1) {
  *VAR_1 = VAR_3->buf.buf;
  *VAR_2 = VAR_3->buf.len;
 }
 return 0;
}
