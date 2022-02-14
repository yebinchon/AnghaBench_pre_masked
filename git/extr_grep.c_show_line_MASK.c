
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct grep_opt {scalar_t__ last_shown; char const** colors; int (* output ) (struct grep_opt*,char*,int) ;scalar_t__ only_matching; scalar_t__ color; scalar_t__ show_hunk_mark; scalar_t__ funcbody; scalar_t__ post_context; scalar_t__ pre_context; scalar_t__ file_break; } ;
typedef int ssize_t ;
struct TYPE_3__ {int rm_so; int rm_eo; } ;
typedef TYPE_1__ regmatch_t ;
typedef enum grep_context { ____Placeholder_grep_context } grep_context ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct grep_opt*,char*,char*,int,TYPE_1__*,int) ;
 int FUNC_1 (struct grep_opt*,char*,int,char const*) ;
 int FUNC_2 (struct grep_opt*,char const*,unsigned int,int,char) ;
 int FUNC_3 (struct grep_opt*,char*,int) ;
 int FUNC_4 (struct grep_opt*,char*,int) ;
 int FUNC_5 (struct grep_opt*,char*,int) ;
 int FUNC_6 (struct grep_opt*,char*,int) ;
 int FUNC_7 (struct grep_opt*,char*,int) ;

__attribute__((used)) static void FUNC_8(struct grep_opt *VAR_8, char *VAR_9, char *VAR_10,
        const char *VAR_11, unsigned VAR_12, ssize_t VAR_13, char VAR_14)
{
 int VAR_15 = VAR_10 - VAR_9;
 const char *VAR_16 = ((void*)0);
 const char *VAR_17 = ((void*)0);

 if (VAR_8->file_break && VAR_8->last_shown == 0) {
  if (VAR_8->show_hunk_mark)
   VAR_8->output(VAR_8, "\n", 1);
 } else if (VAR_8->pre_context || VAR_8->post_context || VAR_8->funcbody) {
  if (VAR_8->last_shown == 0) {
   if (VAR_8->show_hunk_mark) {
    FUNC_1(VAR_8, "--", 2, VAR_8->colors[VAR_5]);
    VAR_8->output(VAR_8, "\n", 1);
   }
  } else if (VAR_12 > VAR_8->last_shown + 1) {
   FUNC_1(VAR_8, "--", 2, VAR_8->colors[VAR_5]);
   VAR_8->output(VAR_8, "\n", 1);
  }
 }
 if (!VAR_8->only_matching) {




  FUNC_2(VAR_8, VAR_11, VAR_12, VAR_13, VAR_14);
 }
 if (VAR_8->color || VAR_8->only_matching) {
  regmatch_t VAR_18;
  enum grep_context VAR_19 = VAR_6;
  int VAR_20 = *VAR_10;
  int VAR_21 = 0;

  if (VAR_8->color) {
   if (VAR_14 == ':')
    VAR_16 = VAR_8->colors[VAR_3];
   else
    VAR_16 = VAR_8->colors[VAR_2];
   if (VAR_14 == ':')
    VAR_17 = VAR_8->colors[VAR_4];
   else if (VAR_14 == '-')
    VAR_17 = VAR_8->colors[VAR_0];
   else if (VAR_14 == '=')
    VAR_17 = VAR_8->colors[VAR_1];
  }
  *VAR_10 = '\0';
  while (FUNC_0(VAR_8, VAR_9, VAR_10, VAR_19, &VAR_18, VAR_21)) {
   if (VAR_18.rm_so == VAR_18.rm_eo)
    break;

   if (VAR_8->only_matching)
    FUNC_2(VAR_8, VAR_11, VAR_12, VAR_13, VAR_14);
   else
    FUNC_1(VAR_8, VAR_9, VAR_18.rm_so, VAR_17);
   FUNC_1(VAR_8, VAR_9 + VAR_18.rm_so,
         VAR_18.rm_eo - VAR_18.rm_so, VAR_16);
   if (VAR_8->only_matching)
    VAR_8->output(VAR_8, "\n", 1);
   VAR_9 += VAR_18.rm_eo;
   VAR_13 += VAR_18.rm_eo;
   VAR_15 -= VAR_18.rm_eo;
   VAR_21 = VAR_7;
  }
  *VAR_10 = VAR_20;
 }
 if (!VAR_8->only_matching) {
  FUNC_1(VAR_8, VAR_9, VAR_15, VAR_17);
  VAR_8->output(VAR_8, "\n", 1);
 }
}
