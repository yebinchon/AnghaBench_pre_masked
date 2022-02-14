
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u32 ;
typedef unsigned long u16 ;
struct TYPE_4__ {unsigned int group_size; unsigned int ngroups; unsigned int nctxt_extra; } ;
struct hfi1_devdata {int num_rcv_contexts; unsigned long n_krcv_queues; unsigned long first_dyn_alloc_ctxt; unsigned long num_vnic_contexts; unsigned long num_user_contexts; unsigned long freectxts; int num_send_contexts; TYPE_2__* sc_sizes; TYPE_1__ rcv_entries; } ;
struct TYPE_6__ {int real_cpu_mask; } ;
struct TYPE_5__ {int count; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_1 (struct hfi1_devdata*) ;
 unsigned long FUNC_2 (struct hfi1_devdata*) ;
 unsigned long FUNC_3 (struct hfi1_devdata*) ;
 unsigned long FUNC_4 (int *) ;
 int FUNC_5 (struct hfi1_devdata*,char*,...) ;
 int FUNC_6 (struct hfi1_devdata*,char*,unsigned long,...) ;
 int FUNC_7 (struct hfi1_devdata*) ;
 long VAR_10 ;
 TYPE_3__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 unsigned long FUNC_8 (struct hfi1_devdata*,int *,int *) ;

__attribute__((used)) static int FUNC_9(struct hfi1_devdata *VAR_14)
{
 unsigned long VAR_15;
 u16 VAR_16 = VAR_1;
 int VAR_17;
 int VAR_18;
 unsigned VAR_19;
 int VAR_20;
 int VAR_21;
 u32 VAR_22;
 u32 VAR_23 = FUNC_3(VAR_14);
 u32 VAR_24 = FUNC_2(VAR_14);
 if (VAR_10)





  VAR_15 = VAR_10 + 1;
 else
  VAR_15 = VAR_0 + 1;




 if (VAR_15 > (VAR_23 - VAR_13 - 1)) {
  FUNC_5(VAR_14,
      "Reducing # kernel rcv contexts to: %d, from %lu\n",
      VAR_23 - VAR_13 - 1,
      VAR_15);
  VAR_15 = VAR_23 - VAR_13 - 1;
 }


 if ((VAR_15 + VAR_16) > VAR_24) {
  FUNC_5(VAR_14, "No receive contexts available for VNIC\n");
  VAR_16 = 0;
 }
 VAR_17 = VAR_15 + VAR_16;






 if (VAR_12 < 0)
  VAR_22 = FUNC_4(&VAR_11.real_cpu_mask);
 else
  VAR_22 = VAR_12;



 if (VAR_17 + VAR_22 > VAR_24) {
  FUNC_5(VAR_14,
      "Reducing # user receive contexts to: %d, from %u\n",
      VAR_24 - VAR_17,
      VAR_22);

  VAR_22 = VAR_24 - VAR_17;
 }
 VAR_20 = FUNC_8(VAR_14, ((void*)0), ((void*)0)) + (VAR_16 * 2);
 if (FUNC_0(VAR_9))
  VAR_20 += VAR_15 - 1;
 if (VAR_20 + VAR_22 > VAR_3) {
  VAR_21 = VAR_3 - VAR_20;
  FUNC_5(VAR_14,
      "RMT size is reducing the number of user receive contexts from %u to %d\n",
      VAR_22,
      VAR_21);

  VAR_22 = VAR_21;
 }

 VAR_17 += VAR_22;


 VAR_14->num_rcv_contexts = VAR_17;
 VAR_14->n_krcv_queues = VAR_15;
 VAR_14->first_dyn_alloc_ctxt = VAR_15;
 VAR_14->num_vnic_contexts = VAR_16;
 VAR_14->num_user_contexts = VAR_22;
 VAR_14->freectxts = VAR_22;
 FUNC_6(VAR_14,
      "rcv contexts: chip %d, used %d (kernel %d, vnic %u, user %u)\n",
      VAR_24,
      (int)VAR_14->num_rcv_contexts,
      (int)VAR_14->n_krcv_queues,
      VAR_14->num_vnic_contexts,
      VAR_14->num_user_contexts);
 VAR_14->rcv_entries.group_size = VAR_4;
 VAR_19 = FUNC_1(VAR_14) / VAR_14->rcv_entries.group_size;
 VAR_14->rcv_entries.ngroups = VAR_19 / VAR_14->num_rcv_contexts;
 VAR_14->rcv_entries.nctxt_extra = VAR_19 -
  (VAR_14->num_rcv_contexts * VAR_14->rcv_entries.ngroups);
 FUNC_6(VAR_14, "RcvArray groups %u, ctxts extra %u\n",
      VAR_14->rcv_entries.ngroups,
      VAR_14->rcv_entries.nctxt_extra);
 if (VAR_14->rcv_entries.ngroups * VAR_14->rcv_entries.group_size >
     VAR_2 * 2) {
  VAR_14->rcv_entries.ngroups = (VAR_2 * 2) /
   VAR_14->rcv_entries.group_size;
  FUNC_6(VAR_14,
       "RcvArray group count too high, change to %u\n",
       VAR_14->rcv_entries.ngroups);
  VAR_14->rcv_entries.nctxt_extra = 0;
 }



 VAR_18 = FUNC_7(VAR_14);
 if (VAR_18 >= 0) {
  VAR_14->num_send_contexts = VAR_18;
  FUNC_6(
   VAR_14,
   "send contexts: chip %d, used %d (kernel %d, ack %d, user %d, vl15 %d)\n",
   VAR_23,
   VAR_14->num_send_contexts,
   VAR_14->sc_sizes[VAR_6].count,
   VAR_14->sc_sizes[VAR_5].count,
   VAR_14->sc_sizes[VAR_7].count,
   VAR_14->sc_sizes[VAR_8].count);
  VAR_18 = 0;
 }

 return VAR_18;
}
