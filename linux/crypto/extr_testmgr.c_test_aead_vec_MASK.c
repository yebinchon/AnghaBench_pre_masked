
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct testvec_config {int dummy; } ;
struct cipher_test_sglists {int dummy; } ;
struct aead_testvec {scalar_t__ novrfy; } ;
struct aead_request {int dummy; } ;
typedef int cfgname ;


 unsigned int FUNC_0 (struct testvec_config*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 struct testvec_config* VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (struct testvec_config*,char*,int) ;
 int VAR_3 ;
 int FUNC_3 (char*,char*,unsigned int) ;
 int FUNC_4 (char const*,int,struct aead_testvec const*,char*,struct testvec_config*,struct aead_request*,struct cipher_test_sglists*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_4, int VAR_5,
    const struct aead_testvec *VAR_6, unsigned int VAR_7,
    struct aead_request *VAR_8,
    struct cipher_test_sglists *VAR_9)
{
 char VAR_10[16];
 unsigned int VAR_11;
 int VAR_12;

 if (VAR_5 && VAR_6->novrfy)
  return 0;

 FUNC_3(VAR_10, "%u", VAR_7);

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_1); VAR_11++) {
  VAR_12 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_10,
     &VAR_1[VAR_11],
     VAR_8, VAR_9);
  if (VAR_12)
   return VAR_12;
 }
 return 0;
}
