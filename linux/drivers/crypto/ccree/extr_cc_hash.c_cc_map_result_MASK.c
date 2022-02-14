
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ahash_req_ctx {int digest_result_dma_addr; int digest_result_buff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,unsigned int,int ,int *) ;
 int FUNC_1 (struct device*,char*,unsigned int) ;
 int FUNC_2 (struct device*,int ,unsigned int,int ) ;
 scalar_t__ FUNC_3 (struct device*,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, struct ahash_req_ctx *VAR_3,
    unsigned int VAR_4)
{
 VAR_3->digest_result_dma_addr =
  FUNC_2(VAR_2, VAR_3->digest_result_buff,
          VAR_4, VAR_0);
 if (FUNC_3(VAR_2, VAR_3->digest_result_dma_addr)) {
  FUNC_1(VAR_2, "Mapping digest result buffer %u B for DMA failed\n",
   VAR_4);
  return -VAR_1;
 }
 FUNC_0(VAR_2, "Mapped digest result buffer %u B at va=%pK to dma=%pad\n",
  VAR_4, VAR_3->digest_result_buff,
  &VAR_3->digest_result_dma_addr);

 return 0;
}
