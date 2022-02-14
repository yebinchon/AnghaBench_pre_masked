
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct etm_config {int ctrl; int trigger_event; int startstop_ctrl; int enable_event; int enable_ctrl1; int fifofull_level; int* addr_val; int* addr_acctype; int* cntr_rld_val; int* cntr_event; int* cntr_rld_event; int* cntr_val; int seq_12_event; int seq_21_event; int seq_23_event; int seq_31_event; int seq_32_event; int seq_13_event; int seq_curr_state; int* ctxid_pid; int ctxid_mask; int sync_freq; int timestamp_event; } ;
struct etm_drvdata {int port_size; int nr_addr_cmp; int nr_cntr; int nr_ext_out; int nr_ctxid_cmp; int traceid; int cpu; TYPE_1__* csdev; int base; struct etm_config config; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int) ;
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
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,char*,int ,int) ;
 int FUNC_12 (struct etm_drvdata*) ;
 int FUNC_13 (struct etm_drvdata*) ;
 int FUNC_14 (struct etm_drvdata*) ;
 int FUNC_15 (struct etm_drvdata*,int ) ;
 int FUNC_16 (struct etm_drvdata*) ;
 int FUNC_17 (struct etm_drvdata*) ;
 int FUNC_18 (struct etm_drvdata*,int,int ) ;

__attribute__((used)) static int FUNC_19(struct etm_drvdata *VAR_23)
{
 int VAR_24, VAR_25;
 u32 VAR_26;
 struct etm_config *VAR_27 = &VAR_23->config;

 FUNC_1(VAR_23->base);

 VAR_25 = FUNC_10(VAR_23->base);
 if (VAR_25)
  goto done;


 FUNC_13(VAR_23);

 FUNC_17(VAR_23);

 FUNC_14(VAR_23);

 FUNC_16(VAR_23);

 VAR_26 = FUNC_15(VAR_23, VAR_3);

 VAR_26 &= ~VAR_0;
 VAR_26 |= VAR_23->port_size;
 VAR_26 |= VAR_4;
 FUNC_18(VAR_23, VAR_27->ctrl | VAR_26, VAR_3);
 FUNC_18(VAR_23, VAR_27->trigger_event, VAR_18);
 FUNC_18(VAR_23, VAR_27->startstop_ctrl, VAR_20);
 FUNC_18(VAR_23, VAR_27->enable_event, VAR_16);
 FUNC_18(VAR_23, VAR_27->enable_ctrl1, VAR_15);
 FUNC_18(VAR_23, VAR_27->fifofull_level, VAR_6);
 for (VAR_24 = 0; VAR_24 < VAR_23->nr_addr_cmp; VAR_24++) {
  FUNC_18(VAR_23, VAR_27->addr_val[VAR_24], FUNC_3(VAR_24));
  FUNC_18(VAR_23, VAR_27->addr_acctype[VAR_24], FUNC_2(VAR_24));
 }
 for (VAR_24 = 0; VAR_24 < VAR_23->nr_cntr; VAR_24++) {
  FUNC_18(VAR_23, VAR_27->cntr_rld_val[VAR_24], FUNC_7(VAR_24));
  FUNC_18(VAR_23, VAR_27->cntr_event[VAR_24], FUNC_5(VAR_24));
  FUNC_18(VAR_23, VAR_27->cntr_rld_event[VAR_24],
      FUNC_6(VAR_24));
  FUNC_18(VAR_23, VAR_27->cntr_val[VAR_24], FUNC_8(VAR_24));
 }
 FUNC_18(VAR_23, VAR_27->seq_12_event, VAR_7);
 FUNC_18(VAR_23, VAR_27->seq_21_event, VAR_9);
 FUNC_18(VAR_23, VAR_27->seq_23_event, VAR_10);
 FUNC_18(VAR_23, VAR_27->seq_31_event, VAR_11);
 FUNC_18(VAR_23, VAR_27->seq_32_event, VAR_12);
 FUNC_18(VAR_23, VAR_27->seq_13_event, VAR_8);
 FUNC_18(VAR_23, VAR_27->seq_curr_state, VAR_13);
 for (VAR_24 = 0; VAR_24 < VAR_23->nr_ext_out; VAR_24++)
  FUNC_18(VAR_23, VAR_22, FUNC_9(VAR_24));
 for (VAR_24 = 0; VAR_24 < VAR_23->nr_ctxid_cmp; VAR_24++)
  FUNC_18(VAR_23, VAR_27->ctxid_pid[VAR_24], FUNC_4(VAR_24));
 FUNC_18(VAR_23, VAR_27->ctxid_mask, VAR_2);
 FUNC_18(VAR_23, VAR_27->sync_freq, VAR_14);

 FUNC_18(VAR_23, 0x0, VAR_5);
 FUNC_18(VAR_23, VAR_27->timestamp_event, VAR_19);

 FUNC_18(VAR_23, 0x0, VAR_1);
 FUNC_18(VAR_23, VAR_23->traceid, VAR_17);

 FUNC_18(VAR_23, 0x0, VAR_21);

 FUNC_12(VAR_23);

done:
 FUNC_0(VAR_23->base);

 FUNC_11(&VAR_23->csdev->dev, "cpu: %d enable smp call done: %d\n",
  VAR_23->cpu, VAR_25);
 return VAR_25;
}
