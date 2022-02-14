
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct sdma_txreq {scalar_t__ tlen; int packet_len; int num_desc; } ;
struct hfi1_devdata {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct hfi1_devdata*,struct sdma_txreq*) ;
 int FUNC_2 (struct hfi1_devdata*,struct sdma_txreq*) ;
 int FUNC_3 (struct sdma_txreq*,int,int ,scalar_t__) ;

__attribute__((used)) static inline int FUNC_4(
 struct hfi1_devdata *VAR_0,
 int VAR_1,
 struct sdma_txreq *VAR_2,
 dma_addr_t VAR_3,
 u16 VAR_4)
{
 int VAR_5 = 0;

 FUNC_3(
  VAR_2,
  VAR_1,
  VAR_3, VAR_4);
 FUNC_0(VAR_4 > VAR_2->tlen);
 VAR_2->tlen -= VAR_4;

 if (!VAR_2->tlen) {
  if (VAR_2->packet_len & (sizeof(u32) - 1)) {
   VAR_5 = FUNC_1(VAR_0, VAR_2);
   if (VAR_5)
    return VAR_5;
  } else {
   FUNC_2(VAR_0, VAR_2);
  }
 }
 VAR_2->num_desc++;
 return VAR_5;
}
