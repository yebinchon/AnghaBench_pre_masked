
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsa_mpi_key {int n; } ;
struct crypto_akcipher {int dummy; } ;


 struct rsa_mpi_key* FUNC_0 (struct crypto_akcipher*) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct crypto_akcipher *VAR_0)
{
 struct rsa_mpi_key *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1->n);
}
