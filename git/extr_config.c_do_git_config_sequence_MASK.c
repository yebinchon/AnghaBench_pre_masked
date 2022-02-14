
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_options {int ignore_cmdline; int ignore_worktree; int ignore_repo; scalar_t__ system_gently; scalar_t__ git_dir; scalar_t__ commondir; } ;
typedef int config_fn_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (char*,int ) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,char*,void*) ;
 scalar_t__ FUNC_7 (int ,void*) ;
 scalar_t__ FUNC_8 () ;
 char* FUNC_9 () ;
 char* FUNC_10 (char*) ;
 char* FUNC_11 (char*,scalar_t__) ;
 scalar_t__ VAR_8 ;
 char* FUNC_12 (char*) ;

__attribute__((used)) static int FUNC_13(const struct config_options *VAR_9,
      config_fn_t VAR_10, void *VAR_11)
{
 int VAR_12 = 0;
 char *VAR_13 = FUNC_12("config");
 char *VAR_14 = FUNC_4("~/.gitconfig", 0);
 char *VAR_15;

 if (VAR_9->commondir)
  VAR_15 = FUNC_11("%s/config", VAR_9->commondir);
 else if (VAR_9->git_dir)
  FUNC_0("git_dir without commondir");
 else
  VAR_15 = ((void*)0);

 VAR_7 = VAR_4;
 if (FUNC_8() && !FUNC_2(FUNC_9(), VAR_6,
        VAR_9->system_gently ?
        VAR_0 : 0))
  VAR_12 += FUNC_6(VAR_10, FUNC_9(),
         VAR_11);

 VAR_7 = VAR_2;
 if (VAR_13 && !FUNC_2(VAR_13, VAR_6, VAR_0))
  VAR_12 += FUNC_6(VAR_10, VAR_13, VAR_11);

 if (VAR_14 && !FUNC_2(VAR_14, VAR_6, VAR_0))
  VAR_12 += FUNC_6(VAR_10, VAR_14, VAR_11);

 VAR_7 = VAR_3;
 if (!VAR_9->ignore_repo && VAR_15 &&
     !FUNC_2(VAR_15, VAR_6, 0))
  VAR_12 += FUNC_6(VAR_10, VAR_15, VAR_11);





 if (!VAR_9->ignore_worktree && VAR_8) {
  char *VAR_16 = FUNC_10("config.worktree");
  if (!FUNC_2(VAR_16, VAR_6, 0))
   VAR_12 += FUNC_6(VAR_10, VAR_16, VAR_11);
  FUNC_5(VAR_16);
 }

 VAR_7 = VAR_1;
 if (!VAR_9->ignore_cmdline && FUNC_7(VAR_10, VAR_11) < 0)
  FUNC_3(FUNC_1("unable to parse command-line config"));

 VAR_7 = VAR_5;
 FUNC_5(VAR_13);
 FUNC_5(VAR_14);
 FUNC_5(VAR_15);
 return VAR_12;
}
