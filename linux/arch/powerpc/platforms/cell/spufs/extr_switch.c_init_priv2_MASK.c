
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mfc_control_RW; int spu_lslr_RW; } ;
struct spu_state {TYPE_1__ priv2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct spu_state *VAR_4)
{
 VAR_4->priv2.spu_lslr_RW = VAR_0;
 VAR_4->priv2.mfc_control_RW = VAR_3 |
     VAR_2 |
     VAR_1;
}
