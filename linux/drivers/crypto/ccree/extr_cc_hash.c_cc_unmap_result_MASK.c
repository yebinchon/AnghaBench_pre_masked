
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;
struct ahash_req_ctx {scalar_t__ digest_result_dma_addr; int digest_result_buff; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,scalar_t__*,unsigned int) ;
 int FUNC_1 (struct device*,scalar_t__,unsigned int,int ) ;
 int FUNC_2 (int *,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_1, struct ahash_req_ctx *VAR_2,
       unsigned int VAR_3, u8 *VAR_4)
{
 if (VAR_2->digest_result_dma_addr) {
  FUNC_1(VAR_1, VAR_2->digest_result_dma_addr, VAR_3,
     VAR_0);
  FUNC_0(VAR_1, "unmpa digest result buffer va (%pK) pa (%pad) len %u\n",
   VAR_2->digest_result_buff,
   &VAR_2->digest_result_dma_addr, VAR_3);
  FUNC_2(VAR_4, VAR_2->digest_result_buff, VAR_3);
 }
 VAR_2->digest_result_dma_addr = 0;
}
