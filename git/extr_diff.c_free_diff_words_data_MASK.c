
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct emit_callback {TYPE_7__* diff_words; } ;
struct TYPE_10__ {TYPE_5__* ptr; } ;
struct TYPE_11__ {TYPE_5__* orig; TYPE_3__ text; } ;
struct TYPE_8__ {TYPE_5__* ptr; } ;
struct TYPE_9__ {TYPE_5__* orig; TYPE_1__ text; } ;
struct TYPE_13__ {TYPE_5__* word_regex; TYPE_4__ plus; TYPE_2__ minus; TYPE_5__* opt; } ;
struct TYPE_12__ {struct TYPE_12__* emitted_symbols; } ;


 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (struct emit_callback*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_4(struct emit_callback *VAR_0)
{
 if (VAR_0->diff_words) {
  FUNC_1(VAR_0);
  FUNC_2 (VAR_0->diff_words->opt->emitted_symbols);
  FUNC_2 (VAR_0->diff_words->opt);
  FUNC_2 (VAR_0->diff_words->minus.text.ptr);
  FUNC_2 (VAR_0->diff_words->minus.orig);
  FUNC_2 (VAR_0->diff_words->plus.text.ptr);
  FUNC_2 (VAR_0->diff_words->plus.orig);
  if (VAR_0->diff_words->word_regex) {
   FUNC_3(VAR_0->diff_words->word_regex);
   FUNC_2(VAR_0->diff_words->word_regex);
  }
  FUNC_0(VAR_0->diff_words);
 }
}
