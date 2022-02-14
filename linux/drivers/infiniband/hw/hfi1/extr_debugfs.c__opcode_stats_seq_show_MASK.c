
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct seq_file {scalar_t__ private; } ;
struct hfi1_ibdev {int dummy; } ;
struct hfi1_devdata {scalar_t__ first_dyn_alloc_ctxt; } ;
struct hfi1_ctxtdata {TYPE_2__* opstats; } ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {TYPE_1__* stats; } ;
struct TYPE_3__ {scalar_t__ n_bytes; scalar_t__ n_packets; } ;


 struct hfi1_devdata* FUNC_0 (struct hfi1_ibdev*) ;
 struct hfi1_ctxtdata* FUNC_1 (struct hfi1_devdata*,scalar_t__) ;
 int FUNC_2 (struct hfi1_ctxtdata*) ;
 int FUNC_3 (struct seq_file*,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 loff_t *VAR_2 = VAR_1;
 loff_t VAR_3 = *VAR_2, VAR_4;
 u64 VAR_5 = 0, VAR_6 = 0;
 struct hfi1_ibdev *VAR_7 = (struct hfi1_ibdev *)VAR_0->private;
 struct hfi1_devdata *VAR_8 = FUNC_0(VAR_7);
 struct hfi1_ctxtdata *VAR_9;

 for (VAR_4 = 0; VAR_4 < VAR_8->first_dyn_alloc_ctxt; VAR_4++) {
  VAR_9 = FUNC_1(VAR_8, VAR_4);
  if (VAR_9) {
   VAR_5 += VAR_9->opstats->stats[VAR_3].n_packets;
   VAR_6 += VAR_9->opstats->stats[VAR_3].n_bytes;
  }
  FUNC_2(VAR_9);
 }
 return FUNC_3(VAR_0, VAR_3, VAR_5, VAR_6);
}
