
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_8__ {int ib_base_hi; } ;
struct TYPE_7__ {size_t ib_size; int chain; int valid; int process_cnt; scalar_t__ offload_polling; } ;
struct TYPE_6__ {int u32All; } ;
struct pm4_mes_runlist {TYPE_4__ bitfields3; int ordinal2; TYPE_3__ bitfields4; TYPE_2__ header; } ;
struct packet_manager {TYPE_1__* dqm; } ;
struct kfd_dev {int max_proc_per_quantum; } ;
struct TYPE_5__ {int processes_count; struct kfd_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct packet_manager *VAR_2, uint32_t *VAR_3,
   uint64_t VAR_4, size_t VAR_5, bool VAR_6)
{
 struct pm4_mes_runlist *VAR_7;
 int VAR_8 = 0;
 struct kfd_dev *VAR_9 = VAR_2->dqm->dev;

 if (FUNC_0(!VAR_4))
  return -VAR_0;
 VAR_8 = FUNC_3(VAR_2->dqm->processes_count,
   VAR_9->max_proc_per_quantum);

 VAR_7 = (struct pm4_mes_runlist *)VAR_3;

 FUNC_2(VAR_3, 0, sizeof(struct pm4_mes_runlist));
 VAR_7->header.u32All = FUNC_4(VAR_1,
      sizeof(struct pm4_mes_runlist));

 VAR_7->bitfields4.ib_size = VAR_5;
 VAR_7->bitfields4.chain = VAR_6 ? 1 : 0;
 VAR_7->bitfields4.offload_polling = 0;
 VAR_7->bitfields4.valid = 1;
 VAR_7->bitfields4.process_cnt = VAR_8;
 VAR_7->ordinal2 = FUNC_1(VAR_4);
 VAR_7->bitfields3.ib_base_hi = FUNC_5(VAR_4);

 return 0;
}
