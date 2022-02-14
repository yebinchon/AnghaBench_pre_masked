
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct hidma_lldev {int * tre_write_offset; int * evre_processed_off; int * evre_ring_size; int evre_dma; int * evre_ring; int * evca; int pending_tre_count; int * tre_processed_off; int * tre_ring_size; int tre_dma; int * tre_ring; int * trca; int * nr_tres; int * chidx; int * evch_state; int * trch_state; int * initialized; } ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,char*,int *) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct hidma_lldev *VAR_2 = VAR_1;

 FUNC_2(VAR_0, "------Device -----\n");
 FUNC_1(VAR_0, "lldev init = 0x%x\n", VAR_2->initialized);
 FUNC_1(VAR_0, "trch_state = 0x%x\n", VAR_2->trch_state);
 FUNC_1(VAR_0, "evch_state = 0x%x\n", VAR_2->evch_state);
 FUNC_1(VAR_0, "chidx = 0x%x\n", VAR_2->chidx);
 FUNC_1(VAR_0, "nr_tres = 0x%x\n", VAR_2->nr_tres);
 FUNC_1(VAR_0, "trca=%p\n", VAR_2->trca);
 FUNC_1(VAR_0, "tre_ring=%p\n", VAR_2->tre_ring);
 FUNC_1(VAR_0, "tre_ring_handle=%pap\n", &VAR_2->tre_dma);
 FUNC_1(VAR_0, "tre_ring_size = 0x%x\n", VAR_2->tre_ring_size);
 FUNC_1(VAR_0, "tre_processed_off = 0x%x\n", VAR_2->tre_processed_off);
 FUNC_1(VAR_0, "pending_tre_count=%d\n",
   FUNC_0(&VAR_2->pending_tre_count));
 FUNC_1(VAR_0, "evca=%p\n", VAR_2->evca);
 FUNC_1(VAR_0, "evre_ring=%p\n", VAR_2->evre_ring);
 FUNC_1(VAR_0, "evre_ring_handle=%pap\n", &VAR_2->evre_dma);
 FUNC_1(VAR_0, "evre_ring_size = 0x%x\n", VAR_2->evre_ring_size);
 FUNC_1(VAR_0, "evre_processed_off = 0x%x\n", VAR_2->evre_processed_off);
 FUNC_1(VAR_0, "tre_write_offset = 0x%x\n", VAR_2->tre_write_offset);
}
