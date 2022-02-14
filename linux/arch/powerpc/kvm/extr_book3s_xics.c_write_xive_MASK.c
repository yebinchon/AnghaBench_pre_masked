
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct kvmppc_xics {int dummy; } ;
struct kvmppc_ics {int lock; } ;
struct ics_irq_state {scalar_t__ resend; scalar_t__ masked_pending; scalar_t__ saved_priority; scalar_t__ priority; scalar_t__ server; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static bool FUNC_4(struct kvmppc_xics *VAR_1, struct kvmppc_ics *VAR_2,
         struct ics_irq_state *VAR_3,
         u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 bool VAR_7;
 unsigned long VAR_8;

 FUNC_3(VAR_8);
 FUNC_0(&VAR_2->lock);

 VAR_3->server = VAR_4;
 VAR_3->priority = VAR_5;
 VAR_3->saved_priority = VAR_6;
 VAR_7 = 0;
 if ((VAR_3->masked_pending || VAR_3->resend) && VAR_5 != VAR_0) {
  VAR_3->masked_pending = 0;
  VAR_3->resend = 0;
  VAR_7 = 1;
 }

 FUNC_1(&VAR_2->lock);
 FUNC_2(VAR_8);

 return VAR_7;
}
