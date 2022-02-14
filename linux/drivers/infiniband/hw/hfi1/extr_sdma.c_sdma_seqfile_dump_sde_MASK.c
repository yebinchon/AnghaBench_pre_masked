
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef size_t u16 ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {int current_state; } ;
struct sdma_engine {size_t descq_head; size_t sdma_mask; struct hw_sdma_desc* descq; int descq_full_count; int flushlist; int descq_tail; int tx_head; int tx_tail; scalar_t__ ahg_bits; scalar_t__ last_status; int * head_dma; TYPE_1__ state; int cpu; int this_idx; } ;
struct hw_sdma_desc {int * qw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct sdma_engine*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct seq_file*,char*,int,...) ;

void FUNC_7(struct seq_file *VAR_24, struct sdma_engine *VAR_25)
{
 u16 VAR_26, VAR_27;
 struct hw_sdma_desc *VAR_28;
 u64 VAR_29[2];
 u64 VAR_30;
 u8 VAR_31;
 u16 VAR_32;

 VAR_26 = VAR_25->descq_head & VAR_25->sdma_mask;
 VAR_27 = FUNC_0(VAR_25->descq_tail) & VAR_25->sdma_mask;
 FUNC_6(VAR_24, VAR_6, VAR_25->this_idx,
     VAR_25->cpu,
     FUNC_5(VAR_25->state.current_state),
     (unsigned long long)FUNC_4(VAR_25, FUNC_1(VAR_0)),
     (unsigned long long)FUNC_4(VAR_25, FUNC_1(VAR_22)),
     (unsigned long long)FUNC_4(VAR_25, FUNC_1(VAR_1)),
     (unsigned long long)FUNC_4(VAR_25, FUNC_1(VAR_23)), VAR_27,
     (unsigned long long)FUNC_4(VAR_25, FUNC_1(VAR_2)), VAR_26,
     (unsigned long long)FUNC_2(*VAR_25->head_dma),
     (unsigned long long)FUNC_4(VAR_25, FUNC_1(VAR_4)),
     (unsigned long long)FUNC_4(VAR_25, FUNC_1(VAR_3)),
     (unsigned long long)FUNC_4(VAR_25, FUNC_1(VAR_5)),
     (unsigned long long)VAR_25->last_status,
     (unsigned long long)VAR_25->ahg_bits,
     VAR_25->tx_tail,
     VAR_25->tx_head,
     VAR_25->descq_tail,
     VAR_25->descq_head,
     !FUNC_3(&VAR_25->flushlist),
     VAR_25->descq_full_count,
     (unsigned long long)FUNC_4(VAR_25, VAR_21));


 while (VAR_26 != VAR_27) {
  char VAR_33[6] = { 'x', 'x', 'x', 'x', 0 };

  VAR_28 = &VAR_25->descq[VAR_26];
  VAR_29[0] = FUNC_2(VAR_28->qw[0]);
  VAR_29[1] = FUNC_2(VAR_28->qw[1]);
  VAR_33[0] = (VAR_29[1] & VAR_20) ? 'I' : '-';
  VAR_33[1] = (VAR_29[1] & VAR_19) ?
    'H' : '-';
  VAR_33[2] = (VAR_29[0] & VAR_9) ? 'F' : '-';
  VAR_33[3] = (VAR_29[0] & VAR_10) ? 'L' : '-';
  VAR_30 = (VAR_29[0] >> VAR_12)
   & VAR_11;
  VAR_31 = (VAR_29[1] >> VAR_14)
   & VAR_13;
  VAR_32 = (VAR_29[0] >> VAR_8)
   & VAR_7;
  FUNC_6(VAR_24,
      "\tdesc[%u]: flags:%s addr:0x%016llx gen:%u len:%u bytes\n",
      VAR_26, VAR_33, VAR_30, VAR_31, VAR_32);
  if (VAR_29[0] & VAR_9)
   FUNC_6(VAR_24, "\t\tahgidx: %u ahgmode: %u\n",
       (u8)((VAR_29[1] &
      VAR_16) >>
     VAR_15),
       (u8)((VAR_29[1] &
      VAR_18) >>
     VAR_17));
  VAR_26 = (VAR_26 + 1) & VAR_25->sdma_mask;
 }
}
