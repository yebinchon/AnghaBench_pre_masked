
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sdma_txreq {scalar_t__ num_desc; scalar_t__ desc_limit; } ;
struct hfi1_devdata {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_devdata*,int ,struct sdma_txreq*,int ,int ) ;
 int FUNC_1 (struct hfi1_devdata*,struct sdma_txreq*,int ,int *,int *,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(
 struct hfi1_devdata *VAR_1,
 struct sdma_txreq *VAR_2,
 dma_addr_t VAR_3,
 u16 VAR_4)
{
 int VAR_5;

 if ((FUNC_2(VAR_2->num_desc == VAR_2->desc_limit))) {
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_0,
           ((void*)0), ((void*)0), 0, 0);
  if (VAR_5 <= 0)
   return VAR_5;
 }

 return FUNC_0(VAR_1, VAR_0, VAR_2, VAR_3, VAR_4);
}
