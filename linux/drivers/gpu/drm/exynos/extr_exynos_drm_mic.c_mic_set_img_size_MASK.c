
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct videomode {int vactive; int hactive; } ;
struct exynos_mic {scalar_t__ reg; struct videomode vm; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct exynos_mic *VAR_1)
{
 struct videomode *VAR_2 = &VAR_1->vm;
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2->hactive) +
  FUNC_1(VAR_2->vactive);

 FUNC_2(VAR_3, VAR_1->reg + VAR_0);
}
