
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct testvec_config {int dummy; } ;
struct test_sglist {int dummy; } ;
struct shash_desc {int dummy; } ;
struct hash_testvec {int dummy; } ;
struct ahash_request {int dummy; } ;


 int FUNC_0 (char const*,struct hash_testvec const*,char const*,struct testvec_config const*,struct ahash_request*,struct test_sglist*,int *) ;
 int FUNC_1 (char const*,struct hash_testvec const*,char const*,struct testvec_config const*,struct shash_desc*,struct test_sglist*,int *) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0,
        const struct hash_testvec *VAR_1,
        const char *VAR_2,
        const struct testvec_config *VAR_3,
        struct ahash_request *VAR_4,
        struct shash_desc *VAR_5,
        struct test_sglist *VAR_6,
        u8 *VAR_7)
{
 int VAR_8;







 if (VAR_5) {
  VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5, VAR_6,
      VAR_7);
  if (VAR_8)
   return VAR_8;
 }

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_6,
      VAR_7);
}
