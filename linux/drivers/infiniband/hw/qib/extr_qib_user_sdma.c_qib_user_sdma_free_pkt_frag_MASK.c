
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_user_sdma_queue {int header_cache; } ;
struct qib_user_sdma_pkt {TYPE_1__* addr; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ kvaddr; scalar_t__ addr; int dma_length; scalar_t__ dma_mapped; scalar_t__ page; scalar_t__ put_page; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct device*,scalar_t__,int ,int ) ;
 int FUNC_3 (struct device*,scalar_t__,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_1,
     struct qib_user_sdma_queue *VAR_2,
     struct qib_user_sdma_pkt *VAR_3,
     int VAR_4)
{
 const int VAR_5 = VAR_4;

 if (VAR_3->addr[VAR_5].page) {

  if (VAR_3->addr[VAR_5].dma_mapped)
   FUNC_2(VAR_1,
           VAR_3->addr[VAR_5].addr,
           VAR_3->addr[VAR_5].dma_length,
           VAR_0);

  if (VAR_3->addr[VAR_5].kvaddr)
   FUNC_5(VAR_3->addr[VAR_5].page);

  if (VAR_3->addr[VAR_5].put_page)
   FUNC_6(VAR_3->addr[VAR_5].page);
  else
   FUNC_0(VAR_3->addr[VAR_5].page);
 } else if (VAR_3->addr[VAR_5].kvaddr) {

  if (VAR_3->addr[VAR_5].dma_mapped) {

   FUNC_3(VAR_1,
           VAR_3->addr[VAR_5].addr,
           VAR_3->addr[VAR_5].dma_length,
           VAR_0);
   FUNC_4(VAR_3->addr[VAR_5].kvaddr);
  } else if (VAR_3->addr[VAR_5].addr) {

   FUNC_1(VAR_2->header_cache,
         VAR_3->addr[VAR_5].kvaddr, VAR_3->addr[VAR_5].addr);
  } else {

   FUNC_4(VAR_3->addr[VAR_5].kvaddr);
  }
 }
}
