
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; int len; } ;


 struct strbuf VAR_0 ;
 char* FUNC_0 () ;
 char const* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct strbuf*,struct strbuf*,char const*) ;
 int FUNC_2 (struct strbuf*,int,char const*,int) ;
 int FUNC_3 (struct strbuf*) ;
 char* FUNC_4 (char const*,char) ;
 char* FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(struct strbuf *VAR_3, const char *VAR_4)
{
 struct strbuf VAR_5 = VAR_0;
 int VAR_6, VAR_7;
 const char *VAR_8;


 VAR_8 = FUNC_5(VAR_3->buf, "\n\n");
 if (!VAR_8)
  VAR_6 = VAR_3->len;
 else
  VAR_6 = VAR_8 - VAR_3->buf + 1;

 if (!VAR_4 || !*VAR_4)
  VAR_4 = FUNC_0();
 if (FUNC_1(VAR_3, &VAR_5, VAR_4)) {
  FUNC_3(&VAR_5);
  return -1;
 }

 for (VAR_7 = 0; VAR_5.buf[VAR_7]; ) {
  const char *VAR_9 = VAR_5.buf + VAR_7;
  const char *VAR_10 = FUNC_4(VAR_9, '\n');
  int VAR_11 = (VAR_10 - VAR_9) + !!*VAR_10;

  if (!VAR_7) {
   FUNC_2(VAR_3, VAR_6, VAR_1, VAR_2);
   VAR_6 += VAR_2;
  }
  FUNC_2(VAR_3, VAR_6++, " ", 1);
  FUNC_2(VAR_3, VAR_6, VAR_9, VAR_11);
  VAR_6 += VAR_11;
  VAR_7 += VAR_11;
 }
 FUNC_3(&VAR_5);
 return 0;
}
