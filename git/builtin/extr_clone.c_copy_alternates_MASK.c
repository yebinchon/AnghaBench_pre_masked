
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 char* FUNC_4 (char*,char const*,char*) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (struct strbuf*,int *) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (char*,char const*,char*) ;
 int * FUNC_9 (char*,char*) ;

__attribute__((used)) static void FUNC_10(struct strbuf *VAR_2, const char *VAR_3)
{
 FILE *VAR_4 = FUNC_9(VAR_2->buf, "r");
 struct strbuf VAR_5 = VAR_1;

 while (FUNC_6(&VAR_5, VAR_4) != VAR_0) {
  char *VAR_6;
  if (!VAR_5.len || VAR_5.buf[0] == '#')
   continue;
  if (FUNC_3(VAR_5.buf)) {
   FUNC_0(VAR_5.buf);
   continue;
  }
  VAR_6 = FUNC_4("%s/objects/%s", VAR_3, VAR_5.buf);
  if (!FUNC_5(VAR_6, VAR_6))
   FUNC_0(VAR_6);
  else
   FUNC_8("skipping invalid relative alternate: %s/%s",
    VAR_3, VAR_5.buf);
  FUNC_2(VAR_6);
 }
 FUNC_7(&VAR_5);
 FUNC_1(VAR_4);
}
