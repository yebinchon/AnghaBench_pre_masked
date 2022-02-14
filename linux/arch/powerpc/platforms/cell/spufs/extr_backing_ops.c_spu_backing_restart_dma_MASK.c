
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mfc_control_RW; } ;
struct TYPE_4__ {TYPE_1__ priv2; } ;
struct spu_context {TYPE_2__ csa; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct spu_context *VAR_1)
{
 VAR_1->csa.priv2.mfc_control_RW |= VAR_0;
}
