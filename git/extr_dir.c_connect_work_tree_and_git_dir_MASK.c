
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int ) ;
 char* FUNC_5 (char const*,int) ;
 int FUNC_6 (char*,char*,struct strbuf*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct strbuf*,char*,char const*) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (int ,char*,int ) ;

void FUNC_11(const char *VAR_1,
       const char *VAR_2,
       int VAR_3)
{
 struct strbuf VAR_4 = VAR_0;
 struct strbuf VAR_5 = VAR_0;
 struct strbuf VAR_6 = VAR_0;
 char *VAR_7, *VAR_8;


 FUNC_8(&VAR_4, "%s/.git", VAR_1);
 if (FUNC_7(VAR_4.buf))
  FUNC_2(FUNC_0("could not create directories for %s"), VAR_4.buf);


 FUNC_8(&VAR_5, "%s/config", VAR_2);
 if (FUNC_7(VAR_5.buf))
  FUNC_2(FUNC_0("could not create directories for %s"), VAR_5.buf);

 VAR_7 = FUNC_5(VAR_2, 1);
 VAR_8 = FUNC_5(VAR_1, 1);


 FUNC_10(VAR_4.buf, "gitdir: %s",
     FUNC_6(VAR_7, VAR_8, &VAR_6));

 FUNC_4(VAR_5.buf, "core.worktree",
          FUNC_6(VAR_8, VAR_7, &VAR_6));

 FUNC_9(&VAR_4);
 FUNC_9(&VAR_5);
 FUNC_9(&VAR_6);

 if (VAR_3)
  FUNC_1(VAR_8, VAR_7);

 FUNC_3(VAR_8);
 FUNC_3(VAR_7);
}
