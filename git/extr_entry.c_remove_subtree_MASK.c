
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct stat {int st_mode; } ;
struct dirent {int d_name; } ;
typedef int DIR ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,struct stat*) ;
 int * FUNC_5 (int ) ;
 struct dirent* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct strbuf*,char) ;
 int FUNC_9 (struct strbuf*,int ) ;
 int FUNC_10 (struct strbuf*,int) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct strbuf *VAR_0)
{
 DIR *VAR_1 = FUNC_5(VAR_0->buf);
 struct dirent *VAR_2;
 int VAR_3 = VAR_0->len;

 if (!VAR_1)
  FUNC_2("cannot opendir '%s'", VAR_0->buf);
 while ((VAR_2 = FUNC_6(VAR_1)) != ((void*)0)) {
  struct stat VAR_4;

  if (FUNC_3(VAR_2->d_name))
   continue;

  FUNC_8(VAR_0, '/');
  FUNC_9(VAR_0, VAR_2->d_name);
  if (FUNC_4(VAR_0->buf, &VAR_4))
   FUNC_2("cannot lstat '%s'", VAR_0->buf);
  if (FUNC_0(VAR_4.st_mode))
   FUNC_12(VAR_0);
  else if (FUNC_11(VAR_0->buf))
   FUNC_2("cannot unlink '%s'", VAR_0->buf);
  FUNC_10(VAR_0, VAR_3);
 }
 FUNC_1(VAR_1);
 if (FUNC_7(VAR_0->buf))
  FUNC_2("cannot rmdir '%s'", VAR_0->buf);
}
