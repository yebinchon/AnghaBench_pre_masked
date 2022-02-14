
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; scalar_t__ len; } ;
struct shortlog {scalar_t__ committer; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (struct shortlog*,int ,int ) ;
 scalar_t__ FUNC_1 (struct shortlog*,struct strbuf*,char const*) ;
 int FUNC_2 (int ,char const*,char const**) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct strbuf*,int ) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static void FUNC_6(struct shortlog *VAR_3)
{
 struct strbuf VAR_4 = VAR_1;
 struct strbuf VAR_5 = VAR_1;
 struct strbuf VAR_6 = VAR_1;
 static const char *VAR_7[2] = { "Author: ", "author " };
 static const char *VAR_8[2] = { "Commit: ", "committer " };
 const char **VAR_9;

 VAR_9 = VAR_3->committer ? VAR_8 : VAR_7;
 while (FUNC_3(&VAR_4, VAR_2) != VAR_0) {
  const char *VAR_10;
  if (!FUNC_2(VAR_4.buf, VAR_9[0], &VAR_10) &&
      !FUNC_2(VAR_4.buf, VAR_9[1], &VAR_10))
   continue;
  while (FUNC_3(&VAR_6, VAR_2) != VAR_0 &&
         VAR_6.len)
   ;
  while (FUNC_3(&VAR_6, VAR_2) != VAR_0 &&
         !VAR_6.len)
   ;

  FUNC_5(&VAR_5);
  if (FUNC_1(VAR_3, &VAR_5, VAR_10) < 0)
   continue;

  FUNC_0(VAR_3, VAR_5.buf, VAR_6.buf);
 }
 FUNC_4(&VAR_4);
 FUNC_4(&VAR_5);
 FUNC_4(&VAR_6);
}
