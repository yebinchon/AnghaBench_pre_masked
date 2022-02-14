
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;
typedef int regex_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,long,int ) ;
 scalar_t__ FUNC_4 (int *,char const*,int) ;
 scalar_t__ FUNC_5 (int *,char*,int ,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct strbuf*,int *) ;
 int FUNC_8 (struct strbuf*) ;

__attribute__((used)) static int FUNC_9(FILE *VAR_4)
{
 const char *VAR_5 = "^[!-9;-~]+:";
 struct strbuf VAR_6 = VAR_3;
 regex_t VAR_7;
 int VAR_8 = 1;

 if (FUNC_3(VAR_4, 0L, VAR_2))
  FUNC_2(FUNC_0("fseek failed"));

 if (FUNC_4(&VAR_7, VAR_5, VAR_1 | VAR_0))
  FUNC_1("invalid pattern: %s", VAR_5);

 while (!FUNC_7(&VAR_6, VAR_4)) {
  if (!VAR_6.len)
   break;


  if (*VAR_6.buf == '\t' || *VAR_6.buf == ' ')
   continue;


  if (FUNC_5(&VAR_7, VAR_6.buf, 0, ((void*)0), 0)) {
   VAR_8 = 0;
   goto done;
  }
 }

done:
 FUNC_6(&VAR_7);
 FUNC_8(&VAR_6);
 return VAR_8;
}
