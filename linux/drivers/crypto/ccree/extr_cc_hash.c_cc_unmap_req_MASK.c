
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cc_hash_ctx {int inter_digestsize; } ;
struct ahash_req_ctx {scalar_t__ opad_digest_dma_addr; scalar_t__ digest_bytes_len_dma_addr; scalar_t__ digest_buff_dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,scalar_t__*) ;
 int FUNC_1 (struct device*,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_2, struct ahash_req_ctx *VAR_3,
    struct cc_hash_ctx *VAR_4)
{
 if (VAR_3->digest_buff_dma_addr) {
  FUNC_1(VAR_2, VAR_3->digest_buff_dma_addr,
     VAR_4->inter_digestsize, VAR_0);
  FUNC_0(VAR_2, "Unmapped digest-buffer: digest_buff_dma_addr=%pad\n",
   &VAR_3->digest_buff_dma_addr);
  VAR_3->digest_buff_dma_addr = 0;
 }
 if (VAR_3->digest_bytes_len_dma_addr) {
  FUNC_1(VAR_2, VAR_3->digest_bytes_len_dma_addr,
     VAR_1, VAR_0);
  FUNC_0(VAR_2, "Unmapped digest-bytes-len buffer: digest_bytes_len_dma_addr=%pad\n",
   &VAR_3->digest_bytes_len_dma_addr);
  VAR_3->digest_bytes_len_dma_addr = 0;
 }
 if (VAR_3->opad_digest_dma_addr) {
  FUNC_1(VAR_2, VAR_3->opad_digest_dma_addr,
     VAR_4->inter_digestsize, VAR_0);
  FUNC_0(VAR_2, "Unmapped opad-digest: opad_digest_dma_addr=%pad\n",
   &VAR_3->opad_digest_dma_addr);
  VAR_3->opad_digest_dma_addr = 0;
 }
}
