
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_gt {TYPE_1__* ggtt; } ;
struct TYPE_2__ {int vm; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_gt*,int *,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(void *VAR_2)
{
 struct intel_gt *VAR_3 = VAR_2;

 return FUNC_0(VAR_3, &VAR_3->ggtt->vm,
         VAR_1, VAR_0);
}
