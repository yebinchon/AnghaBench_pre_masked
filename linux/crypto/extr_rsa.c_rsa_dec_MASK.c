
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsa_mpi_key {int d; int n; } ;
struct crypto_akcipher {int dummy; } ;
struct akcipher_request {int dst_len; int dst; int src_len; int src; } ;
typedef int MPI ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rsa_mpi_key const*,int ,int ) ;
 struct crypto_akcipher* FUNC_1 (struct akcipher_request*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int*) ;
 struct rsa_mpi_key* FUNC_6 (struct crypto_akcipher*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct akcipher_request *VAR_3)
{
 struct crypto_akcipher *VAR_4 = FUNC_1(VAR_3);
 const struct rsa_mpi_key *VAR_5 = FUNC_6(VAR_4);
 MPI VAR_6, VAR_7 = FUNC_2(0);
 int VAR_8 = 0;
 int VAR_9;

 if (!VAR_7)
  return -VAR_2;

 if (FUNC_7(!VAR_5->n || !VAR_5->d)) {
  VAR_8 = -VAR_1;
  goto err_free_m;
 }

 VAR_8 = -VAR_2;
 VAR_6 = FUNC_4(VAR_3->src, VAR_3->src_len);
 if (!VAR_6)
  goto err_free_m;

 VAR_8 = FUNC_0(VAR_5, VAR_7, VAR_6);
 if (VAR_8)
  goto err_free_c;

 VAR_8 = FUNC_5(VAR_7, VAR_3->dst, VAR_3->dst_len, &VAR_9);
 if (VAR_8)
  goto err_free_c;

 if (VAR_9 < 0)
  VAR_8 = -VAR_0;
err_free_c:
 FUNC_3(VAR_6);
err_free_m:
 FUNC_3(VAR_7);
 return VAR_8;
}
