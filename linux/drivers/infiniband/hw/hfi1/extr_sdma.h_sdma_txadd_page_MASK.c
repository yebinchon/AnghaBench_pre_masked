
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sdma_txreq {scalar_t__ num_desc; scalar_t__ desc_limit; } ;
struct page {int dummy; } ;
struct hfi1_devdata {TYPE_1__* pcidev; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hfi1_devdata*,struct sdma_txreq*) ;
 int FUNC_1 (struct hfi1_devdata*,int ,struct sdma_txreq*,int ,int ) ;
 int FUNC_2 (int *,struct page*,unsigned long,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct hfi1_devdata*,struct sdma_txreq*,int ,int *,struct page*,unsigned long,int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static inline int FUNC_6(
 struct hfi1_devdata *VAR_3,
 struct sdma_txreq *VAR_4,
 struct page *VAR_5,
 unsigned long VAR_6,
 u16 VAR_7)
{
 dma_addr_t VAR_8;
 int VAR_9;

 if ((FUNC_5(VAR_4->num_desc == VAR_4->desc_limit))) {
  VAR_9 = FUNC_4(VAR_3, VAR_4, VAR_2,
           ((void*)0), VAR_5, VAR_6, VAR_7);
  if (VAR_9 <= 0)
   return VAR_9;
 }

 VAR_8 = FUNC_2(
         &VAR_3->pcidev->dev,
         VAR_5,
         VAR_6,
         VAR_7,
         VAR_0);

 if (FUNC_5(FUNC_3(&VAR_3->pcidev->dev, VAR_8))) {
  FUNC_0(VAR_3, VAR_4);
  return -VAR_1;
 }

 return FUNC_1(
   VAR_3, VAR_2, VAR_4, VAR_8, VAR_7);
}
