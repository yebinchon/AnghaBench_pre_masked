
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef unsigned int u32 ;
typedef unsigned int u16 ;
struct hfi1_pportdata {struct hfi1_devdata* dd; } ;
struct TYPE_7__ {scalar_t__ nctxt_extra; unsigned int ngroups; unsigned int group_size; } ;
struct hfi1_devdata {scalar_t__ num_rcv_contexts; scalar_t__ first_dyn_alloc_ctxt; unsigned int n_krcv_queues; TYPE_3__ rcv_entries; } ;
struct TYPE_8__ {scalar_t__ count; scalar_t__ size; int rcvtid_size; void* rcvtids; void* buffers; } ;
struct TYPE_6__ {int queue_head; } ;
struct TYPE_5__ {int queue_head; } ;
struct hfi1_ctxtdata {int numa_id; unsigned int rcv_array_groups; unsigned int eager_base; void* opstats; TYPE_4__ egrbufs; int ctxt; scalar_t__ rcvhdrqentsize; scalar_t__ rhf_offset; int rcvhdrq_cnt; TYPE_2__ rarr_queue; TYPE_1__ flow_queue; int exp_lock; int exp_mutex; int rhf_rcv_function_map; struct hfi1_devdata* dd; struct hfi1_pportdata* ppd; int qp_wait_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct hfi1_devdata*,struct hfi1_ctxtdata*,unsigned int*) ;
 int FUNC_3 (struct hfi1_devdata*,char*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,char*,int ,...) ;
 int FUNC_5 (struct hfi1_ctxtdata*) ;
 int FUNC_6 (struct hfi1_ctxtdata*) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (struct hfi1_ctxtdata*) ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 void* FUNC_8 (scalar_t__,int,int ,int) ;
 int FUNC_9 (struct hfi1_ctxtdata*) ;
 void* FUNC_10 (int,int ,int) ;
 int FUNC_11 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_12 (unsigned int,unsigned int) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct hfi1_pportdata *VAR_11, int VAR_12,
    struct hfi1_ctxtdata **VAR_13)
{
 struct hfi1_devdata *VAR_14 = VAR_11->dd;
 struct hfi1_ctxtdata *VAR_15;
 unsigned VAR_16 = 0;
 u32 VAR_17;

 if (VAR_14->rcv_entries.nctxt_extra >
     VAR_14->num_rcv_contexts - VAR_14->first_dyn_alloc_ctxt)
  VAR_16 = (VAR_14->rcv_entries.nctxt_extra -
    (VAR_14->num_rcv_contexts - VAR_14->first_dyn_alloc_ctxt));
 VAR_15 = FUNC_10(sizeof(*VAR_15), VAR_1, VAR_12);
 if (VAR_15) {
  u32 VAR_18, VAR_19;
  u16 VAR_20;
  int VAR_21;

  VAR_21 = FUNC_2(VAR_14, VAR_15, &VAR_20);
  if (VAR_21) {
   *VAR_13 = ((void*)0);
   FUNC_9(VAR_15);
   return VAR_21;
  }

  FUNC_0(&VAR_15->qp_wait_list);
  FUNC_5(VAR_15);
  VAR_15->ppd = VAR_11;
  VAR_15->dd = VAR_14;
  VAR_15->numa_id = VAR_12;
  VAR_15->rcv_array_groups = VAR_14->rcv_entries.ngroups;
  VAR_15->rhf_rcv_function_map = VAR_9;

  FUNC_11(&VAR_15->exp_mutex);
  FUNC_13(&VAR_15->exp_lock);
  FUNC_0(&VAR_15->flow_queue.queue_head);
  FUNC_0(&VAR_15->rarr_queue.queue_head);

  FUNC_4(VAR_4, "setting up context %u\n", VAR_15->ctxt);
  if (VAR_20 < VAR_14->first_dyn_alloc_ctxt) {
   if (VAR_20 < VAR_16) {
    VAR_17 = VAR_20 * (VAR_14->rcv_entries.ngroups + 1);
    VAR_15->rcv_array_groups++;
   } else {
    VAR_17 = VAR_16 +
     (VAR_20 * VAR_14->rcv_entries.ngroups);
   }
  } else {
   u16 VAR_22 = VAR_20 - VAR_14->first_dyn_alloc_ctxt;

   VAR_17 = ((VAR_14->n_krcv_queues * VAR_14->rcv_entries.ngroups) +
    VAR_16);
   if (VAR_22 < VAR_14->rcv_entries.nctxt_extra) {
    VAR_17 += VAR_22 * (VAR_14->rcv_entries.ngroups + 1);
    VAR_15->rcv_array_groups++;
   } else {
    VAR_17 += VAR_14->rcv_entries.nctxt_extra +
     (VAR_22 * VAR_14->rcv_entries.ngroups);
   }
  }
  VAR_15->eager_base = VAR_17 * VAR_14->rcv_entries.group_size;

  VAR_15->rcvhdrq_cnt = VAR_10;
  VAR_15->rcvhdrqentsize = VAR_6;
  VAR_15->rhf_offset =
   VAR_15->rcvhdrqentsize - sizeof(u64) / sizeof(u32);
  VAR_19 = VAR_15->rcv_array_groups *
   VAR_14->rcv_entries.group_size;
  VAR_18 = ((VAR_19 * VAR_8) / 100);
  VAR_15->egrbufs.count = FUNC_12(VAR_18,
      VAR_14->rcv_entries.group_size);
  if (VAR_15->egrbufs.count > VAR_3) {
   FUNC_3(VAR_14, "ctxt%u: requested too many RcvArray entries.\n",
       VAR_15->ctxt);
   VAR_15->egrbufs.count = VAR_3;
  }
  FUNC_4(VAR_4,
     "ctxt%u: max Eager buffer RcvArray entries: %u\n",
     VAR_15->ctxt, VAR_15->egrbufs.count);
  VAR_15->egrbufs.buffers =
   FUNC_8(VAR_15->egrbufs.count,
         sizeof(*VAR_15->egrbufs.buffers),
         VAR_1, VAR_12);
  if (!VAR_15->egrbufs.buffers)
   goto bail;
  VAR_15->egrbufs.rcvtids =
   FUNC_8(VAR_15->egrbufs.count,
         sizeof(*VAR_15->egrbufs.rcvtids),
         VAR_1, VAR_12);
  if (!VAR_15->egrbufs.rcvtids)
   goto bail;
  VAR_15->egrbufs.size = VAR_5;





  if (VAR_15->egrbufs.size < VAR_7) {
   VAR_15->egrbufs.size = FUNC_1(VAR_7);
   FUNC_4(VAR_4,
      "ctxt%u: eager bufs size too small. Adjusting to %u\n",
        VAR_15->ctxt, VAR_15->egrbufs.size);
  }
  VAR_15->egrbufs.rcvtid_size = VAR_2;


  if (VAR_20 < VAR_14->first_dyn_alloc_ctxt) {
   VAR_15->opstats = FUNC_10(sizeof(*VAR_15->opstats),
          VAR_1, VAR_12);
   if (!VAR_15->opstats)
    goto bail;


   FUNC_7(VAR_15);
  }

  *VAR_13 = VAR_15;
  return 0;
 }

bail:
 *VAR_13 = ((void*)0);
 FUNC_6(VAR_15);
 return -VAR_0;
}
