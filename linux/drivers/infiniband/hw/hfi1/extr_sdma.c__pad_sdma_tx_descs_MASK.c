
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdma_txreq {scalar_t__ num_desc; scalar_t__ desc_limit; int packet_len; } ;
struct hfi1_devdata {int sdma_pad_phys; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_devdata*,struct sdma_txreq*) ;
 int FUNC_1 (struct hfi1_devdata*,struct sdma_txreq*) ;
 int FUNC_2 (struct hfi1_devdata*,struct sdma_txreq*) ;
 int FUNC_3 (struct sdma_txreq*,int ,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct hfi1_devdata *VAR_1, struct sdma_txreq *VAR_2)
{
 int VAR_3 = 0;

 VAR_2->num_desc++;
 if ((FUNC_4(VAR_2->num_desc == VAR_2->desc_limit))) {
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  if (VAR_3) {
   FUNC_0(VAR_1, VAR_2);
   return VAR_3;
  }
 }

 FUNC_3(
  VAR_2,
  VAR_0,
  VAR_1->sdma_pad_phys,
  sizeof(u32) - (VAR_2->packet_len & (sizeof(u32) - 1)));
 FUNC_2(VAR_1, VAR_2);
 return VAR_3;
}
