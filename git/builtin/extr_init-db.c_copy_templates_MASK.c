
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; int buf; } ;
struct repository_format {scalar_t__ version; } ;
typedef int DIR ;


 int VAR_0 ;
 struct repository_format VAR_1 ;
 struct strbuf VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct repository_format*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct strbuf*,struct strbuf*,int *) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 () ;
 char* FUNC_6 (int ) ;
 char* VAR_4 ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (struct repository_format*,int ) ;
 int FUNC_9 (struct strbuf*,char const*) ;
 int FUNC_10 (struct strbuf*,char) ;
 int FUNC_11 (struct strbuf*) ;
 int FUNC_12 (struct strbuf*,size_t) ;
 char* FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (struct repository_format*,struct strbuf*) ;
 int FUNC_15 (int ,char const*,...) ;

__attribute__((used)) static void FUNC_16(const char *VAR_5)
{
 struct strbuf VAR_6 = VAR_2;
 struct strbuf VAR_7 = VAR_2;
 size_t VAR_8;
 struct repository_format VAR_9 = VAR_1;
 struct strbuf VAR_10 = VAR_2;
 DIR *VAR_11;
 char *VAR_12 = ((void*)0);

 if (!VAR_5)
  VAR_5 = FUNC_6(VAR_3);
 if (!VAR_5)
  VAR_5 = VAR_4;
 if (!VAR_5)
  VAR_5 = VAR_12 = FUNC_13(VAR_0);
 if (!VAR_5[0]) {
  FUNC_4(VAR_12);
  return;
 }

 FUNC_9(&VAR_7, VAR_5);
 FUNC_10(&VAR_7, '/');
 VAR_8 = VAR_7.len;

 VAR_11 = FUNC_7(VAR_7.buf);
 if (!VAR_11) {
  FUNC_15(FUNC_0("templates not found in %s"), VAR_5);
  goto free_return;
 }


 FUNC_9(&VAR_7, "config");
 FUNC_8(&VAR_9, VAR_7.buf);
 FUNC_12(&VAR_7, VAR_8);





 if (VAR_9.version >= 0 &&
     FUNC_14(&VAR_9, &VAR_10) < 0) {
  FUNC_15(FUNC_0("not copying templates from '%s': %s"),
     VAR_5, VAR_10.buf);
  FUNC_11(&VAR_10);
  goto close_free_return;
 }

 FUNC_9(&VAR_6, FUNC_5());
 FUNC_10(&VAR_6, '/');
 FUNC_3(&VAR_6, &VAR_7, VAR_11);
close_free_return:
 FUNC_2(VAR_11);
free_return:
 FUNC_4(VAR_12);
 FUNC_11(&VAR_6);
 FUNC_11(&VAR_7);
 FUNC_1(&VAR_9);
}
