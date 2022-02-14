
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct emitted_diff_symbols {int nr; TYPE_6__* buf; } ;
struct emit_callback {struct diff_options* opt; TYPE_5__* diff_words; } ;
struct diff_options {struct emitted_diff_symbols* emitted_symbols; } ;
struct TYPE_12__ {scalar_t__ line; } ;
struct TYPE_9__ {scalar_t__ size; } ;
struct TYPE_10__ {TYPE_3__ text; } ;
struct TYPE_7__ {scalar_t__ size; } ;
struct TYPE_8__ {TYPE_1__ text; } ;
struct TYPE_11__ {TYPE_4__ plus; TYPE_2__ minus; struct diff_options* opt; } ;


 int FUNC_0 (struct diff_options*,TYPE_6__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static void FUNC_3(struct emit_callback *VAR_0)
{
 struct diff_options *VAR_1 = VAR_0->diff_words->opt;

 if (VAR_0->diff_words->minus.text.size ||
     VAR_0->diff_words->plus.text.size)
  FUNC_1(VAR_0->diff_words);

 if (VAR_1->emitted_symbols) {
  struct diff_options *VAR_2 = VAR_0->opt;
  struct emitted_diff_symbols *VAR_3 = VAR_1->emitted_symbols;
  int VAR_4;





  for (VAR_4 = 0; VAR_4 < VAR_3->nr; VAR_4++)
   FUNC_0(VAR_2, &VAR_3->buf[VAR_4]);

  for (VAR_4 = 0; VAR_4 < VAR_3->nr; VAR_4++)
   FUNC_2((void *)VAR_3->buf[VAR_4].line);

  VAR_3->nr = 0;
 }
}
