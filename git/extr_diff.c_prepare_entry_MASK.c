
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct moved_entry {int * next_line; struct emitted_diff_symbol* es; int ent; } ;
struct emitted_diff_symbol {int len; int line; } ;
struct diff_options {unsigned int color_moved_ws_handling; TYPE_1__* emitted_symbols; } ;
struct TYPE_2__ {struct emitted_diff_symbol* buf; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,unsigned int) ;
 unsigned int FUNC_1 (int ,int ,unsigned int) ;
 struct moved_entry* FUNC_2 (int) ;

__attribute__((used)) static struct moved_entry *FUNC_3(struct diff_options *VAR_1,
      int VAR_2)
{
 struct moved_entry *VAR_3 = FUNC_2(sizeof(*VAR_3));
 struct emitted_diff_symbol *VAR_4 = &VAR_1->emitted_symbols->buf[VAR_2];
 unsigned VAR_5 = VAR_1->color_moved_ws_handling & VAR_0;
 unsigned int VAR_6 = FUNC_1(VAR_4->line, VAR_4->len, VAR_5);

 FUNC_0(&VAR_3->ent, VAR_6);
 VAR_3->es = VAR_4;
 VAR_3->next_line = ((void*)0);

 return VAR_3;
}
