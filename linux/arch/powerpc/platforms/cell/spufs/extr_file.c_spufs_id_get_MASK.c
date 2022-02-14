
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct spu_context {scalar_t__ state; TYPE_1__* spu; } ;
struct TYPE_2__ {unsigned int number; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u64 FUNC_0(struct spu_context *VAR_1)
{
 u64 VAR_2;

 if (VAR_1->state == VAR_0)
  VAR_2 = VAR_1->spu->number;
 else
  VAR_2 = (unsigned int)-1;

 return VAR_2;
}
