
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp_kms_funcs {int base; } ;
struct mdp_kms {int base; int irq_list; struct mdp_kms_funcs const* funcs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static inline void FUNC_2(struct mdp_kms *VAR_0,
  const struct mdp_kms_funcs *VAR_1)
{
 VAR_0->funcs = VAR_1;
 FUNC_0(&VAR_0->irq_list);
 FUNC_1(&VAR_0->base, &VAR_1->base);
}
