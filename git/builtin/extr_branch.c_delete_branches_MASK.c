
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {char* path; } ;
struct strbuf {int buf; } ;
struct object_id {int dummy; } ;
struct commit {int dummy; } ;


 int VAR_0 ;


 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct strbuf VAR_9 ;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*,struct object_id*,struct commit*,int,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,char*,struct object_id*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,...) ;
 struct worktree* FUNC_6 (char*,char*) ;
 char* FUNC_7 (struct object_id*,int ) ;
 int FUNC_8 (char*) ;
 int VAR_10 ;
 scalar_t__ FUNC_9 (struct object_id*) ;
 struct commit* FUNC_10 (int ,int *) ;
 char* FUNC_11 (char const*,int ) ;
 int FUNC_12 (char*,int ,char*) ;
 char* FUNC_13 (char*,int,struct object_id*,int*) ;
 int FUNC_14 (struct strbuf*,char const*,unsigned int) ;
 int FUNC_15 (struct strbuf*) ;
 int FUNC_16 (struct strbuf*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_17(int VAR_12, const char **VAR_13, int VAR_14, int VAR_15,
      int VAR_16)
{
 struct commit *VAR_17 = ((void*)0);
 struct object_id VAR_18;
 char *VAR_19 = ((void*)0);
 const char *VAR_20;
 int VAR_21;
 int VAR_22 = 0;
 int VAR_23 = 0;
 struct strbuf VAR_24 = VAR_9;
 unsigned VAR_25;

 switch (VAR_15) {
 case 128:
  VAR_20 = "refs/remotes/%s";

  VAR_23 = 1;
  VAR_25 = VAR_2;

  VAR_14 = 1;
  break;
 case 129:
  VAR_20 = "refs/heads/%s";
  VAR_25 = VAR_1;
  break;
 default:
  FUNC_4(FUNC_0("cannot use -a with -d"));
 }

 if (!VAR_14) {
  VAR_17 = FUNC_10(VAR_11, &VAR_10);
  if (!VAR_17)
   FUNC_4(FUNC_0("Couldn't look up commit object for HEAD"));
 }
 for (VAR_21 = 0; VAR_21 < VAR_12; VAR_21++, FUNC_16(&VAR_24)) {
  char *VAR_26 = ((void*)0);
  int VAR_27 = 0;

  FUNC_14(&VAR_24, VAR_13[VAR_21], VAR_25);
  FUNC_8(VAR_19);
  VAR_19 = FUNC_11(VAR_20, VAR_24.buf);

  if (VAR_15 == 129) {
   const struct worktree *VAR_28 =
    FUNC_6("HEAD", VAR_19);
   if (VAR_28) {
    FUNC_5(FUNC_0("Cannot delete branch '%s' "
     "checked out at '%s'"),
          VAR_24.buf, VAR_28->path);
    VAR_22 = 1;
    continue;
   }
  }

  VAR_26 = FUNC_13(VAR_19,
     VAR_8
     | VAR_7
     | VAR_6,
     &VAR_18, &VAR_27);
  if (!VAR_26) {
   FUNC_5(VAR_23
         ? FUNC_0("remote-tracking branch '%s' not found.")
         : FUNC_0("branch '%s' not found."), VAR_24.buf);
   VAR_22 = 1;
   continue;
  }

  if (!(VAR_27 & (VAR_4|VAR_3)) &&
      FUNC_1(VAR_24.buf, VAR_19, &VAR_18, VAR_17, VAR_15,
     VAR_14)) {
   VAR_22 = 1;
   goto next;
  }

  if (FUNC_3(((void*)0), VAR_19, FUNC_9(&VAR_18) ? ((void*)0) : &VAR_18,
          VAR_5)) {
   FUNC_5(VAR_23
         ? FUNC_0("Error deleting remote-tracking branch '%s'")
         : FUNC_0("Error deleting branch '%s'"),
         VAR_24.buf);
   VAR_22 = 1;
   goto next;
  }
  if (!VAR_16) {
   FUNC_12(VAR_23
          ? FUNC_0("Deleted remote-tracking branch %s (was %s).\n")
          : FUNC_0("Deleted branch %s (was %s).\n"),
          VAR_24.buf,
          (VAR_27 & VAR_3) ? "broken"
          : (VAR_27 & VAR_4) ? VAR_26
          : FUNC_7(&VAR_18, VAR_0));
  }
  FUNC_2(VAR_24.buf);

 next:
  FUNC_8(VAR_26);
 }

 FUNC_8(VAR_19);
 FUNC_15(&VAR_24);

 return VAR_22;
}
