
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; scalar_t__ len; } ;
struct repository_format {scalar_t__ version; } ;
struct dirent {int d_name; } ;
typedef int DIR ;


 struct repository_format VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (struct repository_format*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct strbuf*,char*) ;
 char* FUNC_4 (char const*,char*,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (struct repository_format*,int ) ;
 struct dirent* FUNC_8 (int *) ;
 int FUNC_9 (struct strbuf*,char*) ;
 int FUNC_10 (struct strbuf*) ;
 int FUNC_11 (struct strbuf*,scalar_t__) ;
 scalar_t__ FUNC_12 (char*) ;

int FUNC_13(const char *VAR_2)
{
 char *VAR_3;
 struct strbuf VAR_4 = VAR_1;
 DIR *VAR_5;
 struct dirent *VAR_6;
 int VAR_7 = 0;
 struct repository_format VAR_8 = VAR_0;

 VAR_3 = FUNC_4(VAR_2, "%s", "");
 if (!VAR_3)
  return 0;


 FUNC_3(&VAR_4, VAR_3);
 FUNC_2(VAR_3);





 FUNC_9(&VAR_4, "/config");
 FUNC_7(&VAR_8, VAR_4.buf);
 if (VAR_8.version != 0) {
  FUNC_10(&VAR_4);
  FUNC_0(&VAR_8);
  return 1;
 }
 FUNC_0(&VAR_8);


 FUNC_11(&VAR_4, VAR_4.len - FUNC_12("config"));
 FUNC_9(&VAR_4, "worktrees");


 VAR_5 = FUNC_6(VAR_4.buf);
 FUNC_10(&VAR_4);

 if (!VAR_5)
  return 0;

 while ((VAR_6 = FUNC_8(VAR_5)) != ((void*)0)) {
  if (FUNC_5(VAR_6->d_name))
   continue;

  VAR_7 = 1;
  break;
 }
 FUNC_1(VAR_5);
 return VAR_7;
}
