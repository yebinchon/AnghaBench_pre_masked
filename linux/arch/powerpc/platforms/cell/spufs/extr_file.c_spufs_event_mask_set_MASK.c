
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__* slot; } ;
struct spu_lscsa {TYPE_2__ event_mask; } ;
struct TYPE_3__ {struct spu_lscsa* lscsa; } ;
struct spu_context {TYPE_1__ csa; } ;


 int FUNC_0 (struct spu_context*) ;
 int FUNC_1 (struct spu_context*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, u64 VAR_1)
{
 struct spu_context *VAR_2 = VAR_0;
 struct spu_lscsa *VAR_3 = VAR_2->csa.lscsa;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4)
  return VAR_4;
 VAR_3->event_mask.slot[0] = (u32) VAR_1;
 FUNC_1(VAR_2);

 return 0;
}
