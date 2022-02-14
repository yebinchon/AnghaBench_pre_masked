
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct emitted_diff_symbols {int dummy; } ;
struct emit_callback {TYPE_2__* diff_words; } ;
struct TYPE_10__ {void* color; } ;
struct TYPE_9__ {void* color; } ;
struct TYPE_8__ {void* color; } ;
struct diff_words_style {scalar_t__ type; TYPE_5__ ctx; TYPE_4__ new_word; TYPE_3__ old_word; } ;
struct diff_words_data {int dummy; } ;
struct diff_options {scalar_t__ word_diff; int use_color; void* word_regex; TYPE_1__* repo; void* emitted_symbols; } ;
struct diff_filespec {int dummy; } ;
typedef int regex_t ;
struct TYPE_7__ {scalar_t__ type; struct diff_words_style* style; int * word_regex; struct diff_options* opt; } ;
struct TYPE_6__ {int index; } ;


 int FUNC_0 (struct diff_words_style*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,void*) ;
 void* FUNC_2 (struct diff_options*,int ) ;
 void* VAR_5 ;
 struct diff_words_style* VAR_6 ;
 int FUNC_3 (struct diff_options*,struct diff_options*,int) ;
 scalar_t__ FUNC_4 (int *,void*,int) ;
 void* FUNC_5 (struct diff_filespec*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 void* FUNC_7 (int,int) ;
 struct diff_options* FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct emit_callback *VAR_7,
     struct diff_options *VAR_8,
     struct diff_filespec *VAR_9,
     struct diff_filespec *VAR_10)
{
 int VAR_11;
 struct diff_options *VAR_12 = FUNC_8(sizeof(struct diff_options));
 FUNC_3(VAR_12, VAR_8, sizeof(struct diff_options));

 VAR_7->diff_words =
  FUNC_7(1, sizeof(struct diff_words_data));
 VAR_7->diff_words->type = VAR_12->word_diff;
 VAR_7->diff_words->opt = VAR_12;

 if (VAR_8->emitted_symbols)
  VAR_12->emitted_symbols =
   FUNC_7(1, sizeof(struct emitted_diff_symbols));

 if (!VAR_12->word_regex)
  VAR_12->word_regex = FUNC_5(VAR_9, VAR_12->repo->index);
 if (!VAR_12->word_regex)
  VAR_12->word_regex = FUNC_5(VAR_10, VAR_12->repo->index);
 if (!VAR_12->word_regex)
  VAR_12->word_regex = VAR_5;
 if (VAR_12->word_regex) {
  VAR_7->diff_words->word_regex = (regex_t *)
   FUNC_8(sizeof(regex_t));
  if (FUNC_4(VAR_7->diff_words->word_regex,
       VAR_12->word_regex,
       VAR_3 | VAR_4))
   FUNC_1("invalid regular expression: %s",
       VAR_12->word_regex);
 }
 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_6); VAR_11++) {
  if (VAR_12->word_diff == VAR_6[VAR_11].type) {
   VAR_7->diff_words->style =
    &VAR_6[VAR_11];
   break;
  }
 }
 if (FUNC_6(VAR_12->use_color)) {
  struct diff_words_style *VAR_13 = VAR_7->diff_words->style;
  VAR_13->old_word.color = FUNC_2(VAR_12, VAR_2);
  VAR_13->new_word.color = FUNC_2(VAR_12, VAR_1);
  VAR_13->ctx.color = FUNC_2(VAR_12, VAR_0);
 }
}
