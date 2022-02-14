
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_xics {int max_icsid; struct kvmppc_ics** ics; } ;
struct kvmppc_ics {int icsid; TYPE_1__* irq_state; } ;
struct kvm {int lock; } ;
struct TYPE_2__ {int number; void* saved_priority; void* priority; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 struct kvmppc_ics* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

__attribute__((used)) static struct kvmppc_ics *FUNC_4(struct kvm *VAR_4,
     struct kvmppc_xics *VAR_5, int VAR_6)
{
 struct kvmppc_ics *VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = VAR_6 >> VAR_1;

 FUNC_1(&VAR_4->lock);


 if (VAR_5->ics[VAR_9])
  goto out;


 VAR_7 = FUNC_0(sizeof(struct kvmppc_ics), VAR_0);
 if (!VAR_7)
  goto out;

 VAR_7->icsid = VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_7->irq_state[VAR_8].number = (VAR_9 << VAR_1) | VAR_8;
  VAR_7->irq_state[VAR_8].priority = VAR_3;
  VAR_7->irq_state[VAR_8].saved_priority = VAR_3;
 }
 FUNC_3();
 VAR_5->ics[VAR_9] = VAR_7;

 if (VAR_9 > VAR_5->max_icsid)
  VAR_5->max_icsid = VAR_9;

 out:
 FUNC_2(&VAR_4->lock);
 return VAR_5->ics[VAR_9];
}
