
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
typedef int cfgname ;


 unsigned int FUNC_0 (struct testvec_config*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 struct testvec_config* VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (struct testvec_config*,char*,int) ;
 int VAR_3 ;
 int FUNC_3 (char*,char*,unsigned int) ;
 int FUNC_4 (char const*,struct hash_testvec const*,char*,struct testvec_config*,struct ahash_request*,struct shash_desc*,struct test_sglist*,int *) ;

__attribute__((used)) static int FUNC_5(const char *VAR_4, const struct hash_testvec *VAR_5,
    unsigned int VAR_6, struct ahash_request *VAR_7,
    struct shash_desc *VAR_8, struct test_sglist *VAR_9,
    u8 *VAR_10)
{
 char VAR_11[16];
 unsigned int VAR_12;
 int VAR_13;

 FUNC_3(VAR_11, "%u", VAR_6);

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_1); VAR_12++) {
  VAR_13 = FUNC_4(VAR_4, VAR_5, VAR_11,
     &VAR_1[VAR_12],
     VAR_7, VAR_8, VAR_9, VAR_10);
  if (VAR_13)
   return VAR_13;
 }
 return 0;
}
