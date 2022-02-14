
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct topa {int last; scalar_t__ size; scalar_t__ offset; int list; } ;
struct pt_buffer {struct topa* last; struct topa* cur; struct topa* first; int tables; } ;
struct TYPE_2__ {int end; int base; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct topa*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct topa*) ;

__attribute__((used)) static void FUNC_5(struct pt_buffer *VAR_2, struct topa *VAR_3)
{
 struct topa *VAR_4 = VAR_2->last;

 FUNC_3(&VAR_3->list, &VAR_2->tables);

 if (!VAR_2->first) {
  VAR_2->first = VAR_2->last = VAR_2->cur = VAR_3;
  return;
 }

 VAR_3->offset = VAR_4->offset + VAR_4->size;
 VAR_2->last = VAR_3;

 if (!FUNC_2(VAR_0))
  return;

 FUNC_0(VAR_4->last != VAR_1 - 1);

 FUNC_1(VAR_4, -1)->base = FUNC_4(VAR_3);
 FUNC_1(VAR_4, -1)->end = 1;
}
