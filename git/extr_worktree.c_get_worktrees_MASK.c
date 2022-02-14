
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worktree {int dummy; } ;
struct strbuf {int buf; } ;
struct dirent {int d_name; } ;
typedef int DIR ;


 int FUNC_0 (struct worktree**,int) ;
 int FUNC_1 (struct worktree**,int,int) ;
 unsigned int VAR_0 ;
 int FUNC_2 (struct worktree**,int,int ) ;
 struct strbuf VAR_1 ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 () ;
 struct worktree* FUNC_5 (int ) ;
 struct worktree* FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct worktree**) ;
 int * FUNC_9 (int ) ;
 struct dirent* FUNC_10 (int *) ;
 int FUNC_11 (struct strbuf*,char*,int ) ;
 int FUNC_12 (struct strbuf*) ;

struct worktree **FUNC_13(unsigned VAR_3)
{
 struct worktree **VAR_4 = ((void*)0);
 struct strbuf VAR_5 = VAR_1;
 DIR *VAR_6;
 struct dirent *VAR_7;
 int VAR_8 = 0, VAR_9 = 2;

 FUNC_0(VAR_4, VAR_9);

 VAR_4[VAR_8++] = FUNC_6();

 FUNC_11(&VAR_5, "%s/worktrees", FUNC_4());
 VAR_6 = FUNC_9(VAR_5.buf);
 FUNC_12(&VAR_5);
 if (VAR_6) {
  while ((VAR_7 = FUNC_10(VAR_6)) != ((void*)0)) {
   struct worktree *VAR_10 = ((void*)0);
   if (FUNC_7(VAR_7->d_name))
    continue;

   if ((VAR_10 = FUNC_5(VAR_7->d_name))) {
    FUNC_1(VAR_4, VAR_8 + 1, VAR_9);
    VAR_4[VAR_8++] = VAR_10;
   }
  }
  FUNC_3(VAR_6);
 }
 FUNC_1(VAR_4, VAR_8 + 1, VAR_9);
 VAR_4[VAR_8] = ((void*)0);

 if (VAR_3 & VAR_0)




  FUNC_2(VAR_4 + 1, VAR_8 - 1, VAR_2);

 FUNC_8(VAR_4);
 return VAR_4;
}
