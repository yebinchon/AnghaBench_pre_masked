
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
struct qib_devdata {size_t first_user_ctxt; TYPE_3__** rcd; } ;
typedef size_t loff_t ;
struct TYPE_6__ {TYPE_2__* opstats; } ;
struct TYPE_5__ {TYPE_1__* stats; } ;
struct TYPE_4__ {scalar_t__ n_bytes; scalar_t__ n_packets; } ;


 int VAR_0 ;
 struct qib_devdata* FUNC_0 (struct qib_ibdev*) ;
 int FUNC_1 (struct seq_file*,char*,size_t,unsigned long long,unsigned long long) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 loff_t *VAR_3 = VAR_2;
 loff_t VAR_4 = *VAR_3, VAR_5;
 u64 VAR_6 = 0, VAR_7 = 0;
 struct qib_ibdev *VAR_8 = (struct qib_ibdev *)VAR_1->private;
 struct qib_devdata *VAR_9 = FUNC_0(VAR_8);

 for (VAR_5 = 0; VAR_5 < VAR_9->first_user_ctxt; VAR_5++) {
  if (!VAR_9->rcd[VAR_5])
   continue;
  VAR_6 += VAR_9->rcd[VAR_5]->opstats->stats[VAR_4].n_packets;
  VAR_7 += VAR_9->rcd[VAR_5]->opstats->stats[VAR_4].n_bytes;
 }
 if (!VAR_6 && !VAR_7)
  return VAR_0;
 FUNC_1(VAR_1, "%02llx %llu/%llu\n", VAR_4,
  (unsigned long long) VAR_6,
  (unsigned long long) VAR_7);

 return 0;
}
