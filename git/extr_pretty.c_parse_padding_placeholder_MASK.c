
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct format_commit_context {int padding; int flush_type; int truncate; } ;
typedef enum flush_type { ____Placeholder_flush_type } flush_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char const*,char*) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,char**,int) ;
 scalar_t__ FUNC_4 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static size_t FUNC_5(const char *VAR_8,
     struct format_commit_context *VAR_9)
{
 const char *VAR_10 = VAR_8;
 enum flush_type VAR_11;
 int VAR_12 = 0;

 switch (*VAR_10++) {
 case '<':
  VAR_11 = VAR_3;
  break;
 case '>':
  if (*VAR_10 == '<') {
   VAR_11 = VAR_0;
   VAR_10++;
  } else if (*VAR_10 == '>') {
   VAR_11 = VAR_2;
   VAR_10++;
  } else
   VAR_11 = VAR_1;
  break;
 default:
  return 0;
 }


 if (*VAR_10 == '|') {
  VAR_12 = 1;
  VAR_10++;
 }

 if (*VAR_10 == '(') {
  const char *VAR_13 = VAR_10 + 1;
  const char *VAR_14 = VAR_13 + FUNC_2(VAR_13, ",)");
  char *VAR_15;
  int VAR_16;
  if (!VAR_14 || VAR_14 == VAR_13)
   return 0;
  VAR_16 = FUNC_3(VAR_13, &VAR_15, 10);
  if (VAR_15 == VAR_13 || VAR_16 == 0)
   return 0;
  if (VAR_16 < 0) {
   if (VAR_12)
    VAR_16 += FUNC_4();
   if (VAR_16 < 0)
    return 0;
  }
  VAR_9->padding = VAR_12 ? -VAR_16 : VAR_16;
  VAR_9->flush_type = VAR_11;

  if (*VAR_14 == ',') {
   VAR_13 = VAR_14 + 1;
   VAR_14 = FUNC_1(VAR_13, ')');
   if (!VAR_14 || VAR_14 == VAR_13)
    return 0;
   if (FUNC_0(VAR_13, "trunc)"))
    VAR_9->truncate = VAR_7;
   else if (FUNC_0(VAR_13, "ltrunc)"))
    VAR_9->truncate = VAR_4;
   else if (FUNC_0(VAR_13, "mtrunc)"))
    VAR_9->truncate = VAR_5;
   else
    return 0;
  } else
   VAR_9->truncate = VAR_6;

  return VAR_14 - VAR_8 + 1;
 }
 return 0;
}
