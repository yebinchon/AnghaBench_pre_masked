
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ulptx_walk {int last_sg_len; int last_sg; } ;
struct ulptx_sgl {int dummy; } ;
struct cipher_wr_param {int bytes; } ;
struct chcr_blkcipher_req_ctx {int src_ofst; int srcsg; int processed; scalar_t__ imm; int iv; } ;
struct ablkcipher_request {int src; } ;


 int VAR_0 ;
 struct chcr_blkcipher_req_ctx* FUNC_0 (struct ablkcipher_request*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *,int ,int ) ;
 int FUNC_4 (struct ulptx_walk*,int ,int ,int ) ;
 int FUNC_5 (struct ulptx_walk*) ;
 int FUNC_6 (struct ulptx_walk*,struct ulptx_sgl*) ;

void FUNC_7(struct ablkcipher_request *VAR_1,
        void *VAR_2,
        struct cipher_wr_param *VAR_3)
{
 struct ulptx_walk VAR_4;
 struct chcr_blkcipher_req_ctx *VAR_5 = FUNC_0(VAR_1);
 u8 *VAR_6 = VAR_2;

 FUNC_1(VAR_6, VAR_5->iv, VAR_0);
 VAR_6 += VAR_0;
 if (VAR_5->imm) {
  FUNC_3(VAR_1->src, FUNC_2(VAR_1->src),
       VAR_6, VAR_3->bytes, VAR_5->processed);
 } else {
  FUNC_6(&VAR_4, (struct ulptx_sgl *)VAR_6);
  FUNC_4(&VAR_4, VAR_5->srcsg, VAR_3->bytes,
      VAR_5->src_ofst);
  VAR_5->srcsg = VAR_4.last_sg;
  VAR_5->src_ofst = VAR_4.last_sg_len;
  FUNC_5(&VAR_4);
 }
}
