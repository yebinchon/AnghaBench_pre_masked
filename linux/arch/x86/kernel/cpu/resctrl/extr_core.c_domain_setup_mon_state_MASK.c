
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdt_resource {int num_rmid; } ;
struct rdt_domain {int mbm_over; void* mbm_total; int rmid_busy_llc; void* mbm_local; int cqm_limbo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 void* FUNC_7 (int ,size_t,int ) ;
 int FUNC_8 (void*) ;
 int VAR_4 ;
 int FUNC_9 (struct rdt_domain*,int ) ;

__attribute__((used)) static int FUNC_10(struct rdt_resource *VAR_5, struct rdt_domain *VAR_6)
{
 size_t VAR_7;

 if (FUNC_3()) {
  VAR_6->rmid_busy_llc = FUNC_2(VAR_5->num_rmid, VAR_1);
  if (!VAR_6->rmid_busy_llc)
   return -VAR_0;
  FUNC_0(&VAR_6->cqm_limbo, VAR_3);
 }
 if (FUNC_6()) {
  VAR_7 = sizeof(*VAR_6->mbm_total);
  VAR_6->mbm_total = FUNC_7(VAR_5->num_rmid, VAR_7, VAR_1);
  if (!VAR_6->mbm_total) {
   FUNC_1(VAR_6->rmid_busy_llc);
   return -VAR_0;
  }
 }
 if (FUNC_5()) {
  VAR_7 = sizeof(*VAR_6->mbm_local);
  VAR_6->mbm_local = FUNC_7(VAR_5->num_rmid, VAR_7, VAR_1);
  if (!VAR_6->mbm_local) {
   FUNC_1(VAR_6->rmid_busy_llc);
   FUNC_8(VAR_6->mbm_total);
   return -VAR_0;
  }
 }

 if (FUNC_4()) {
  FUNC_0(&VAR_6->mbm_over, VAR_4);
  FUNC_9(VAR_6, VAR_2);
 }

 return 0;
}
