
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cc_hash_ctx {int is_hmac; scalar_t__ hw_mode; scalar_t__ hash_mode; int inter_digestsize; } ;
struct ahash_req_ctx {void* digest_buff_dma_addr; void* digest_bytes_len_dma_addr; void* opad_digest_dma_addr; int opad_digest_buff; int digest_bytes_len; int digest_buff; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,int ,int ,void**) ;
 int FUNC_1 (struct device*,char*,int ,int ) ;
 void* FUNC_2 (struct device*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct device*,void*) ;
 int FUNC_4 (struct device*,void*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_5, struct ahash_req_ctx *VAR_6,
        struct cc_hash_ctx *VAR_7)
{
 bool VAR_8 = VAR_7->is_hmac;

 VAR_6->digest_buff_dma_addr =
  FUNC_2(VAR_5, VAR_6->digest_buff,
          VAR_7->inter_digestsize, VAR_0);
 if (FUNC_3(VAR_5, VAR_6->digest_buff_dma_addr)) {
  FUNC_1(VAR_5, "Mapping digest len %d B at va=%pK for DMA failed\n",
   VAR_7->inter_digestsize, VAR_6->digest_buff);
  return -VAR_3;
 }
 FUNC_0(VAR_5, "Mapped digest %d B at va=%pK to dma=%pad\n",
  VAR_7->inter_digestsize, VAR_6->digest_buff,
  &VAR_6->digest_buff_dma_addr);

 if (VAR_7->hw_mode != VAR_1) {
  VAR_6->digest_bytes_len_dma_addr =
   FUNC_2(VAR_5, VAR_6->digest_bytes_len,
           VAR_4, VAR_0);
  if (FUNC_3(VAR_5, VAR_6->digest_bytes_len_dma_addr)) {
   FUNC_1(VAR_5, "Mapping digest len %u B at va=%pK for DMA failed\n",
    VAR_4, VAR_6->digest_bytes_len);
   goto unmap_digest_buf;
  }
  FUNC_0(VAR_5, "Mapped digest len %u B at va=%pK to dma=%pad\n",
   VAR_4, VAR_6->digest_bytes_len,
   &VAR_6->digest_bytes_len_dma_addr);
 }

 if (VAR_8 && VAR_7->hash_mode != VAR_2) {
  VAR_6->opad_digest_dma_addr =
   FUNC_2(VAR_5, VAR_6->opad_digest_buff,
           VAR_7->inter_digestsize,
           VAR_0);
  if (FUNC_3(VAR_5, VAR_6->opad_digest_dma_addr)) {
   FUNC_1(VAR_5, "Mapping opad digest %d B at va=%pK for DMA failed\n",
    VAR_7->inter_digestsize,
    VAR_6->opad_digest_buff);
   goto unmap_digest_len;
  }
  FUNC_0(VAR_5, "Mapped opad digest %d B at va=%pK to dma=%pad\n",
   VAR_7->inter_digestsize, VAR_6->opad_digest_buff,
   &VAR_6->opad_digest_dma_addr);
 }

 return 0;

unmap_digest_len:
 if (VAR_6->digest_bytes_len_dma_addr) {
  FUNC_4(VAR_5, VAR_6->digest_bytes_len_dma_addr,
     VAR_4, VAR_0);
  VAR_6->digest_bytes_len_dma_addr = 0;
 }
unmap_digest_buf:
 if (VAR_6->digest_buff_dma_addr) {
  FUNC_4(VAR_5, VAR_6->digest_buff_dma_addr,
     VAR_7->inter_digestsize, VAR_0);
  VAR_6->digest_buff_dma_addr = 0;
 }

 return -VAR_3;
}
