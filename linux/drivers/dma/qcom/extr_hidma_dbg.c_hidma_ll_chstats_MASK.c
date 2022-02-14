
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u32 ;
struct seq_file {int dummy; } ;
struct hidma_tre {size_t queued; size_t err_info; size_t err_code; size_t status; size_t idx; size_t dma_sig; size_t dev_name; size_t callback; size_t data; size_t tre_index; size_t* tre_local; int allocated; } ;
struct hidma_lldev {size_t nr_tres; struct hidma_tre* trepool; int dev; } ;
typedef size_t dma_addr_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_5, void *VAR_6, u32 VAR_7)
{
 struct hidma_lldev *VAR_8 = VAR_6;
 struct hidma_tre *VAR_9;
 u32 VAR_10;
 dma_addr_t VAR_11;
 dma_addr_t VAR_12;
 u32 *VAR_13;

 if (VAR_7 >= VAR_8->nr_tres) {
  FUNC_1(VAR_8->dev, "invalid TRE number in chstats:%d", VAR_7);
  return;
 }
 VAR_9 = &VAR_8->trepool[VAR_7];
 FUNC_2(VAR_5, "------Channel %d -----\n", VAR_7);
 FUNC_2(VAR_5, "allocated=%d\n", FUNC_0(&VAR_9->allocated));
 FUNC_2(VAR_5, "queued = 0x%x\n", VAR_9->queued);
 FUNC_2(VAR_5, "err_info = 0x%x\n", VAR_9->err_info);
 FUNC_2(VAR_5, "err_code = 0x%x\n", VAR_9->err_code);
 FUNC_2(VAR_5, "status = 0x%x\n", VAR_9->status);
 FUNC_2(VAR_5, "idx = 0x%x\n", VAR_9->idx);
 FUNC_2(VAR_5, "dma_sig = 0x%x\n", VAR_9->dma_sig);
 FUNC_2(VAR_5, "dev_name=%s\n", VAR_9->dev_name);
 FUNC_2(VAR_5, "callback=%p\n", VAR_9->callback);
 FUNC_2(VAR_5, "data=%p\n", VAR_9->data);
 FUNC_2(VAR_5, "tre_index = 0x%x\n", VAR_9->tre_index);

 VAR_13 = &VAR_9->tre_local[0];
 VAR_11 = VAR_13[VAR_4];
 VAR_11 = ((u64) (VAR_13[VAR_3]) << 32) + VAR_11;
 VAR_12 = VAR_13[VAR_1];
 VAR_12 += ((u64) (VAR_13[VAR_0]) << 32);
 VAR_10 = VAR_13[VAR_2];

 FUNC_2(VAR_5, "src=%pap\n", &VAR_11);
 FUNC_2(VAR_5, "dest=%pap\n", &VAR_12);
 FUNC_2(VAR_5, "length = 0x%x\n", VAR_10);
}
