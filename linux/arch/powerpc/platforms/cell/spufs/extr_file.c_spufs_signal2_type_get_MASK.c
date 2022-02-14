
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct spu_context {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* signal2_type_get ) (struct spu_context*) ;} ;


 int FUNC_0 (struct spu_context*) ;

__attribute__((used)) static u64 FUNC_1(struct spu_context *VAR_0)
{
 return VAR_0->ops->signal2_type_get(VAR_0);
}
