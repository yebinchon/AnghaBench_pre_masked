
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdma_desc {int dummy; } ;
struct hfi1_devdata {TYPE_1__* pcidev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;


 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct sdma_desc*) ;
 int FUNC_3 (struct sdma_desc*) ;
 int FUNC_4 (struct sdma_desc*) ;

__attribute__((used)) static inline void FUNC_5(
 struct hfi1_devdata *VAR_1,
 struct sdma_desc *VAR_2)
{
 switch (FUNC_4(VAR_2)) {
 case 128:
  FUNC_1(
   &VAR_1->pcidev->dev,
   FUNC_2(VAR_2),
   FUNC_3(VAR_2),
   VAR_0);
  break;
 case 129:
  FUNC_0(
   &VAR_1->pcidev->dev,
   FUNC_2(VAR_2),
   FUNC_3(VAR_2),
   VAR_0);
  break;
 }
}
