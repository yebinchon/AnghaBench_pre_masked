
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcm_area {TYPE_1__* tcm; } ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {scalar_t__ (* free ) (TYPE_1__*,struct tcm_area*) ;} ;


 scalar_t__ FUNC_0 (TYPE_1__*,struct tcm_area*) ;

__attribute__((used)) static inline s32 FUNC_1(struct tcm_area *VAR_0)
{
 s32 VAR_1 = 0;

 if (VAR_0 && VAR_0->tcm) {
  VAR_1 = VAR_0->tcm->free(VAR_0->tcm, VAR_0);
  if (VAR_1 == 0)
   VAR_0->tcm = ((void*)0);
 }

 return VAR_1;
}
