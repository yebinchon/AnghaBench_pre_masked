
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct parallel_fetch_state {scalar_t__ next; int argv; TYPE_2__* remotes; } ;
struct child_process {int git_cmd; int args; } ;
struct TYPE_4__ {scalar_t__ nr; TYPE_1__* items; } ;
struct TYPE_3__ {char* string; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_4(struct child_process *VAR_1, struct strbuf *VAR_2,
        void *VAR_3, void **VAR_4)
{
 struct parallel_fetch_state *VAR_5 = VAR_3;
 char *VAR_6;

 if (VAR_5->next < 0 || VAR_5->next >= VAR_5->remotes->nr)
  return 0;

 VAR_6 = VAR_5->remotes->items[VAR_5->next++].string;
 *VAR_4 = VAR_6;

 FUNC_2(&VAR_1->args, VAR_5->argv);
 FUNC_1(&VAR_1->args, VAR_6);
 VAR_1->git_cmd = 1;

 if (VAR_0 >= 0)
  FUNC_3(FUNC_0("Fetching %s\n"), VAR_6);

 return 1;
}
