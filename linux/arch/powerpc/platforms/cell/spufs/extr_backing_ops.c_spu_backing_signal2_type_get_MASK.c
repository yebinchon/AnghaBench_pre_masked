
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int spu_cfg_RW; } ;
struct TYPE_4__ {TYPE_1__ priv2; } ;
struct spu_context {TYPE_2__ csa; } ;



__attribute__((used)) static u64 FUNC_0(struct spu_context *VAR_0)
{
 return ((VAR_0->csa.priv2.spu_cfg_RW & 2) != 0);
}
