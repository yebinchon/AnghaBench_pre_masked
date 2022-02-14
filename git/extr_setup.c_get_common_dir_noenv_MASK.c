
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct strbuf*,char*) ;
 int FUNC_5 (struct strbuf*,struct strbuf*) ;
 int FUNC_6 (struct strbuf*,char*,char const*) ;
 int FUNC_7 (struct strbuf*,char const*) ;
 scalar_t__ FUNC_8 (struct strbuf*,char*,int ) ;
 int FUNC_9 (struct strbuf*) ;
 int FUNC_10 (struct strbuf*) ;

int FUNC_11(struct strbuf *VAR_1, const char *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 struct strbuf VAR_4 = VAR_0;
 int VAR_5 = 0;

 FUNC_6(&VAR_4, "%s/commondir", VAR_2);
 if (FUNC_2(VAR_4.buf)) {
  if (FUNC_8(&VAR_3, VAR_4.buf, 0) <= 0)
   FUNC_1(FUNC_0("failed to read %s"), VAR_4.buf);
  while (VAR_3.len && (VAR_3.buf[VAR_3.len - 1] == '\n' ||
        VAR_3.buf[VAR_3.len - 1] == '\r'))
   VAR_3.len--;
  VAR_3.buf[VAR_3.len] = '\0';
  FUNC_10(&VAR_4);
  if (!FUNC_3(VAR_3.buf))
   FUNC_6(&VAR_4, "%s/", VAR_2);
  FUNC_5(&VAR_4, &VAR_3);
  FUNC_4(VAR_1, VAR_4.buf);
  VAR_5 = 1;
 } else {
  FUNC_7(VAR_1, VAR_2);
 }

 FUNC_9(&VAR_3);
 FUNC_9(&VAR_4);
 return VAR_5;
}
