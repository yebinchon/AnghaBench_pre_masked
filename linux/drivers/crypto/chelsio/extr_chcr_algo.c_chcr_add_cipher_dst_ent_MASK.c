
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsgl_walk {int last_sg_len; int last_sg; } ;
struct crypto_ablkcipher {int dummy; } ;
struct cpl_rx_phys_dsgl {int dummy; } ;
struct cipher_wr_param {int bytes; int req; } ;
struct chcr_context {int pci_chan_id; } ;
struct chcr_blkcipher_req_ctx {int dst_ofst; int dstsg; } ;
struct ablkcipher_request {int dummy; } ;


 struct chcr_blkcipher_req_ctx* FUNC_0 (struct ablkcipher_request*) ;
 struct chcr_context* FUNC_1 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_2 (int ) ;
 int FUNC_3 (struct dsgl_walk*,int ,int ,int ) ;
 int FUNC_4 (struct dsgl_walk*,unsigned short,int ) ;
 int FUNC_5 (struct dsgl_walk*,struct cpl_rx_phys_dsgl*) ;

void FUNC_6(struct ablkcipher_request *VAR_0,
        struct cpl_rx_phys_dsgl *VAR_1,
        struct cipher_wr_param *VAR_2,
        unsigned short VAR_3)
{
 struct chcr_blkcipher_req_ctx *VAR_4 = FUNC_0(VAR_0);
 struct crypto_ablkcipher *VAR_5 = FUNC_2(VAR_2->req);
 struct chcr_context *VAR_6 = FUNC_1(VAR_5);
 struct dsgl_walk VAR_7;

 FUNC_5(&VAR_7, VAR_1);
 FUNC_3(&VAR_7, VAR_4->dstsg, VAR_2->bytes,
    VAR_4->dst_ofst);
 VAR_4->dstsg = VAR_7.last_sg;
 VAR_4->dst_ofst = VAR_7.last_sg_len;

 FUNC_4(&VAR_7, VAR_3, VAR_6->pci_chan_id);
}
