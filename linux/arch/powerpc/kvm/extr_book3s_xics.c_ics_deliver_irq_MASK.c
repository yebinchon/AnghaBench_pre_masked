
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct kvmppc_xics {int dummy; } ;
struct kvmppc_ics {struct ics_irq_state* irq_state; } ;
struct ics_irq_state {scalar_t__ pq_state; int intr_cpu; scalar_t__ host_irq; scalar_t__ lsi; int exists; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct kvmppc_xics*,int *,scalar_t__,int) ;
 struct kvmppc_ics* FUNC_3 (struct kvmppc_xics*,scalar_t__,size_t*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct kvmppc_xics *VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct ics_irq_state *VAR_8;
 struct kvmppc_ics *VAR_9;
 u16 VAR_10;
 u32 VAR_11, VAR_12;

 FUNC_0("ics deliver %#x (level: %d)\n", VAR_6, VAR_7);

 VAR_9 = FUNC_3(VAR_5, VAR_6, &VAR_10);
 if (!VAR_9) {
  FUNC_0("ics_deliver_irq: IRQ 0x%06x not found !\n", VAR_6);
  return -VAR_0;
 }
 VAR_8 = &VAR_9->irq_state[VAR_10];
 if (!VAR_8->exists)
  return -VAR_0;

 if (VAR_7 == VAR_2 || VAR_7 == VAR_1)
  VAR_7 = 1;
 else if (VAR_7 == VAR_3)
  VAR_7 = 0;





 if (!VAR_8->lsi && VAR_7 == 0)
  return 0;

 do {
  VAR_11 = VAR_8->pq_state;
  if (VAR_8->lsi) {
   if (VAR_7) {
    if (VAR_11 & VAR_4)

     return 0;

    VAR_12 = VAR_4;
   } else
    VAR_12 = 0;
  } else
   VAR_12 = ((VAR_11 << 1) & 3) | VAR_4;
 } while (FUNC_1(&VAR_8->pq_state, VAR_11, VAR_12) != VAR_11);


 if (VAR_12 == VAR_4)
  FUNC_2(VAR_5, ((void*)0), VAR_6, 0);


 if (VAR_8->host_irq)
  VAR_8->intr_cpu = FUNC_4();

 return 0;
}
