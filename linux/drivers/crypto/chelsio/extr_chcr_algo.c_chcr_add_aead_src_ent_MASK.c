
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ulptx_walk {int dummy; } ;
struct ulptx_sgl {int dummy; } ;
struct chcr_aead_reqctx {int b0_dma; scalar_t__ b0_len; int scratch_pad; scalar_t__ imm; } ;
struct aead_request {scalar_t__ assoclen; scalar_t__ cryptlen; int src; } ;


 struct chcr_aead_reqctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *,scalar_t__,int ) ;
 int FUNC_4 (struct ulptx_walk*,scalar_t__,int ) ;
 int FUNC_5 (struct ulptx_walk*,int ,scalar_t__,int ) ;
 int FUNC_6 (struct ulptx_walk*) ;
 int FUNC_7 (struct ulptx_walk*,struct ulptx_sgl*) ;

void FUNC_8(struct aead_request *VAR_0,
      struct ulptx_sgl *VAR_1)
{
 struct ulptx_walk VAR_2;
 struct chcr_aead_reqctx *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3->imm) {
  u8 *VAR_4 = (u8 *)VAR_1;

  if (VAR_3->b0_len) {
   FUNC_1(VAR_4, VAR_3->scratch_pad, VAR_3->b0_len);
   VAR_4 += VAR_3->b0_len;
  }
  FUNC_3(VAR_0->src, FUNC_2(VAR_0->src),
       VAR_4, VAR_0->cryptlen + VAR_0->assoclen, 0);
 } else {
  FUNC_7(&VAR_2, VAR_1);
  if (VAR_3->b0_len)
   FUNC_4(&VAR_2, VAR_3->b0_len,
         VAR_3->b0_dma);
  FUNC_5(&VAR_2, VAR_0->src, VAR_0->cryptlen +
      VAR_0->assoclen, 0);
  FUNC_6(&VAR_2);
 }
}
