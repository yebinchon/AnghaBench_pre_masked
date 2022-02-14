
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pti_device {scalar_t__ base; } ;
struct intel_th_device {int dev; } ;


 scalar_t__ VAR_0 ;
 struct pti_device* FUNC_0 (int *) ;
 int FUNC_1 (struct intel_th_device*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct intel_th_device *VAR_1)
{
 struct pti_device *VAR_2 = FUNC_0(&VAR_1->dev);

 FUNC_1(VAR_1);

 FUNC_2(0, VAR_2->base + VAR_0);
}
