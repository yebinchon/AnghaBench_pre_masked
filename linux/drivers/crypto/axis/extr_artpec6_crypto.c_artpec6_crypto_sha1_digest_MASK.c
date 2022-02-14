
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct artpec6_hash_request_context {int hash_flags; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct artpec6_hash_request_context* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*,int ,int ) ;
 int FUNC_2 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_3)
{
 struct artpec6_hash_request_context *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_3, VAR_0, 0);

 VAR_4->hash_flags |= VAR_2 | VAR_1;

 return FUNC_2(VAR_3);
}
