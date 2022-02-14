
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame {unsigned int nr_children; int n; } ;
struct dm_block_manager {int dummy; } ;
struct del_stack {int tm; } ;


 int FUNC_0 (struct dm_block_manager*,int ) ;
 struct dm_block_manager* FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct del_stack *VAR_0, struct frame *VAR_1)
{
 unsigned VAR_2;
 struct dm_block_manager *VAR_3 = FUNC_1(VAR_0->tm);

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_children; VAR_2++)
  FUNC_0(VAR_3, FUNC_2(VAR_1->n, VAR_2));
}
