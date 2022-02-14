
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * spu_chnldata_RW; } ;
struct spu_context {TYPE_1__ csa; } ;



__attribute__((used)) static u32 FUNC_0(struct spu_context *VAR_0)
{
 return VAR_0->csa.spu_chnldata_RW[4];
}
