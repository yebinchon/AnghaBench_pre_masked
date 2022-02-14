
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct emitted_diff_symbol {int len; int * line; } ;
struct diff_options {TYPE_1__* emitted_symbols; } ;
struct TYPE_2__ {scalar_t__ nr; struct emitted_diff_symbol* buf; int alloc; } ;


 int FUNC_0 (struct emitted_diff_symbol*,scalar_t__,int ) ;
 int FUNC_1 (struct emitted_diff_symbol*,struct emitted_diff_symbol*,int) ;
 int * FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct diff_options *VAR_0,
           struct emitted_diff_symbol *VAR_1)
{
 struct emitted_diff_symbol *VAR_2;

 FUNC_0(VAR_0->emitted_symbols->buf,
     VAR_0->emitted_symbols->nr + 1,
     VAR_0->emitted_symbols->alloc);
 VAR_2 = &VAR_0->emitted_symbols->buf[VAR_0->emitted_symbols->nr++];

 FUNC_1(VAR_2, VAR_1, sizeof(struct emitted_diff_symbol));
 VAR_2->line = VAR_1->line ? FUNC_2(VAR_1->line, VAR_1->len) : ((void*)0);
}
