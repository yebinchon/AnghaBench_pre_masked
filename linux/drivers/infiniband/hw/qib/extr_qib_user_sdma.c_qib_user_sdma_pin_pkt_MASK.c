
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qib_user_sdma_queue {int dummy; } ;
struct qib_user_sdma_pkt {unsigned long naddr; TYPE_2__* addr; } ;
struct qib_devdata {TYPE_1__* pcidev; } ;
struct iovec {int iov_len; scalar_t__ iov_base; } ;
struct TYPE_4__ {scalar_t__ dma_mapped; scalar_t__ addr; int dma_length; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int ,int ) ;
 int FUNC_1 (int *,struct qib_user_sdma_queue*,struct qib_user_sdma_pkt*,unsigned long) ;
 int FUNC_2 (struct iovec const*) ;
 int FUNC_3 (struct qib_devdata const*,struct qib_user_sdma_queue*,struct qib_user_sdma_pkt*,unsigned long const,int ,int const) ;

__attribute__((used)) static int FUNC_4(const struct qib_devdata *VAR_1,
     struct qib_user_sdma_queue *VAR_2,
     struct qib_user_sdma_pkt *VAR_3,
     const struct iovec *VAR_4,
     unsigned long VAR_5)
{
 int VAR_6 = 0;
 unsigned long VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  const int VAR_8 = FUNC_2(VAR_4 + VAR_7);
  const unsigned long VAR_9 = (unsigned long) VAR_4[VAR_7].iov_base;

  VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_9,
           VAR_4[VAR_7].iov_len, VAR_8);
  if (VAR_6 < 0)
   goto free_pkt;
 }

 goto done;

free_pkt:

 for (VAR_7 = 1; VAR_7 < VAR_3->naddr; VAR_7++)
  FUNC_1(&VAR_1->pcidev->dev, VAR_2, VAR_3, VAR_7);




 if (VAR_3->addr[0].dma_mapped) {
  FUNC_0(&VAR_1->pcidev->dev,
         VAR_3->addr[0].addr,
         VAR_3->addr[0].dma_length,
         VAR_0);
  VAR_3->addr[0].addr = 0;
  VAR_3->addr[0].dma_mapped = 0;
 }

done:
 return VAR_6;
}
