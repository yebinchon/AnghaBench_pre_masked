
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rmid_entry {int list; int busy; int rmid; } ;
struct rdt_resource {scalar_t__ num_rmid; } ;
struct rdt_domain {int rmid_busy_llc; } ;


 size_t VAR_0 ;
 struct rmid_entry* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *,int *) ;
 struct rdt_resource* VAR_1 ;
 int FUNC_4 (struct rmid_entry*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_5(struct rdt_domain *VAR_4, bool VAR_5)
{
 struct rmid_entry *VAR_6;
 struct rdt_resource *VAR_7;
 u32 VAR_8 = 1, VAR_9;

 VAR_7 = &VAR_1[VAR_0];







 for (;;) {
  VAR_9 = FUNC_2(VAR_4->rmid_busy_llc, VAR_7->num_rmid, VAR_8);
  if (VAR_9 >= VAR_7->num_rmid)
   break;

  VAR_6 = FUNC_0(VAR_9);
  if (VAR_5 || !FUNC_4(VAR_6)) {
   FUNC_1(VAR_6->rmid, VAR_4->rmid_busy_llc);
   if (!--VAR_6->busy) {
    VAR_3--;
    FUNC_3(&VAR_6->list, &VAR_2);
   }
  }
  VAR_8 = VAR_9 + 1;
 }
}
