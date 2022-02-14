
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; } ;
typedef int FILE ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (struct strbuf*,char const**) ;
 int FUNC_5 (struct strbuf*) ;

__attribute__((used)) static int FUNC_6(const char **VAR_1)
{
 int VAR_2 = 0;
 FILE *VAR_3 = FUNC_1(FUNC_3(), "a");
 struct strbuf VAR_4 = VAR_0;

 if (!VAR_3)
  return -1;

 if (FUNC_2(VAR_3, "git bisect start") < 1) {
  VAR_2 = -1;
  goto finish;
 }

 FUNC_4(&VAR_4, VAR_1);
 if (FUNC_2(VAR_3, "%s\n", VAR_4.buf) < 1)
  VAR_2 = -1;

finish:
 FUNC_0(VAR_3);
 FUNC_5(&VAR_4);
 return VAR_2;
}
