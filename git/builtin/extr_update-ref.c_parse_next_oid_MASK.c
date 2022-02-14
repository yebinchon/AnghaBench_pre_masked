
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char const* buf; int len; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (char*,char const*,char const*,...) ;
 scalar_t__ FUNC_1 (char const*,struct object_id*) ;
 char VAR_3 ;
 int FUNC_2 (struct object_id*) ;
 char* FUNC_3 (char const*,struct strbuf*) ;
 int FUNC_4 (struct strbuf*,char const*) ;
 int FUNC_5 (struct strbuf*) ;
 int FUNC_6 (char*,char const*,char const*) ;

__attribute__((used)) static int FUNC_7(struct strbuf *VAR_4, const char **VAR_5,
     struct object_id *VAR_6,
     const char *VAR_7, const char *VAR_8,
     int VAR_9)
{
 struct strbuf VAR_10 = VAR_2;
 int VAR_11 = 0;

 if (*VAR_5 == VAR_4->buf + VAR_4->len)
  goto eof;

 if (VAR_3) {

  if (!**VAR_5 || **VAR_5 == VAR_3)
   return 1;
  if (**VAR_5 != ' ')
   FUNC_0("%s %s: expected SP but got: %s",
       VAR_7, VAR_8, *VAR_5);
  (*VAR_5)++;
  *VAR_5 = FUNC_3(*VAR_5, &VAR_10);
  if (VAR_10.len) {
   if (FUNC_1(VAR_10.buf, VAR_6))
    goto invalid;
  } else {

   FUNC_2(VAR_6);
  }
 } else {

  if (**VAR_5)
   FUNC_0("%s %s: expected NUL but got: %s",
       VAR_7, VAR_8, *VAR_5);
  (*VAR_5)++;
  if (*VAR_5 == VAR_4->buf + VAR_4->len)
   goto eof;
  FUNC_4(&VAR_10, *VAR_5);
  *VAR_5 += VAR_10.len;

  if (VAR_10.len) {
   if (FUNC_1(VAR_10.buf, VAR_6))
    goto invalid;
  } else if (VAR_9 & VAR_0) {

   FUNC_6("%s %s: missing <newvalue>, treating as zero",
    VAR_7, VAR_8);
   FUNC_2(VAR_6);
  } else {




   VAR_11 = 1;
  }
 }

 FUNC_5(&VAR_10);

 return VAR_11;

 invalid:
 FUNC_0(VAR_9 & VAR_1 ?
     "%s %s: invalid <oldvalue>: %s" :
     "%s %s: invalid <newvalue>: %s",
     VAR_7, VAR_8, VAR_10.buf);

 eof:
 FUNC_0(VAR_9 & VAR_1 ?
     "%s %s: unexpected end of input when reading <oldvalue>" :
     "%s %s: unexpected end of input when reading <newvalue>",
     VAR_7, VAR_8);
}
