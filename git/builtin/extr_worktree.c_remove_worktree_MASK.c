
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int id; int path; } ;
struct strbuf {char const* buf; } ;
struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 () ;
 struct option FUNC_2 (int*,int ,int ) ;
 int VAR_0 ;
 struct strbuf VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct worktree*,char const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct worktree*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,...) ;
 scalar_t__ FUNC_9 (int ) ;
 struct worktree* FUNC_10 (struct worktree**,char const*,char const*) ;
 int FUNC_11 (struct worktree**) ;
 struct worktree** FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (struct worktree*) ;
 int FUNC_14 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_15 (struct strbuf*) ;
 int FUNC_16 (int ,struct option*) ;
 scalar_t__ FUNC_17 (struct worktree*,struct strbuf*,int ) ;
 char* FUNC_18 (struct worktree*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_19(int VAR_4, const char **VAR_5, const char *VAR_6)
{
 int VAR_7 = 0;
 struct option VAR_8[] = {
  FUNC_2(&VAR_7,
    FUNC_0("force removal even if worktree is dirty or locked"),
    VAR_0),
  FUNC_1()
 };
 struct worktree **VAR_9, *VAR_10;
 struct strbuf VAR_11 = VAR_1;
 const char *VAR_12 = ((void*)0);
 int VAR_13 = 0;

 VAR_4 = FUNC_14(VAR_4, VAR_5, VAR_6, VAR_8, VAR_3, 0);
 if (VAR_4 != 1)
  FUNC_16(VAR_3, VAR_8);

 VAR_9 = FUNC_12(0);
 VAR_10 = FUNC_10(VAR_9, VAR_6, VAR_5[0]);
 if (!VAR_10)
  FUNC_8(FUNC_3("'%s' is not a working tree"), VAR_5[0]);
 if (FUNC_13(VAR_10))
  FUNC_8(FUNC_3("'%s' is a main working tree"), VAR_5[0]);
 if (VAR_7 < 2)
  VAR_12 = FUNC_18(VAR_10);
 if (VAR_12) {
  if (*VAR_12)
   FUNC_8(FUNC_3("cannot remove a locked working tree, lock reason: %s\nuse 'remove -f -f' to override or unlock first"),
       VAR_12);
  FUNC_8(FUNC_3("cannot remove a locked working tree;\nuse 'remove -f -f' to override or unlock first"));
 }
 if (FUNC_17(VAR_10, &VAR_11, VAR_2))
  FUNC_8(FUNC_3("validation failed, cannot remove working tree: %s"),
      VAR_11.buf);
 FUNC_15(&VAR_11);

 if (FUNC_9(VAR_10->path)) {
  if (!VAR_7)
   FUNC_4(VAR_10, VAR_5[0]);

  VAR_13 |= FUNC_6(VAR_10);
 }




 VAR_13 |= FUNC_5(VAR_10->id);
 FUNC_7();

 FUNC_11(VAR_9);
 return VAR_13;
}
