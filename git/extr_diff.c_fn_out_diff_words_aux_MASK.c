
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct diff_words_style {int newline; int new_word; int old_word; int ctx; } ;
struct TYPE_8__ {TYPE_3__* orig; } ;
struct TYPE_6__ {TYPE_1__* orig; } ;
struct diff_words_data {char const* current_plus; long last_minus; struct diff_options* opt; TYPE_4__ plus; TYPE_2__ minus; struct diff_words_style* style; } ;
struct diff_options {int file; } ;
struct TYPE_7__ {char* begin; char* end; } ;
struct TYPE_5__ {char* begin; char* end; } ;


 int FUNC_0 (struct diff_options*) ;
 scalar_t__ FUNC_1 (struct diff_words_data*) ;
 char* FUNC_2 (struct diff_options*) ;
 int FUNC_3 (struct diff_options*,int *,int ,int,char const*) ;
 int FUNC_4 (char const*,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_0,
      long VAR_1, long VAR_2,
      long VAR_3, long VAR_4,
      const char *VAR_5, long VAR_6)
{
 struct diff_words_data *VAR_7 = VAR_0;
 struct diff_words_style *VAR_8 = VAR_7->style;
 const char *VAR_9, *VAR_10, *VAR_11, *VAR_12;
 struct diff_options *VAR_13 = VAR_7->opt;
 const char *VAR_14;

 FUNC_0(VAR_13);
 VAR_14 = FUNC_2(VAR_13);


 if (VAR_2) {
  VAR_9 = VAR_7->minus.orig[VAR_1].begin;
  VAR_10 =
   VAR_7->minus.orig[VAR_1 + VAR_2 - 1].end;
 } else
  VAR_9 = VAR_10 =
   VAR_7->minus.orig[VAR_1].end;

 if (VAR_4) {
  VAR_11 = VAR_7->plus.orig[VAR_3].begin;
  VAR_12 = VAR_7->plus.orig[VAR_3 + VAR_4 - 1].end;
 } else
  VAR_11 = VAR_12 = VAR_7->plus.orig[VAR_3].end;

 if (FUNC_1(VAR_7)) {
  FUNC_4(VAR_14, VAR_7->opt->file);
 }
 if (VAR_7->current_plus != VAR_11) {
  FUNC_3(VAR_7->opt,
    &VAR_8->ctx, VAR_8->newline,
    VAR_11 - VAR_7->current_plus,
    VAR_7->current_plus);
 }
 if (VAR_9 != VAR_10) {
  FUNC_3(VAR_7->opt,
    &VAR_8->old_word, VAR_8->newline,
    VAR_10 - VAR_9, VAR_9);
 }
 if (VAR_11 != VAR_12) {
  FUNC_3(VAR_7->opt,
    &VAR_8->new_word, VAR_8->newline,
    VAR_12 - VAR_11, VAR_11);
 }

 VAR_7->current_plus = VAR_12;
 VAR_7->last_minus = VAR_1;
}
