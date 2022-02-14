
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct dirent {int d_name; } ;
struct cmdnames {int dummy; } ;
typedef int DIR ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct cmdnames*,char const*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char const*) ;
 struct dirent* FUNC_4 (int *) ;
 int FUNC_5 (int ,char const*,char const**) ;
 int FUNC_6 (struct strbuf*,char*,char const*) ;
 int FUNC_7 (struct strbuf*,int ) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (struct strbuf*,int) ;
 int FUNC_10 (char const*,char*,size_t*) ;
 size_t FUNC_11 (char const*) ;

__attribute__((used)) static void FUNC_12(struct cmdnames *VAR_1,
      const char *VAR_2,
      const char *VAR_3)
{
 DIR *VAR_4 = FUNC_3(VAR_2);
 struct dirent *VAR_5;
 struct strbuf VAR_6 = VAR_0;
 int VAR_7;

 if (!VAR_4)
  return;
 if (!VAR_3)
  VAR_3 = "git-";

 FUNC_6(&VAR_6, "%s/", VAR_2);
 VAR_7 = VAR_6.len;

 while ((VAR_5 = FUNC_4(VAR_4)) != ((void*)0)) {
  const char *VAR_8;
  size_t VAR_9;

  if (!FUNC_5(VAR_5->d_name, VAR_3, &VAR_8))
   continue;

  FUNC_9(&VAR_6, VAR_7);
  FUNC_7(&VAR_6, VAR_5->d_name);
  if (!FUNC_2(VAR_6.buf))
   continue;

  VAR_9 = FUNC_11(VAR_8);
  FUNC_10(VAR_8, ".exe", &VAR_9);

  FUNC_0(VAR_1, VAR_8, VAR_9);
 }
 FUNC_1(VAR_4);
 FUNC_8(&VAR_6);
}
