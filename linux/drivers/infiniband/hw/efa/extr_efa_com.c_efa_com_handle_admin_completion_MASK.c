
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct TYPE_8__ {int completed_cmd; } ;
struct TYPE_7__ {int cc; } ;
struct TYPE_6__ {size_t cc; int phase; struct efa_admin_acq_entry* entries; } ;
struct efa_com_admin_queue {int depth; TYPE_4__ stats; TYPE_3__ sq; TYPE_2__ cq; } ;
struct TYPE_5__ {int flags; } ;
struct efa_admin_acq_entry {TYPE_1__ acq_common_descriptor; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (size_t,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct efa_com_admin_queue*,struct efa_admin_acq_entry*) ;

__attribute__((used)) static void FUNC_4(struct efa_com_admin_queue *VAR_1)
{
 struct efa_admin_acq_entry *VAR_2;
 u16 VAR_3;
 u16 VAR_4 = 0;
 u8 VAR_5;
 u16 VAR_6;

 VAR_3 = VAR_1->depth - 1;

 VAR_6 = VAR_1->cq.cc & VAR_3;
 VAR_5 = VAR_1->cq.phase;

 VAR_2 = &VAR_1->cq.entries[VAR_6];


 while ((FUNC_0(VAR_2->acq_common_descriptor.flags) &
  VAR_0) == VAR_5) {




  FUNC_2();
  FUNC_3(VAR_1, VAR_2);

  VAR_6++;
  VAR_4++;
  if (VAR_6 == VAR_1->depth) {
   VAR_6 = 0;
   VAR_5 = !VAR_5;
  }

  VAR_2 = &VAR_1->cq.entries[VAR_6];
 }

 VAR_1->cq.cc += VAR_4;
 VAR_1->cq.phase = VAR_5;
 VAR_1->sq.cc += VAR_4;
 FUNC_1(VAR_4, &VAR_1->stats.completed_cmd);
}
