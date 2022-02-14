
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;
struct ident_split {char* name_begin; char* name_end; char* mail_begin; char* mail_end; char const* date_begin; char const* date_end; } ;
struct date_mode {int dummy; } ;


 struct date_mode const* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const**,size_t*,char const**,size_t*) ;
 char* FUNC_2 (char const*,char,size_t) ;
 int FUNC_3 (struct ident_split*,struct date_mode const*) ;
 scalar_t__ FUNC_4 (struct ident_split*,char const*,int) ;
 int FUNC_5 (struct strbuf*,char const*,int) ;
 int FUNC_6 (struct strbuf*,int ) ;

__attribute__((used)) static size_t FUNC_7(struct strbuf *VAR_4, char VAR_5,
     const char *VAR_6, int VAR_7,
     const struct date_mode *VAR_8)
{

 const int VAR_9 = 2;
 struct ident_split VAR_10;
 const char *VAR_11, *VAR_12;
 size_t VAR_13, VAR_14;

 if (FUNC_4(&VAR_10, VAR_6, VAR_7) < 0)
  goto skip;

 VAR_11 = VAR_10.name_begin;
 VAR_14 = VAR_10.name_end - VAR_10.name_begin;
 VAR_12 = VAR_10.mail_begin;
 VAR_13 = VAR_10.mail_end - VAR_10.mail_begin;

 if (VAR_5 == 'N' || VAR_5 == 'E' || VAR_5 == 'L')
  FUNC_1(&VAR_12, &VAR_13, &VAR_11, &VAR_14);
 if (VAR_5 == 'n' || VAR_5 == 'N') {
  FUNC_5(VAR_4, VAR_11, VAR_14);
  return VAR_9;
 }
 if (VAR_5 == 'e' || VAR_5 == 'E') {
  FUNC_5(VAR_4, VAR_12, VAR_13);
  return VAR_9;
 }
 if (VAR_5 == 'l' || VAR_5 == 'L') {
  const char *VAR_15 = FUNC_2(VAR_12, '@', VAR_13);
  if (VAR_15)
   VAR_13 = VAR_15 - VAR_12;
  FUNC_5(VAR_4, VAR_12, VAR_13);
  return VAR_9;
 }

 if (!VAR_10.date_begin)
  goto skip;

 if (VAR_5 == 't') {
  FUNC_5(VAR_4, VAR_10.date_begin, VAR_10.date_end - VAR_10.date_begin);
  return VAR_9;
 }

 switch (VAR_5) {
 case 'd':
  FUNC_6(VAR_4, FUNC_3(&VAR_10, VAR_8));
  return VAR_9;
 case 'D':
  FUNC_6(VAR_4, FUNC_3(&VAR_10, FUNC_0(VAR_3)));
  return VAR_9;
 case 'r':
  FUNC_6(VAR_4, FUNC_3(&VAR_10, FUNC_0(VAR_2)));
  return VAR_9;
 case 'i':
  FUNC_6(VAR_4, FUNC_3(&VAR_10, FUNC_0(VAR_0)));
  return VAR_9;
 case 'I':
  FUNC_6(VAR_4, FUNC_3(&VAR_10, FUNC_0(VAR_1)));
  return VAR_9;
 }

skip:





 if (VAR_5 == 'n' || VAR_5 == 'e' || VAR_5 == 't' || VAR_5 == 'd'
     || VAR_5 == 'D' || VAR_5 == 'r' || VAR_5 == 'i')
  return VAR_9;

 return 0;
}
