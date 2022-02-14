
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct seq_file {scalar_t__ private; } ;
struct hfi1_ibdev {int dummy; } ;
struct hfi1_devdata {int dummy; } ;
struct hfi1_ctxtdata {TYPE_1__* opstats; } ;
typedef size_t loff_t ;
struct TYPE_4__ {scalar_t__ n_packets; } ;
struct TYPE_3__ {TYPE_2__* stats; } ;


 size_t FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 void* VAR_1 ;
 struct hfi1_devdata* FUNC_1 (struct hfi1_ibdev*) ;
 struct hfi1_ctxtdata* FUNC_2 (struct hfi1_devdata*,size_t) ;
 int FUNC_3 (struct hfi1_ctxtdata*) ;
 int FUNC_4 (struct seq_file*,char*,size_t,scalar_t__) ;
 int FUNC_5 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_2, void *VAR_3)
{
 loff_t *VAR_4;
 loff_t VAR_5, VAR_6;
 u64 VAR_7 = 0;
 struct hfi1_ibdev *VAR_8 = (struct hfi1_ibdev *)VAR_2->private;
 struct hfi1_devdata *VAR_9 = FUNC_1(VAR_8);
 struct hfi1_ctxtdata *VAR_10;

 if (VAR_3 == VAR_1) {
  FUNC_5(VAR_2, "Ctx:npkts\n");
  return 0;
 }

 VAR_4 = VAR_3;
 VAR_5 = *VAR_4;

 VAR_10 = FUNC_2(VAR_9, VAR_5);
 if (!VAR_10)
  return VAR_0;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_10->opstats->stats); VAR_6++)
  VAR_7 += VAR_10->opstats->stats[VAR_6].n_packets;

 FUNC_3(VAR_10);

 if (!VAR_7)
  return VAR_0;

 FUNC_4(VAR_2, "  %llu:%llu\n", VAR_5, VAR_7);
 return 0;
}
