
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {char const* path; } ;
struct strbuf {char const* buf; } ;
struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 () ;
 struct option FUNC_2 (int*,int ,int ) ;
 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,...) ;
 int FUNC_5 (int ,char const*,char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 char* FUNC_7 (char const*) ;
 struct worktree* FUNC_8 (struct worktree**,char const*,char const*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct worktree**) ;
 struct worktree** FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (char const*) ;
 scalar_t__ FUNC_13 (struct worktree*) ;
 int FUNC_14 (int,char const**,char const*,struct option*,int ,int ) ;
 char* FUNC_15 (char const*,char const*) ;
 int FUNC_16 (char const*,char const*) ;
 int FUNC_17 (struct strbuf*,char const*) ;
 int FUNC_18 (struct strbuf*) ;
 int FUNC_19 (struct strbuf*) ;
 int FUNC_20 (struct worktree*,char const*) ;
 int FUNC_21 (int ,struct option*) ;
 int FUNC_22 (struct worktree*) ;
 scalar_t__ FUNC_23 (struct worktree*,struct strbuf*,int ) ;
 char* FUNC_24 (struct worktree*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_25(int VAR_3, const char **VAR_4, const char *VAR_5)
{
 int VAR_6 = 0;
 struct option VAR_7[] = {
  FUNC_2(&VAR_6,
    FUNC_0("force move even if worktree is dirty or locked"),
    VAR_0),
  FUNC_1()
 };
 struct worktree **VAR_8, *VAR_9;
 struct strbuf VAR_10 = VAR_1;
 struct strbuf VAR_11 = VAR_1;
 const char *VAR_12 = ((void*)0);
 char *VAR_13;

 VAR_3 = FUNC_14(VAR_3, VAR_4, VAR_5, VAR_7, VAR_2, 0);
 if (VAR_3 != 2)
  FUNC_21(VAR_2, VAR_7);

 VAR_13 = FUNC_15(VAR_5, VAR_4[1]);
 FUNC_17(&VAR_10, VAR_13);
 FUNC_9(VAR_13);

 VAR_8 = FUNC_11(0);
 VAR_9 = FUNC_8(VAR_8, VAR_5, VAR_4[0]);
 if (!VAR_9)
  FUNC_4(FUNC_3("'%s' is not a working tree"), VAR_4[0]);
 if (FUNC_13(VAR_9))
  FUNC_4(FUNC_3("'%s' is a main working tree"), VAR_4[0]);
 if (FUNC_12(VAR_10.buf)) {
  const char *VAR_14 = FUNC_7(VAR_9->path);

  if (!VAR_14)
   FUNC_4(FUNC_3("could not figure out destination name from '%s'"),
       VAR_9->path);
  FUNC_19(&VAR_10);
  FUNC_17(&VAR_10, VAR_14);
 }
 if (FUNC_6(VAR_10.buf))
  FUNC_4(FUNC_3("target '%s' already exists"), VAR_10.buf);

 FUNC_22(VAR_9);

 if (VAR_6 < 2)
  VAR_12 = FUNC_24(VAR_9);
 if (VAR_12) {
  if (*VAR_12)
   FUNC_4(FUNC_3("cannot move a locked working tree, lock reason: %s\nuse 'move -f -f' to override or unlock first"),
       VAR_12);
  FUNC_4(FUNC_3("cannot move a locked working tree;\nuse 'move -f -f' to override or unlock first"));
 }
 if (FUNC_23(VAR_9, &VAR_11, 0))
  FUNC_4(FUNC_3("validation failed, cannot move working tree: %s"),
      VAR_11.buf);
 FUNC_18(&VAR_11);

 if (FUNC_16(VAR_9->path, VAR_10.buf) == -1)
  FUNC_5(FUNC_3("failed to move '%s' to '%s'"), VAR_9->path, VAR_10.buf);

 FUNC_20(VAR_9, VAR_10.buf);

 FUNC_18(&VAR_10);
 FUNC_10(VAR_8);
 return 0;
}
