
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct a6xx_hfi_queue {int seqnum; } ;
struct a6xx_gmu {int dev; struct a6xx_hfi_queue* queues; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (struct a6xx_gmu*,struct a6xx_hfi_queue*,void*,int) ;
 int FUNC_2 (struct a6xx_gmu*,int,int,int*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct a6xx_gmu *VAR_3, int VAR_4,
  void *VAR_5, u32 VAR_6, u32 *VAR_7, u32 VAR_8)
{
 struct a6xx_hfi_queue *VAR_9 = &VAR_3->queues[VAR_0];
 int VAR_10, VAR_11 = VAR_6 >> 2;
 u32 VAR_12;

 VAR_12 = FUNC_3(&VAR_9->seqnum) % 0xfff;


 *((u32 *) VAR_5) = (VAR_12 << 20) | (VAR_1 << 16) |
  (VAR_11 << 8) | VAR_4;

 VAR_10 = FUNC_1(VAR_3, VAR_9, VAR_5, VAR_11);
 if (VAR_10) {
  FUNC_0(VAR_3->dev, "Unable to send message %s id %d\n",
   VAR_2[VAR_4], VAR_12);
  return VAR_10;
 }

 return FUNC_2(VAR_3, VAR_4, VAR_12, VAR_7, VAR_8);
}
