
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct artpec6_hash_request_context {int digeststate; int partial_buffer; int hash_md; int hash_flags; int partial_bytes; int digcnt; } ;
struct artpec6_hash_export_state {int digeststate; int partial_buffer; void* oper; int hash_flags; int partial_bytes; int digcnt; } ;
struct artpec6_crypto {int variant; } ;
struct ahash_request {int dummy; } ;
typedef enum artpec6_crypto_variant { ____Placeholder_artpec6_crypto_variant } artpec6_crypto_variant ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ,int ) ;
 struct artpec6_hash_request_context* FUNC_2 (struct ahash_request*) ;
 int VAR_3 ;
 struct artpec6_crypto* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ahash_request *VAR_4, void *VAR_5)
{
 const struct artpec6_hash_request_context *VAR_6 = FUNC_2(VAR_4);
 struct artpec6_hash_export_state *VAR_7 = VAR_5;
 struct artpec6_crypto *VAR_8 = FUNC_3(VAR_3);
 enum artpec6_crypto_variant VAR_9 = VAR_8->variant;

 FUNC_0(sizeof(VAR_7->partial_buffer) !=
       sizeof(VAR_6->partial_buffer));
 FUNC_0(sizeof(VAR_7->digeststate) != sizeof(VAR_6->digeststate));

 VAR_7->digcnt = VAR_6->digcnt;
 VAR_7->partial_bytes = VAR_6->partial_bytes;
 VAR_7->hash_flags = VAR_6->hash_flags;

 if (VAR_9 == VAR_2)
  VAR_7->oper = FUNC_1(VAR_0, VAR_6->hash_md);
 else
  VAR_7->oper = FUNC_1(VAR_1, VAR_6->hash_md);

 FUNC_4(VAR_7->partial_buffer, VAR_6->partial_buffer,
        sizeof(VAR_7->partial_buffer));
 FUNC_4(VAR_7->digeststate, VAR_6->digeststate,
        sizeof(VAR_7->digeststate));

 return 0;
}
