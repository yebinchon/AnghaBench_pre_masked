
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_hash_export_s {int incr_hash; int hash_carry_len; int hash_carry; int is_sw_hmac; int total_sent; int total_todo; } ;
struct iproc_reqctx_s {int incr_hash; int hash_carry_len; int hash_carry; int is_sw_hmac; int total_sent; int total_todo; } ;
struct ahash_request {int dummy; } ;


 struct iproc_reqctx_s* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ahash_request *VAR_0, const void *VAR_1)
{
 struct iproc_reqctx_s *VAR_2 = FUNC_0(VAR_0);
 struct spu_hash_export_s *VAR_3 = (struct spu_hash_export_s *)VAR_1;

 VAR_2->total_todo = VAR_3->total_todo;
 VAR_2->total_sent = VAR_3->total_sent;
 VAR_2->is_sw_hmac = VAR_3->is_sw_hmac;
 FUNC_1(VAR_2->hash_carry, VAR_3->hash_carry, sizeof(VAR_2->hash_carry));
 VAR_2->hash_carry_len = VAR_3->hash_carry_len;
 FUNC_1(VAR_2->incr_hash, VAR_3->incr_hash, sizeof(VAR_2->incr_hash));

 return 0;
}
