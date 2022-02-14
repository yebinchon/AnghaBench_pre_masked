
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;
struct grep_pat {char* pattern; size_t patternlen; int is_fixed; int regexp; scalar_t__ ignore_case; scalar_t__ fixed; int word_regexp; } ;
struct grep_opt {int pcre2; scalar_t__ extended_regexp_option; scalar_t__ pcre1; scalar_t__ fixed; scalar_t__ ignore_case; int word_regexp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct strbuf VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct grep_pat*,struct grep_opt*) ;
 int FUNC_2 (struct grep_pat*,struct grep_opt*) ;
 int FUNC_3 (struct grep_pat*,struct grep_opt*) ;
 int FUNC_4 (struct grep_pat*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,size_t) ;
 scalar_t__ FUNC_7 (char*,int ,size_t) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int,int *,char*,int) ;
 scalar_t__ FUNC_10 (char*,char const*) ;
 int FUNC_11 (struct strbuf*,char*,int) ;
 int FUNC_12 (struct strbuf*) ;
 int FUNC_13 (char const*) ;

__attribute__((used)) static void FUNC_14(struct grep_pat *VAR_4, struct grep_opt *VAR_5)
{
 int VAR_6;
 int VAR_7 = VAR_2;

 VAR_4->word_regexp = VAR_5->word_regexp;
 VAR_4->ignore_case = VAR_5->ignore_case;
 VAR_4->fixed = VAR_5->fixed;

 if (FUNC_7(VAR_4->pattern, 0, VAR_4->patternlen) && !VAR_5->pcre2)
  FUNC_5(FUNC_0("given pattern contains NULL byte (via -f <file>). This is only supported with -P under PCRE v2"));

 VAR_4->is_fixed = FUNC_6(VAR_4->pattern, VAR_4->patternlen);
 if (VAR_4->fixed || VAR_4->is_fixed) {
  FUNC_1(VAR_4, VAR_5);

  return;
 }

 if (VAR_5->pcre2) {
  FUNC_3(VAR_4, VAR_5);
  return;
 }

 if (VAR_5->pcre1) {
  FUNC_2(VAR_4, VAR_5);
  return;
 }

 if (VAR_4->ignore_case)
  VAR_7 |= VAR_1;
 if (VAR_5->extended_regexp_option)
  VAR_7 |= VAR_0;
 VAR_6 = FUNC_8(&VAR_4->regexp, VAR_4->pattern, VAR_7);
 if (VAR_6) {
  char VAR_8[1024];
  FUNC_9(VAR_6, &VAR_4->regexp, VAR_8, 1024);
  FUNC_4(VAR_4, VAR_8);
 }
}
