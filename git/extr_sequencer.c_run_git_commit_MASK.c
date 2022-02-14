
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct replay_opts {int explicit_cleanup; int record_origin; int signoff; int gpg_sign; } ;
struct child_process {int git_cmd; int args; int env_array; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 struct child_process VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,char const*,int *) ;
 int FUNC_4 (int ,char const*,char const*) ;
 char* FUNC_5 (struct replay_opts*) ;
 scalar_t__ FUNC_6 (struct replay_opts*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (struct child_process*) ;
 int FUNC_9 (struct child_process*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_10(struct repository *VAR_7,
     const char *VAR_8,
     struct replay_opts *VAR_9,
     unsigned int VAR_10)
{
 struct child_process VAR_11 = VAR_2;

 VAR_11.git_cmd = 1;

 if (FUNC_6(VAR_9) && FUNC_7(&VAR_11.env_array)) {
  const char *VAR_12 = FUNC_5(VAR_9);

  return FUNC_4(FUNC_0(VAR_6),
        VAR_12, VAR_12);
 }

 FUNC_1(&VAR_11.args, "commit");

 if (!(VAR_10 & VAR_5))
  FUNC_1(&VAR_11.args, "-n");
 if ((VAR_10 & VAR_1))
  FUNC_1(&VAR_11.args, "--amend");
 if (VAR_9->gpg_sign)
  FUNC_2(&VAR_11.args, "-S%s", VAR_9->gpg_sign);
 if (VAR_8)
  FUNC_3(&VAR_11.args, "-F", VAR_8, ((void*)0));
 else if (!(VAR_10 & VAR_4))
  FUNC_3(&VAR_11.args, "-C", "HEAD", ((void*)0));
 if ((VAR_10 & VAR_3))
  FUNC_1(&VAR_11.args, "--cleanup=strip");
 if ((VAR_10 & VAR_4))
  FUNC_1(&VAR_11.args, "-e");
 else if (!(VAR_10 & VAR_3) &&
   !VAR_9->signoff && !VAR_9->record_origin &&
   !VAR_9->explicit_cleanup)
  FUNC_1(&VAR_11.args, "--cleanup=verbatim");

 if ((VAR_10 & VAR_0))
  FUNC_1(&VAR_11.args, "--allow-empty");

 if (!(VAR_10 & VAR_4))
  FUNC_1(&VAR_11.args, "--allow-empty-message");

 if (FUNC_6(VAR_9) && !(VAR_10 & VAR_4))
  return FUNC_9(&VAR_11);
 else
  return FUNC_8(&VAR_11);
}
