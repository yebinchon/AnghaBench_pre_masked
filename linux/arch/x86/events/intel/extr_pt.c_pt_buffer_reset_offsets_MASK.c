
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct topa_page {int topa; } ;
struct topa_entry {int dummy; } ;
struct pt_buffer {int nr_pages; unsigned long output_off; int data_size; int head; int * cur; struct topa_entry* cur_idx; scalar_t__ snapshot; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct pt_buffer*) ;
 struct topa_entry* FUNC_4 (struct pt_buffer*,int) ;
 struct topa_page* FUNC_5 (struct topa_entry*) ;

__attribute__((used)) static void FUNC_6(struct pt_buffer *VAR_1, unsigned long VAR_2)
{
 struct topa_page *VAR_3;
 struct topa_entry *VAR_4;
 int VAR_5;

 if (VAR_1->snapshot)
  VAR_2 &= (VAR_1->nr_pages << VAR_0) - 1;

 VAR_5 = (VAR_2 >> VAR_0) & (VAR_1->nr_pages - 1);
 VAR_4 = FUNC_4(VAR_1, VAR_5);

 VAR_3 = FUNC_5(VAR_4);
 VAR_1->cur = &VAR_3->topa;
 VAR_1->cur_idx = VAR_4 - FUNC_0(VAR_1->cur, 0);
 VAR_1->output_off = VAR_2 & (FUNC_3(VAR_1) - 1);

 FUNC_1(&VAR_1->head, VAR_2);
 FUNC_2(&VAR_1->data_size, 0);
}
