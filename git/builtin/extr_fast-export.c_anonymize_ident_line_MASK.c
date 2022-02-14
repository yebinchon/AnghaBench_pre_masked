
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct strbuf {char* buf; int len; } const strbuf ;
struct ident_split {char const* date_begin; size_t mail_end; size_t name_begin; char const* tz_end; } ;


 unsigned int FUNC_0 (struct strbuf const*) ;
 int FUNC_1 (char*,int,char const*) ;

 int VAR_0 ;
 char* FUNC_2 (int *,int ,size_t,size_t*) ;
 int VAR_1 ;
 int FUNC_3 (struct ident_split*,char const*,int) ;
 int FUNC_4 (struct strbuf const*,char const*,int) ;
 int FUNC_5 (struct strbuf const*,char) ;
 int FUNC_6 (struct strbuf const*,char*) ;
 int FUNC_7 (struct strbuf const*) ;
 char* FUNC_8 (char const*,char) ;

__attribute__((used)) static void FUNC_9(const char **VAR_2, const char **VAR_3)
{
 static struct strbuf VAR_4[] = { 128, 128 };
 static unsigned VAR_5;

 struct strbuf *VAR_6;
 struct ident_split VAR_7;
 const char *VAR_8;

 VAR_6 = &VAR_4[VAR_5++];
 VAR_5 %= FUNC_0(VAR_4);
 FUNC_7(VAR_6);


 VAR_8 = FUNC_8(*VAR_2, ' ');
 if (!VAR_8)
  FUNC_1("malformed line fed to anonymize_ident_line: %.*s",
      (int)(*VAR_3 - *VAR_2), *VAR_2);
 VAR_8++;
 FUNC_4(VAR_6, *VAR_2, VAR_8 - *VAR_2);

 if (!FUNC_3(&VAR_7, VAR_8, *VAR_3 - VAR_8) &&
     VAR_7.date_begin) {
  const char *VAR_9;
  size_t VAR_10;

  VAR_10 = VAR_7.mail_end - VAR_7.name_begin;
  VAR_9 = FUNC_2(&VAR_1, VAR_0,
          VAR_7.name_begin, &VAR_10);
  FUNC_4(VAR_6, VAR_9, VAR_10);
  FUNC_5(VAR_6, ' ');
  FUNC_4(VAR_6, VAR_7.date_begin, VAR_7.tz_end - VAR_7.date_begin);
 } else {
  FUNC_6(VAR_6, "Malformed Ident <malformed@example.com> 0 -0000");
 }

 *VAR_2 = VAR_6->buf;
 *VAR_3 = VAR_6->buf + VAR_6->len;
}
