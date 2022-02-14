
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_14__ {scalar_t__ ctxlen; scalar_t__ flags; } ;
typedef TYPE_2__ xpparam_t ;
typedef int xpp ;
typedef int xecfg ;
typedef TYPE_2__ xdemitconf_t ;
struct diff_words_style {int newline; int ctx; int old_word; } ;
struct TYPE_13__ {scalar_t__ size; scalar_t__ ptr; } ;
struct TYPE_12__ {TYPE_1__ text; } ;
struct diff_words_data {scalar_t__ current_plus; TYPE_10__ plus; TYPE_10__ minus; struct diff_options* opt; int word_regex; scalar_t__ last_minus; struct diff_words_style* style; } ;
struct diff_options {int dummy; } ;
struct TYPE_15__ {int ptr; } ;
typedef TYPE_4__ mmfile_t ;


 int VAR_0 ;
 int FUNC_0 (struct diff_options*) ;
 scalar_t__ FUNC_1 (struct diff_words_data*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (struct diff_options*) ;
 int FUNC_4 (TYPE_10__*,TYPE_4__*,int ) ;
 int FUNC_5 (struct diff_options*,int ,char const*,int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (struct diff_options*,int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 int FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (TYPE_4__*,TYPE_4__*,int ,int *,struct diff_words_data*,TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_11(struct diff_words_data *VAR_2)
{
 xpparam_t VAR_3;
 xdemitconf_t VAR_4;
 mmfile_t VAR_5, VAR_6;
 struct diff_words_style *VAR_7 = VAR_2->style;

 struct diff_options *VAR_8 = VAR_2->opt;
 const char *VAR_9;

 FUNC_0(VAR_8);
 VAR_9 = FUNC_3(VAR_8);


 if (!VAR_2->plus.text.size) {
  FUNC_5(VAR_2->opt, VAR_0,
     VAR_9, FUNC_9(VAR_9), 0);
  FUNC_6(VAR_2->opt,
   &VAR_7->old_word, VAR_7->newline,
   VAR_2->minus.text.size,
   VAR_2->minus.text.ptr);
  VAR_2->minus.text.size = 0;
  return;
 }

 VAR_2->current_plus = VAR_2->plus.text.ptr;
 VAR_2->last_minus = 0;

 FUNC_8(&VAR_3, 0, sizeof(VAR_3));
 FUNC_8(&VAR_4, 0, sizeof(VAR_4));
 FUNC_4(&VAR_2->minus, &VAR_5, VAR_2->word_regex);
 FUNC_4(&VAR_2->plus, &VAR_6, VAR_2->word_regex);
 VAR_3.flags = 0;

 VAR_4.ctxlen = 0;
 if (FUNC_10(&VAR_5, &VAR_6, VAR_1, ((void*)0),
     VAR_2, &VAR_3, &VAR_4))
  FUNC_2("unable to generate word diff");
 FUNC_7(VAR_5.ptr);
 FUNC_7(VAR_6.ptr);
 if (VAR_2->current_plus != VAR_2->plus.text.ptr +
   VAR_2->plus.text.size) {
  if (FUNC_1(VAR_2))
   FUNC_5(VAR_2->opt, VAR_0,
      VAR_9, FUNC_9(VAR_9), 0);
  FUNC_6(VAR_2->opt,
   &VAR_7->ctx, VAR_7->newline,
   VAR_2->plus.text.ptr + VAR_2->plus.text.size
   - VAR_2->current_plus, VAR_2->current_plus);
 }
 VAR_2->minus.text.size = VAR_2->plus.text.size = 0;
}
