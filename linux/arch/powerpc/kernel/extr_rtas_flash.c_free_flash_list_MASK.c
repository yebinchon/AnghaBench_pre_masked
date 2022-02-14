
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct flash_block_list {int num_blocks; struct flash_block_list* next; TYPE_1__* blocks; } ;
struct TYPE_2__ {struct flash_block_list* data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct flash_block_list*) ;

__attribute__((used)) static void FUNC_1(struct flash_block_list *VAR_1)
{
 struct flash_block_list *VAR_2;
 int VAR_3;

 while (VAR_1) {
  for (VAR_3 = 0; VAR_3 < VAR_1->num_blocks; VAR_3++)
   FUNC_0(VAR_0, VAR_1->blocks[VAR_3].data);
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_0, VAR_1);
  VAR_1 = VAR_2;
 }
}
