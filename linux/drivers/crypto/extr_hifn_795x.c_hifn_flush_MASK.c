
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hifn_dma {struct hifn_desc* resr; } ;
struct hifn_device {int lock; int queue; struct ablkcipher_request** sa; scalar_t__ desc_virt; } ;
struct hifn_desc {int l; } ;
struct crypto_async_request {int dummy; } ;
struct ablkcipher_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct ablkcipher_request* FUNC_1 (struct crypto_async_request*) ;
 struct crypto_async_request* FUNC_2 (int *) ;
 int FUNC_3 (struct hifn_device*,int) ;
 int FUNC_4 (struct ablkcipher_request*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct hifn_device *VAR_3)
{
 unsigned long VAR_4;
 struct crypto_async_request *VAR_5;
 struct ablkcipher_request *VAR_6;
 struct hifn_dma *VAR_7 = (struct hifn_dma *)VAR_3->desc_virt;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8) {
  struct hifn_desc *VAR_9 = &VAR_7->resr[VAR_8];

  if (VAR_3->sa[VAR_8]) {
   FUNC_4(VAR_3->sa[VAR_8],
    (VAR_9->l & FUNC_0(VAR_2)) ? -VAR_0 : 0);
   FUNC_3(VAR_3, VAR_8);
  }
 }

 FUNC_5(&VAR_3->lock, VAR_4);
 while ((VAR_5 = FUNC_2(&VAR_3->queue))) {
  VAR_6 = FUNC_1(VAR_5);
  FUNC_6(&VAR_3->lock, VAR_4);

  FUNC_4(VAR_6, -VAR_0);

  FUNC_5(&VAR_3->lock, VAR_4);
 }
 FUNC_6(&VAR_3->lock, VAR_4);
}
