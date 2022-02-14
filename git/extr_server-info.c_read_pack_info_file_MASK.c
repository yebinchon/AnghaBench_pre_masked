
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,int ) ;
 scalar_t__ FUNC_4 (char*,char*,char const**) ;
 scalar_t__ FUNC_5 (struct strbuf*,int *) ;
 int FUNC_6 (struct strbuf*) ;

__attribute__((used)) static int FUNC_7(const char *VAR_2)
{
 FILE *VAR_3;
 struct strbuf VAR_4 = VAR_1;
 int VAR_5 = 0;
 int VAR_6 = 1;

 VAR_3 = FUNC_2(VAR_2, "r");
 if (!VAR_3)
  return 1;

 while (FUNC_5(&VAR_4, VAR_3) != VAR_0) {
  const char *VAR_7;

  if (!VAR_4.len)
   continue;

  if (FUNC_4(VAR_4.buf, "P ", &VAR_7)) {

   if (FUNC_3(VAR_7, VAR_5++))
    goto out_stale;
  } else if (VAR_4.buf[0] == 'D') {

   goto out_stale;
  } else if (VAR_4.buf[0] == 'T') {

   goto out_stale;
  } else {
   FUNC_0("unrecognized: %s", VAR_4.buf);
  }
 }
 VAR_6 = 0;

 out_stale:
 FUNC_6(&VAR_4);
 FUNC_1(VAR_3);
 return VAR_6;
}
