
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct seq_file {scalar_t__ private; } ;
struct qib_ibdev {int dummy; } ;
struct qib_devdata {TYPE_2__** rcd; } ;
typedef size_t loff_t ;
struct TYPE_6__ {scalar_t__ n_packets; } ;
struct TYPE_5__ {TYPE_1__* opstats; } ;
struct TYPE_4__ {TYPE_3__* stats; } ;


 size_t FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 void* VAR_1 ;
 struct qib_devdata* FUNC_1 (struct qib_ibdev*) ;
 int FUNC_2 (struct seq_file*,char*,size_t,scalar_t__) ;
 int FUNC_3 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_2, void *VAR_3)
{
 loff_t *VAR_4;
 loff_t VAR_5, VAR_6;
 u64 VAR_7 = 0;
 struct qib_ibdev *VAR_8 = (struct qib_ibdev *)VAR_2->private;
 struct qib_devdata *VAR_9 = FUNC_1(VAR_8);

 if (VAR_3 == VAR_1) {
  FUNC_3(VAR_2, "Ctx:npkts\n");
  return 0;
 }

 VAR_4 = VAR_3;
 VAR_5 = *VAR_4;

 if (!VAR_9->rcd[VAR_5])
  return VAR_0;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_9->rcd[VAR_5]->opstats->stats); VAR_6++)
  VAR_7 += VAR_9->rcd[VAR_5]->opstats->stats[VAR_6].n_packets;

 if (!VAR_7)
  return VAR_0;

 FUNC_2(VAR_2, "  %llu:%llu\n", VAR_5, VAR_7);
 return 0;
}
