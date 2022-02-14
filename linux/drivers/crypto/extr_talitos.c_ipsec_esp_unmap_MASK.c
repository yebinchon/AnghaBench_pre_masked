
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct talitos_ptr {int dummy; } ;
struct TYPE_2__ {int hdr; struct talitos_ptr* ptr; } ;
struct talitos_edesc {int dst_nents; scalar_t__ dma_len; int dma_link_tbl; TYPE_1__ desc; } ;
struct talitos_ctx {int iv; } ;
struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {unsigned int cryptlen; scalar_t__ assoclen; int dst; int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct crypto_aead*) ;
 struct talitos_ctx* FUNC_1 (struct crypto_aead*) ;
 unsigned int FUNC_2 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (struct device*,int ,scalar_t__,int ) ;
 int FUNC_5 (int ,unsigned int,int ,unsigned int,scalar_t__) ;
 int FUNC_6 (struct device*,struct talitos_edesc*,int ,int ,unsigned int,scalar_t__) ;
 int FUNC_7 (struct device*,struct talitos_ptr*,int ) ;

__attribute__((used)) static void FUNC_8(struct device *VAR_4,
       struct talitos_edesc *VAR_5,
       struct aead_request *VAR_6, bool VAR_7)
{
 struct crypto_aead *VAR_8 = FUNC_3(VAR_6);
 struct talitos_ctx *VAR_9 = FUNC_1(VAR_8);
 unsigned int VAR_10 = FUNC_2(VAR_8);
 unsigned int VAR_11 = FUNC_0(VAR_8);
 unsigned int VAR_12 = VAR_6->cryptlen - (VAR_7 ? 0 : VAR_11);
 bool VAR_13 = VAR_5->desc.hdr & VAR_0;
 struct talitos_ptr *VAR_14 = &VAR_5->desc.ptr[VAR_13 ? 2 : 3];

 if (VAR_13)
  FUNC_7(VAR_4, &VAR_5->desc.ptr[6],
      VAR_2);
 FUNC_7(VAR_4, VAR_14, VAR_3);

 FUNC_6(VAR_4, VAR_5, VAR_6->src, VAR_6->dst,
    VAR_12 + VAR_11, VAR_6->assoclen);

 if (VAR_5->dma_len)
  FUNC_4(VAR_4, VAR_5->dma_link_tbl, VAR_5->dma_len,
     VAR_1);

 if (!VAR_13) {
  unsigned int VAR_15 = VAR_5->dst_nents ? : 1;

  FUNC_5(VAR_6->dst, VAR_15, VAR_9->iv, VAR_10,
       VAR_6->assoclen + VAR_12 - VAR_10);
 }
}
