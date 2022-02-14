
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hfi1_user_info {int uuid; int userversion; scalar_t__ subctxt_cnt; } ;
struct hfi1_filedata {int rec_cpu_num; int subctxt; } ;
struct hfi1_devdata {int flags; scalar_t__ num_user_contexts; int freectxts; int node; int pport; } ;
struct hfi1_ctxtdata {int jkey; int uuid; int comm; int wait; int flags; int userversion; int in_use_ctxts; TYPE_1__* sc; int rcvhdrqentsize; int numa_id; int ctxt; } ;
struct TYPE_7__ {int comm; int pid; } ;
struct TYPE_6__ {int sps_ctxts; } ;
struct TYPE_5__ {int hw_context; int sw_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct hfi1_devdata*) ;
 int FUNC_2 (int) ;
 TYPE_4__* VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (struct hfi1_devdata*,char*) ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 int FUNC_6 (int ,char*,int ,int ,...) ;
 int FUNC_7 (int ,int,struct hfi1_ctxtdata**) ;
 int FUNC_8 (struct hfi1_ctxtdata*) ;
 int FUNC_9 (int ) ;
 TYPE_3__ VAR_8 ;
 int FUNC_10 (struct hfi1_ctxtdata*,struct hfi1_user_info*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 () ;
 TYPE_1__* FUNC_14 (struct hfi1_devdata*,int ,int ,int ) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (int ,int ,int) ;

__attribute__((used)) static int FUNC_17(struct hfi1_filedata *VAR_9, struct hfi1_devdata *VAR_10,
    struct hfi1_user_info *VAR_11,
    struct hfi1_ctxtdata **VAR_12)
{
 struct hfi1_ctxtdata *VAR_13;
 int VAR_14, VAR_15;

 if (VAR_10->flags & VAR_3) {







  return -VAR_1;
 }

 if (!VAR_10->freectxts)
  return -VAR_0;





 VAR_9->rec_cpu_num = FUNC_9(VAR_10->node);
 if (VAR_9->rec_cpu_num != -1)
  VAR_15 = FUNC_2(VAR_9->rec_cpu_num);
 else
  VAR_15 = FUNC_13();
 VAR_14 = FUNC_7(VAR_10->pport, VAR_15, &VAR_13);
 if (VAR_14 < 0) {
  FUNC_4(VAR_10, "user ctxtdata allocation failed\n");
  return VAR_14;
 }
 FUNC_6(VAR_4, "[%u:%u] pid %u assigned to CPU %d (NUMA %u)",
    VAR_13->ctxt, VAR_9->subctxt, VAR_6->pid, VAR_9->rec_cpu_num,
    VAR_13->numa_id);




 VAR_13->sc = FUNC_14(VAR_10, VAR_5, VAR_13->rcvhdrqentsize, VAR_10->node);
 if (!VAR_13->sc) {
  VAR_14 = -VAR_2;
  goto ctxdata_free;
 }
 FUNC_6(VAR_4, "allocated send context %u(%u)\n", VAR_13->sc->sw_index,
    VAR_13->sc->hw_context);
 VAR_14 = FUNC_15(VAR_13->sc);
 if (VAR_14)
  goto ctxdata_free;
 FUNC_0(0, VAR_13->in_use_ctxts);
 if (VAR_11->subctxt_cnt)
  FUNC_10(VAR_13, VAR_11);
 VAR_13->userversion = VAR_11->userversion;
 VAR_13->flags = VAR_7;
 FUNC_11(&VAR_13->wait);
 FUNC_16(VAR_13->comm, VAR_6->comm, sizeof(VAR_13->comm));
 FUNC_12(VAR_13->uuid, VAR_11->uuid, sizeof(VAR_13->uuid));
 VAR_13->jkey = FUNC_5(FUNC_3());
 VAR_8.sps_ctxts++;




 if (VAR_10->freectxts-- == VAR_10->num_user_contexts)
  FUNC_1(VAR_10);

 *VAR_12 = VAR_13;

 return 0;

ctxdata_free:
 FUNC_8(VAR_13);
 return VAR_14;
}
