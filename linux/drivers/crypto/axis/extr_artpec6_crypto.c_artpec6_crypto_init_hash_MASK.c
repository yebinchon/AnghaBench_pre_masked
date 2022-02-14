
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct artpec6_hash_request_context {int hash_flags; void* hash_md; } ;
struct artpec6_crypto {int variant; } ;
struct ahash_request {int dummy; } ;
typedef enum artpec6_crypto_variant { ____Placeholder_artpec6_crypto_variant } artpec6_crypto_variant ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 void* FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct artpec6_hash_request_context* FUNC_1 (struct ahash_request*) ;
 int VAR_8 ;
 struct artpec6_crypto* FUNC_2 (int ) ;
 int FUNC_3 (struct artpec6_hash_request_context*,int ,int) ;
 int FUNC_4 (char*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int
FUNC_5(struct ahash_request *VAR_13, u8 VAR_14, int VAR_15)
{
 struct artpec6_crypto *VAR_16 = FUNC_2(VAR_8);
 enum artpec6_crypto_variant VAR_17 = VAR_16->variant;
 struct artpec6_hash_request_context *VAR_18 = FUNC_1(VAR_13);
 u32 VAR_19;

 FUNC_3(VAR_18, 0, sizeof(*VAR_18));

 VAR_18->hash_flags = VAR_5;
 if (VAR_15)
  VAR_18->hash_flags |= (VAR_4 | VAR_6);

 switch (VAR_14) {
 case 129:
  VAR_19 = VAR_15 ? VAR_9 : VAR_11;
  break;
 case 128:
  VAR_19 = VAR_15 ? VAR_10 : VAR_12;
  break;
 default:
  FUNC_4("%s: Unsupported hash type 0x%x\n", VAR_7, VAR_14);
  return -VAR_3;
 }

 if (VAR_17 == VAR_2)
  VAR_18->hash_md = FUNC_0(VAR_0, VAR_19);
 else
  VAR_18->hash_md = FUNC_0(VAR_1, VAR_19);

 return 0;
}
