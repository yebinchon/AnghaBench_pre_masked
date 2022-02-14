
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dmaengine_result {int result; } ;
struct cppi41_desc {int pd0; } ;
struct TYPE_2__ {int complete; int submit; } ;
struct cppi41_dd {int first_td_desc; int descs_phys; TYPE_1__ td_queue; scalar_t__ qmgr_mem; struct cppi41_desc* cd; } ;
struct cppi41_channel {int td_queued; int td_retry; int td_seen; int td_desc_seen; int q_comp_num; int desc_phys; int port_num; int q_num; int txd; scalar_t__ gcr_reg; scalar_t__ is_tx; struct cppi41_dd* cdd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct cppi41_desc*) ;
 int FUNC_6 (struct cppi41_dd*,int) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct dmaengine_result*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct cppi41_channel *VAR_9)
{
 struct dmaengine_result VAR_10;
 struct cppi41_dd *VAR_11 = VAR_9->cdd;
 struct cppi41_desc *VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15;

 VAR_12 = VAR_11->cd;
 VAR_12 += VAR_11->first_td_desc;

 VAR_15 = VAR_11->descs_phys;
 VAR_15 += VAR_11->first_td_desc * sizeof(struct cppi41_desc);

 if (!VAR_9->td_queued) {
  FUNC_5(VAR_12);
  FUNC_4();

  VAR_13 = (sizeof(struct cppi41_desc) - 24) / 4;
  VAR_13 |= VAR_15;
  FUNC_7(VAR_13, VAR_11->qmgr_mem +
    FUNC_0(VAR_11->td_queue.submit));

  VAR_13 = VAR_4;
  if (!VAR_9->is_tx) {
   VAR_13 |= VAR_6;
   VAR_13 |= VAR_5;
   VAR_13 |= VAR_11->td_queue.complete;
  }
  VAR_13 |= VAR_7;
  FUNC_7(VAR_13, VAR_9->gcr_reg);
  VAR_9->td_queued = 1;
  VAR_9->td_retry = 500;
 }

 if (!VAR_9->td_seen || !VAR_9->td_desc_seen) {

  VAR_14 = FUNC_6(VAR_11, VAR_11->td_queue.complete);
  if (!VAR_14 && VAR_9->is_tx)
   VAR_14 = FUNC_6(VAR_11, VAR_9->q_comp_num);

  if (VAR_14 == VAR_9->desc_phys) {
   VAR_9->td_desc_seen = 1;

  } else if (VAR_14 == VAR_15) {
   u32 VAR_16;

   FUNC_3();
   VAR_16 = VAR_12->pd0;
   FUNC_1((VAR_16 >> VAR_0) != VAR_1);
   FUNC_1(!VAR_9->is_tx && !(VAR_16 & VAR_8));
   FUNC_1((VAR_16 & 0x1f) != VAR_9->port_num);
   VAR_9->td_seen = 1;
  } else if (VAR_14) {
   FUNC_2(1);
  }
 }
 VAR_9->td_retry--;
 if (!VAR_9->td_seen && VAR_9->td_retry) {
  FUNC_10(1);
  return -VAR_3;
 }
 FUNC_1(!VAR_9->td_retry);

 if (!VAR_9->td_desc_seen) {
  VAR_14 = FUNC_6(VAR_11, VAR_9->q_num);
  if (!VAR_14)
   VAR_14 = FUNC_6(VAR_11, VAR_9->q_comp_num);
  FUNC_1(!VAR_14);
 }

 VAR_9->td_queued = 0;
 VAR_9->td_seen = 0;
 VAR_9->td_desc_seen = 0;
 FUNC_7(0, VAR_9->gcr_reg);


 VAR_10.result = VAR_2;
 FUNC_8(&VAR_9->txd);
 FUNC_9(&VAR_9->txd, &VAR_10);

 return 0;
}
