
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uv_hub_nmi_s {int nmi_lock; scalar_t__ hub_present; int in_nmi; int cpu_owner; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 struct uv_hub_nmi_s* VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static inline void FUNC_5(int VAR_1)
{
 struct uv_hub_nmi_s *VAR_2 = VAR_0;

 if (VAR_1 == FUNC_0(&VAR_2->cpu_owner)) {
  FUNC_1(&VAR_2->cpu_owner, -1);
  FUNC_1(&VAR_2->in_nmi, 0);
  if (VAR_2->hub_present)
   FUNC_3();
  else
   FUNC_4();
  FUNC_2(&VAR_2->nmi_lock);
 }
}
