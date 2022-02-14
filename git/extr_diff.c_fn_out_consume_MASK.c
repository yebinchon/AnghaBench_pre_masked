
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct emit_callback {char** label_path; int lno_in_preimage; int lno_in_postimage; TYPE_1__* diff_words; TYPE_2__* header; struct diff_options* opt; } ;
struct diff_options {int found_changes; } ;
typedef enum diff_symbol { ____Placeholder_diff_symbol } diff_symbol ;
struct TYPE_4__ {char* buf; unsigned long len; } ;
struct TYPE_3__ {scalar_t__ type; int plus; int minus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*,unsigned long,int *) ;
 int FUNC_1 (struct emit_callback*) ;
 int FUNC_2 (struct emit_callback*,char*,unsigned long) ;
 int FUNC_3 (struct emit_callback*,char*,unsigned long) ;
 int FUNC_4 (struct emit_callback*,char*,unsigned long) ;
 int FUNC_5 (struct diff_options*,int,char*,unsigned long,int ) ;
 int FUNC_6 (struct emit_callback*,char*,unsigned long) ;
 int FUNC_7 (char*,struct emit_callback*) ;
 unsigned long FUNC_8 (char*,unsigned long) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (TYPE_2__*) ;
 unsigned long FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void *VAR_8, char *VAR_9, unsigned long VAR_10)
{
 struct emit_callback *VAR_11 = VAR_8;
 struct diff_options *VAR_12 = VAR_11->opt;

 VAR_12->found_changes = 1;

 if (VAR_11->header) {
  FUNC_5(VAR_12, VAR_3,
     VAR_11->header->buf, VAR_11->header->len, 0);
  FUNC_10(VAR_11->header);
  VAR_11->header = ((void*)0);
 }

 if (VAR_11->label_path[0]) {
  FUNC_5(VAR_12, VAR_1,
     VAR_11->label_path[0],
     FUNC_11(VAR_11->label_path[0]), 0);
  FUNC_5(VAR_12, VAR_2,
     VAR_11->label_path[1],
     FUNC_11(VAR_11->label_path[1]), 0);
  VAR_11->label_path[0] = VAR_11->label_path[1] = ((void*)0);
 }

 if (VAR_7
     && VAR_10 == 2 && VAR_9[0] == ' ' && VAR_9[1] == '\n') {
  VAR_9[0] = '\n';
  VAR_10 = 1;
 }

 if (VAR_9[0] == '@') {
  if (VAR_11->diff_words)
   FUNC_1(VAR_11);
  VAR_10 = FUNC_8(VAR_9, VAR_10);
  FUNC_7(VAR_9, VAR_11);
  FUNC_6(VAR_11, VAR_9, VAR_10);
  return;
 }

 if (VAR_11->diff_words) {
  enum diff_symbol VAR_13 =
   VAR_11->diff_words->type == VAR_6 ?
   VAR_5 : VAR_4;
  if (VAR_9[0] == '-') {
   FUNC_0(VAR_9, VAR_10,
       &VAR_11->diff_words->minus);
   return;
  } else if (VAR_9[0] == '+') {
   FUNC_0(VAR_9, VAR_10,
       &VAR_11->diff_words->plus);
   return;
  } else if (FUNC_9(VAR_9, "\\ ")) {







   return;
  }
  FUNC_1(VAR_11);
  FUNC_5(VAR_12, VAR_13, VAR_9, VAR_10, 0);
  return;
 }

 switch (VAR_9[0]) {
 case '+':
  VAR_11->lno_in_postimage++;
  FUNC_2(VAR_11, VAR_9 + 1, VAR_10 - 1);
  break;
 case '-':
  VAR_11->lno_in_preimage++;
  FUNC_4(VAR_11, VAR_9 + 1, VAR_10 - 1);
  break;
 case ' ':
  VAR_11->lno_in_postimage++;
  VAR_11->lno_in_preimage++;
  FUNC_3(VAR_11, VAR_9 + 1, VAR_10 - 1);
  break;
 default:

  VAR_11->lno_in_preimage++;
  FUNC_5(VAR_12, VAR_0,
     VAR_9, VAR_10, 0);
  break;
 }
}
