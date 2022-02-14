
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct testvec_config {int dummy; } ;
struct skcipher_request {int dummy; } ;
struct cipher_testvec {scalar_t__ fips_skip; } ;
struct cipher_test_sglists {int dummy; } ;
typedef int cfgname ;


 unsigned int FUNC_0 (struct testvec_config*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 struct testvec_config* VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (struct testvec_config*,char*,int) ;
 int VAR_4 ;
 int FUNC_3 (char*,char*,unsigned int) ;
 int FUNC_4 (char const*,int,struct cipher_testvec const*,char*,struct testvec_config*,struct skcipher_request*,struct cipher_test_sglists*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_5, int VAR_6,
        const struct cipher_testvec *VAR_7,
        unsigned int VAR_8,
        struct skcipher_request *VAR_9,
        struct cipher_test_sglists *VAR_10)
{
 char VAR_11[16];
 unsigned int VAR_12;
 int VAR_13;

 if (VAR_2 && VAR_7->fips_skip)
  return 0;

 FUNC_3(VAR_11, "%u", VAR_8);

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_1); VAR_12++) {
  VAR_13 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_11,
         &VAR_1[VAR_12],
         VAR_9, VAR_10);
  if (VAR_13)
   return VAR_13;
 }
 return 0;
}
