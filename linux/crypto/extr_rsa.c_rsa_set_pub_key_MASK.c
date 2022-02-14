
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsa_mpi_key {void* n; void* e; } ;
struct rsa_key {int n_sz; int n; int e_sz; int e; int member_0; } ;
struct crypto_akcipher {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rsa_mpi_key* FUNC_0 (struct crypto_akcipher*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct rsa_mpi_key*) ;
 int FUNC_5 (struct rsa_key*,void const*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct crypto_akcipher *VAR_2, const void *VAR_3,
      unsigned int VAR_4)
{
 struct rsa_mpi_key *VAR_5 = FUNC_0(VAR_2);
 struct rsa_key VAR_6 = {0};
 int VAR_7;


 FUNC_4(VAR_5);

 VAR_7 = FUNC_5(&VAR_6, VAR_3, VAR_4);
 if (VAR_7)
  return VAR_7;

 VAR_5->e = FUNC_2(VAR_6.e, VAR_6.e_sz);
 if (!VAR_5->e)
  goto err;

 VAR_5->n = FUNC_2(VAR_6.n, VAR_6.n_sz);
 if (!VAR_5->n)
  goto err;

 if (FUNC_3(FUNC_1(VAR_5->n) << 3)) {
  FUNC_4(VAR_5);
  return -VAR_0;
 }

 return 0;

err:
 FUNC_4(VAR_5);
 return -VAR_1;
}
