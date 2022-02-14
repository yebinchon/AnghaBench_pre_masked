
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct a6xx_hfi_queue_header {scalar_t__ write_index; scalar_t__ size; int dropped; int read_index; } ;
struct a6xx_hfi_queue {int lock; scalar_t__* data; struct a6xx_hfi_queue_header* header; } ;
struct a6xx_gmu {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct a6xx_gmu*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct a6xx_gmu *VAR_2,
 struct a6xx_hfi_queue *VAR_3, u32 *VAR_4, u32 VAR_5)
{
 struct a6xx_hfi_queue_header *VAR_6 = VAR_3->header;
 u32 VAR_7, VAR_8, VAR_9 = VAR_6->write_index;

 FUNC_2(&VAR_3->lock);

 VAR_8 = FUNC_0(VAR_6->write_index, VAR_6->read_index,
  VAR_6->size);
 if (VAR_8 < VAR_5) {
  VAR_6->dropped++;
  FUNC_3(&VAR_3->lock);
  return -VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  VAR_3->data[VAR_9] = VAR_4[VAR_7];
  VAR_9 = (VAR_9 + 1) % VAR_6->size;
 }

 VAR_6->write_index = VAR_9;
 FUNC_3(&VAR_3->lock);

 FUNC_1(VAR_2, VAR_1, 0x01);
 return 0;
}
