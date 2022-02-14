
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int mfc_sr1_RW; } ;
struct spu_state {int register_lock; TYPE_1__ priv1; } ;
struct spu_context {struct spu_state csa; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct spu_context *VAR_1)
{
 struct spu_state *VAR_2 = &VAR_1->csa;
 u64 VAR_3;

 FUNC_0(&VAR_2->register_lock);
 VAR_3 = VAR_2->priv1.mfc_sr1_RW | VAR_0;
 VAR_2->priv1.mfc_sr1_RW = VAR_3;
 FUNC_1(&VAR_2->register_lock);
}
