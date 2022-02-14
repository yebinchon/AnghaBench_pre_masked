
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct child_process {int git_cmd; int args; } ;
struct TYPE_4__ {int verbosity; scalar_t__ dry_run; } ;
struct TYPE_3__ {char const* buf; } ;


 struct child_process VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_1 ;
 scalar_t__ FUNC_3 (struct child_process*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int FUNC_4(int VAR_3, const char **VAR_4)
{
 struct child_process VAR_5 = VAR_0;
 size_t VAR_6;

 VAR_5.git_cmd = 1;
 FUNC_1(&VAR_5.args, "http-push");
 FUNC_1(&VAR_5.args, "--helper-status");
 if (VAR_1.dry_run)
  FUNC_1(&VAR_5.args, "--dry-run");
 if (VAR_1.verbosity > 1)
  FUNC_1(&VAR_5.args, "--verbose");
 FUNC_1(&VAR_5.args, VAR_2.buf);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  FUNC_1(&VAR_5.args, VAR_4[VAR_6]);

 if (FUNC_3(&VAR_5))
  FUNC_2(FUNC_0("git-http-push failed"));
 return 0;
}
