
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cc_hw_desc {int dummy; } ;
struct cc_hash_ctx {int hash_len; int hash_mode; int hw_mode; int inter_digestsize; } ;
struct ahash_req_ctx {int digest_bytes_len_dma_addr; int digest_buff_dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ahash_req_ctx*,struct cc_hash_ctx*,int ,struct cc_hw_desc*,int,unsigned int*) ;
 int FUNC_1 (struct cc_hw_desc*) ;
 int FUNC_2 (struct cc_hw_desc*,int ) ;
 int FUNC_3 (struct cc_hw_desc*,int ,int ,int ,int ) ;
 int FUNC_4 (struct cc_hw_desc*,int ) ;
 int FUNC_5 (struct cc_hw_desc*,int ,int ) ;
 int FUNC_6 (struct cc_hw_desc*,int ) ;

__attribute__((used)) static int FUNC_7(struct cc_hw_desc *VAR_7, struct cc_hash_ctx *VAR_8,
      struct ahash_req_ctx *VAR_9, unsigned int VAR_10)
{

 FUNC_1(&VAR_7[VAR_10]);
 FUNC_5(&VAR_7[VAR_10], VAR_8->hw_mode, VAR_8->hash_mode);
 FUNC_3(&VAR_7[VAR_10], VAR_1, VAR_9->digest_buff_dma_addr,
       VAR_8->inter_digestsize, VAR_3);
 FUNC_4(&VAR_7[VAR_10], VAR_6);
 FUNC_6(&VAR_7[VAR_10], VAR_5);
 VAR_10++;


 FUNC_1(&VAR_7[VAR_10]);
 FUNC_5(&VAR_7[VAR_10], VAR_8->hw_mode, VAR_8->hash_mode);
 FUNC_2(&VAR_7[VAR_10], VAR_2);
 FUNC_3(&VAR_7[VAR_10], VAR_1, VAR_9->digest_bytes_len_dma_addr,
       VAR_8->hash_len, VAR_3);
 FUNC_4(&VAR_7[VAR_10], VAR_6);
 FUNC_6(&VAR_7[VAR_10], VAR_4);
 VAR_10++;

 FUNC_0(VAR_9, VAR_8, VAR_0, VAR_7, 0, &VAR_10);

 return VAR_10;
}
