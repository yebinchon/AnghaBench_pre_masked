
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahash_request {int dummy; } ;
typedef struct ahash_request u8 ;
struct dm_verity {int data_dev_block_bits; void* zero_digest; int ahash_reqsize; int digest_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahash_request*) ;
 void* FUNC_1 (int ,int ) ;
 struct ahash_request* FUNC_2 (int,int ) ;
 int FUNC_3 (struct dm_verity*,struct ahash_request*,struct ahash_request*,int,void*) ;

__attribute__((used)) static int FUNC_4(struct dm_verity *VAR_2)
{
 int VAR_3 = -VAR_0;
 struct ahash_request *VAR_4;
 u8 *VAR_5;

 VAR_2->zero_digest = FUNC_1(VAR_2->digest_size, VAR_1);

 if (!VAR_2->zero_digest)
  return VAR_3;

 VAR_4 = FUNC_1(VAR_2->ahash_reqsize, VAR_1);

 if (!VAR_4)
  return VAR_3;

 VAR_5 = FUNC_2(1 << VAR_2->data_dev_block_bits, VAR_1);

 if (!VAR_5)
  goto out;

 VAR_3 = FUNC_3(VAR_2, VAR_4, VAR_5, 1 << VAR_2->data_dev_block_bits,
   VAR_2->zero_digest);

out:
 FUNC_0(VAR_4);
 FUNC_0(VAR_5);

 return VAR_3;
}
