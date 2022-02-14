
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_hash_request_ctx {int digsize; int digest; } ;
struct ahash_request {int result; } ;


 int VAR_0 ;
 struct img_hash_request_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ahash_request *VAR_1)
{
 struct img_hash_request_ctx *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_1->result)
  return -VAR_0;

 FUNC_1(VAR_1->result, VAR_2->digest, VAR_2->digsize);

 return 0;
}
