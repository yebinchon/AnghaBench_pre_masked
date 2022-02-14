
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
struct dirent {int d_name; } ;
typedef int DIR ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,struct strbuf*) ;
 struct dirent* FUNC_8 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (struct strbuf*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_11(void)
{
 struct strbuf VAR_3 = VAR_0;
 DIR *VAR_4 = FUNC_5(FUNC_3("worktrees"));
 struct dirent *VAR_5;
 if (!VAR_4)
  return;
 while ((VAR_5 = FUNC_8(VAR_4)) != ((void*)0)) {
  if (FUNC_4(VAR_5->d_name))
   continue;
  FUNC_10(&VAR_3);
  if (!FUNC_7(VAR_5->d_name, &VAR_3))
   continue;
  if (VAR_1 || VAR_2)
   FUNC_6("%s\n", VAR_3.buf);
  if (VAR_1)
   continue;
  FUNC_1(VAR_5->d_name);
 }
 FUNC_0(VAR_4);
 if (!VAR_1)
  FUNC_2();
 FUNC_9(&VAR_3);
}
