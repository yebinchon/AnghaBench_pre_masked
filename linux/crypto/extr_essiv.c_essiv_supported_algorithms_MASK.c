
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shash_alg {scalar_t__ digestsize; } ;
struct TYPE_2__ {scalar_t__ cia_min_keysize; scalar_t__ cia_max_keysize; } ;
struct crypto_alg {int cra_blocksize; TYPE_1__ cra_cipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_alg*) ;
 struct crypto_alg* FUNC_1 (char const*,int ,int ) ;
 int FUNC_2 (struct crypto_alg*) ;
 scalar_t__ FUNC_3 (struct shash_alg*) ;

__attribute__((used)) static bool FUNC_4(const char *VAR_2,
           struct shash_alg *VAR_3,
           int VAR_4)
{
 struct crypto_alg *VAR_5;
 bool VAR_6 = 0;

 VAR_5 = FUNC_1(VAR_2,
        VAR_0,
        VAR_1);
 if (FUNC_0(VAR_5))
  return 0;

 if (VAR_3->digestsize < VAR_5->cra_cipher.cia_min_keysize ||
     VAR_3->digestsize > VAR_5->cra_cipher.cia_max_keysize)
  goto out;

 if (VAR_4 != VAR_5->cra_blocksize)
  goto out;

 if (FUNC_3(VAR_3))
  goto out;

 VAR_6 = 1;

out:
 FUNC_2(VAR_5);
 return VAR_6;
}
