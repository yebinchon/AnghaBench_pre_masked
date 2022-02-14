
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_6__ {size_t ib_size; int chain; int valid; int process_cnt; scalar_t__ offload_polling; } ;
struct TYPE_5__ {int u32All; } ;
struct pm4_mes_runlist {int ib_base_hi; int ordinal2; TYPE_3__ bitfields4; TYPE_2__ header; } ;
struct packet_manager {TYPE_1__* dqm; } ;
struct kfd_dev {int max_proc_per_quantum; } ;
struct TYPE_4__ {int processes_count; struct kfd_dev* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct packet_manager *VAR_1, uint32_t *VAR_2,
   uint64_t VAR_3, size_t VAR_4, bool VAR_5)
{
 struct pm4_mes_runlist *VAR_6;

 int VAR_7 = 0;
 struct kfd_dev *VAR_8 = VAR_1->dqm->dev;
 VAR_7 = FUNC_2(VAR_1->dqm->processes_count,
   VAR_8->max_proc_per_quantum);


 VAR_6 = (struct pm4_mes_runlist *)VAR_2;

 FUNC_1(VAR_2, 0, sizeof(struct pm4_mes_runlist));
 VAR_6->header.u32All = FUNC_3(VAR_0,
      sizeof(struct pm4_mes_runlist));

 VAR_6->bitfields4.ib_size = VAR_4;
 VAR_6->bitfields4.chain = VAR_5 ? 1 : 0;
 VAR_6->bitfields4.offload_polling = 0;
 VAR_6->bitfields4.valid = 1;
 VAR_6->bitfields4.process_cnt = VAR_7;
 VAR_6->ordinal2 = FUNC_0(VAR_3);
 VAR_6->ib_base_hi = FUNC_4(VAR_3);

 return 0;
}
