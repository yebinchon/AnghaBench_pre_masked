
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct moved_entry {int ent; struct moved_entry* next_line; TYPE_1__* es; } ;
struct hashmap {int dummy; } ;
struct diff_options {int color_moved_ws_handling; TYPE_2__* emitted_symbols; } ;
struct TYPE_6__ {int s; } ;
struct TYPE_5__ {int nr; TYPE_3__* buf; } ;
struct TYPE_4__ {int s; } ;


 int VAR_0 ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct hashmap*,int *) ;
 struct moved_entry* FUNC_2 (struct diff_options*,int) ;

__attribute__((used)) static void FUNC_3(struct diff_options *VAR_1,
     struct hashmap *VAR_2,
     struct hashmap *VAR_3)
{
 struct moved_entry *VAR_4 = ((void*)0);

 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_1->emitted_symbols->nr; VAR_5++) {
  struct hashmap *VAR_6;
  struct moved_entry *VAR_7;

  switch (VAR_1->emitted_symbols->buf[VAR_5].s) {
  case 128:
   VAR_6 = VAR_2;
   break;
  case 129:
   VAR_6 = VAR_3;
   break;
  default:
   VAR_4 = ((void*)0);
   continue;
  }

  if (VAR_1->color_moved_ws_handling &
      VAR_0)
   FUNC_0(&VAR_1->emitted_symbols->buf[VAR_5]);
  VAR_7 = FUNC_2(VAR_1, VAR_5);
  if (VAR_4 && VAR_4->es->s == VAR_1->emitted_symbols->buf[VAR_5].s)
   VAR_4->next_line = VAR_7;

  FUNC_1(VAR_6, &VAR_7->ent);
  VAR_4 = VAR_7;
 }
}
