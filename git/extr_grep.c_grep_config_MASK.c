
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_opt {int relative; char** colors; int color; void* columnnum; void* linenum; int pattern_type_option; void* extended_regexp_option; } ;


 int FUNC_0 (int ,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*) ;
 void* FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,char const*) ;
 struct grep_opt VAR_1 ;
 int FUNC_5 (char const*,char const*) ;
 scalar_t__ FUNC_6 (char const*,char*,char const**) ;
 int FUNC_7 (char const*,char*) ;
 scalar_t__ FUNC_8 (char const*,char const*) ;

int FUNC_9(const char *VAR_2, const char *VAR_3, void *VAR_4)
{
 struct grep_opt *VAR_5 = &VAR_1;
 const char *VAR_6;

 if (FUNC_8(VAR_2, VAR_3) < 0)
  return -1;

 if (!FUNC_7(VAR_2, "grep.extendedregexp")) {
  VAR_5->extended_regexp_option = FUNC_3(VAR_2, VAR_3);
  return 0;
 }

 if (!FUNC_7(VAR_2, "grep.patterntype")) {
  VAR_5->pattern_type_option = FUNC_5(VAR_2, VAR_3);
  return 0;
 }

 if (!FUNC_7(VAR_2, "grep.linenumber")) {
  VAR_5->linenum = FUNC_3(VAR_2, VAR_3);
  return 0;
 }
 if (!FUNC_7(VAR_2, "grep.column")) {
  VAR_5->columnnum = FUNC_3(VAR_2, VAR_3);
  return 0;
 }

 if (!FUNC_7(VAR_2, "grep.fullname")) {
  VAR_5->relative = !FUNC_3(VAR_2, VAR_3);
  return 0;
 }

 if (!FUNC_7(VAR_2, "color.grep"))
  VAR_5->color = FUNC_4(VAR_2, VAR_3);
 if (!FUNC_7(VAR_2, "color.grep.match")) {
  if (FUNC_9("color.grep.matchcontext", VAR_3, VAR_4) < 0)
   return -1;
  if (FUNC_9("color.grep.matchselected", VAR_3, VAR_4) < 0)
   return -1;
 } else if (FUNC_6(VAR_2, "color.grep.", &VAR_6)) {
  int VAR_7 = FUNC_0(VAR_0, VAR_6);
  char *VAR_8;

  if (VAR_7 < 0)
   return -1;
  VAR_8 = VAR_5->colors[VAR_7];
  if (!VAR_3)
   return FUNC_2(VAR_2);
  return FUNC_1(VAR_3, VAR_8);
 }
 return 0;
}
