
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int id; int path; } ;
struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct worktree const*) ;
 int FUNC_8 (int ,int*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct strbuf*,char*,int ) ;
 int FUNC_11 (struct strbuf*,int ,int,...) ;
 int FUNC_12 (struct strbuf*) ;
 char* FUNC_13 (int ) ;

int FUNC_14(const struct worktree *VAR_2, struct strbuf *VAR_3,
        unsigned VAR_4)
{
 struct strbuf VAR_5 = VAR_0;
 char *VAR_6 = ((void*)0);
 int VAR_7, VAR_8 = -1;

 FUNC_10(&VAR_5, "%s/.git", VAR_2->path);

 if (FUNC_7(VAR_2)) {
  if (FUNC_6(VAR_5.buf)) {
   VAR_8 = 0;
   goto done;
  }






  FUNC_11(VAR_3,
       FUNC_0("'%s' at main working tree is not the repository directory"),
       VAR_5.buf);
  goto done;
 }





 if (!FUNC_5(VAR_2->path)) {
  FUNC_11(VAR_3,
       FUNC_0("'%s' file does not contain absolute path to the working tree location"),
       FUNC_4("worktrees/%s/gitdir", VAR_2->id));
  goto done;
 }

 if (VAR_4 & VAR_1 &&
     !FUNC_1(VAR_2->path)) {
  VAR_8 = 0;
  goto done;
 }

 if (!FUNC_1(VAR_5.buf)) {
  FUNC_11(VAR_3, FUNC_0("'%s' does not exist"), VAR_5.buf);
  goto done;
 }

 VAR_6 = FUNC_13(FUNC_8(VAR_5.buf, &VAR_7));
 if (!VAR_6) {
  FUNC_11(VAR_3, FUNC_0("'%s' is not a .git file, error code %d"),
       VAR_5.buf, VAR_7);
  goto done;
 }

 VAR_8 = FUNC_3(VAR_6, FUNC_9(FUNC_4("worktrees/%s", VAR_2->id)));

 if (VAR_8)
  FUNC_11(VAR_3, FUNC_0("'%s' does not point back to '%s'"),
       VAR_2->path, FUNC_4("worktrees/%s", VAR_2->id));
done:
 FUNC_2(VAR_6);
 FUNC_12(&VAR_5);
 return VAR_8;
}
