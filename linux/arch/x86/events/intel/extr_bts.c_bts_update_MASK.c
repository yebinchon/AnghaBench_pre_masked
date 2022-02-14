
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct debug_store {unsigned long bts_index; unsigned long bts_buffer_base; scalar_t__ bts_absolute_maximum; } ;
struct bts_ctx {int handle; } ;
struct bts_buffer {int data_size; int snapshot; int head; int cur_buf; } ;
struct TYPE_2__ {struct debug_store* ds; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct bts_buffer*,int ) ;
 int VAR_1 ;
 int FUNC_1 (unsigned long,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 unsigned long FUNC_3 (int *,unsigned long) ;
 TYPE_1__ FUNC_4 (int ,int) ;
 int FUNC_5 (int *,int ) ;
 struct bts_buffer* FUNC_6 (int *) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct bts_ctx *VAR_2)
{
 int VAR_3 = FUNC_7();
 struct debug_store *VAR_4 = FUNC_4(VAR_1, VAR_3).ds;
 struct bts_buffer *VAR_5 = FUNC_6(&VAR_2->handle);
 unsigned long VAR_6 = VAR_4->bts_index - VAR_4->bts_buffer_base, VAR_7, VAR_8;

 if (!VAR_5)
  return;

 VAR_8 = VAR_6 + FUNC_0(VAR_5, VAR_5->cur_buf);
 VAR_7 = FUNC_3(&VAR_5->head, VAR_8);

 if (!VAR_5->snapshot) {
  if (VAR_7 == VAR_8)
   return;

  if (VAR_4->bts_index >= VAR_4->bts_absolute_maximum)
   FUNC_5(&VAR_2->handle,
                        VAR_0);





  FUNC_1(VAR_8 - VAR_7, &VAR_5->data_size);
 } else {
  FUNC_2(&VAR_5->data_size, VAR_8);
 }
}
