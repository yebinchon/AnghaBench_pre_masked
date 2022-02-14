
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int mfc_control_RW; } ;
struct TYPE_4__ {TYPE_1__ priv2; } ;
struct spu_context {TYPE_2__ csa; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u64 FUNC_0(struct spu_context *VAR_2)
{
 if (VAR_2->csa.priv2.mfc_control_RW & VAR_0)
  return VAR_1;
 else
  return 0;
}
