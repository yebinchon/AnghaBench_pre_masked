
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef size_t u32 ;
struct hidma_tre {size_t tre_index; scalar_t__ queued; void* err_code; void* err_info; } ;
struct hidma_lldev {size_t tre_processed_off; int task; int handoff_fifo; int lock; int tre_ring_size; int pending_tre_count; int dev; struct hidma_tre** pending_tre_list; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,size_t,int ) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *,struct hidma_tre*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct hidma_lldev *VAR_2, u8 VAR_3,
    u8 VAR_4)
{
 struct hidma_tre *VAR_5;
 unsigned long VAR_6;
 u32 VAR_7;

 FUNC_5(&VAR_2->lock, VAR_6);

 VAR_7 = VAR_2->tre_processed_off;
 VAR_5 = VAR_2->pending_tre_list[VAR_7 / VAR_1];
 if (!VAR_5) {
  FUNC_6(&VAR_2->lock, VAR_6);
  FUNC_3(VAR_2->dev, "tre_index [%d] and tre out of sync\n",
    VAR_7 / VAR_1);
  return -VAR_0;
 }
 VAR_2->pending_tre_list[VAR_5->tre_index] = ((void*)0);





 if (FUNC_1(&VAR_2->pending_tre_count) < 0) {
  FUNC_3(VAR_2->dev, "tre count mismatch on completion");
  FUNC_2(&VAR_2->pending_tre_count, 0);
 }

 FUNC_0(VAR_7, VAR_1,
     VAR_2->tre_ring_size);
 VAR_2->tre_processed_off = VAR_7;
 FUNC_6(&VAR_2->lock, VAR_6);

 VAR_5->err_info = VAR_3;
 VAR_5->err_code = VAR_4;
 VAR_5->queued = 0;

 FUNC_4(&VAR_2->handoff_fifo, VAR_5);
 FUNC_7(&VAR_2->task);

 return 0;
}
