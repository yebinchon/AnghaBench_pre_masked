
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_list_item {int dummy; } ;
struct sort_list {size_t count; size_t size; size_t memsize; int * list; } ;
struct bwstring {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,struct bwstring*) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int *,int) ;

void
FUNC_4(struct sort_list *VAR_0, struct bwstring *VAR_1)
{

 if (VAR_0 && VAR_1) {
  size_t VAR_2 = VAR_0->count;

  if ((VAR_0->list == ((void*)0)) || (VAR_2 >= VAR_0->size)) {
   size_t VAR_3 = (VAR_0->size + 1) + 1024;

   VAR_0->list = FUNC_3(VAR_0->list,
       sizeof(struct sort_list_item*) * VAR_3);
   VAR_0->memsize += (VAR_3 - VAR_0->size) *
       sizeof(struct sort_list_item*);
   VAR_0->size = VAR_3;
  }
  VAR_0->list[VAR_2] = FUNC_0();
  FUNC_1(VAR_0->list[VAR_2], VAR_1);
  VAR_0->memsize += FUNC_2(VAR_0->list[VAR_2]);
  VAR_0->count += 1;
 }
}
