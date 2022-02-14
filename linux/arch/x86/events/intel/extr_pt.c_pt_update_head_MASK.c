
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct pt_buffer {scalar_t__ output_off; scalar_t__ cur_idx; int nr_pages; int data_size; int head; scalar_t__ snapshot; TYPE_1__* cur; } ;
struct pt {int handle; } ;
struct TYPE_2__ {scalar_t__ offset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 struct pt_buffer* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct pt *VAR_1)
{
 struct pt_buffer *VAR_2 = FUNC_4(&VAR_1->handle);
 u64 VAR_3, VAR_4, VAR_5;


 VAR_4 = VAR_2->cur->offset + VAR_2->output_off;


 for (VAR_3 = 0; VAR_3 < VAR_2->cur_idx; VAR_3++)
  VAR_4 += FUNC_0(VAR_2->cur, VAR_3);

 if (VAR_2->snapshot) {
  FUNC_3(&VAR_2->data_size, VAR_4);
 } else {
  VAR_5 = (FUNC_1(&VAR_2->head, VAR_4) &
         ((VAR_2->nr_pages << VAR_0) - 1));
  if (VAR_4 < VAR_5)
   VAR_4 += VAR_2->nr_pages << VAR_0;

  FUNC_2(VAR_4 - VAR_5, &VAR_2->data_size);
 }
}
