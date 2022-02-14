
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spu_context {TYPE_1__* ops; } ;
struct TYPE_2__ {size_t (* ibox_read ) (struct spu_context*,int *) ;} ;


 size_t FUNC_0 (struct spu_context*,int *) ;

size_t FUNC_1(struct spu_context *VAR_0, u32 *VAR_1)
{
 return VAR_0->ops->ibox_read(VAR_0, VAR_1);
}
