
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_alg {int cra_blocksize; int cra_flags; int * cra_type; } ;
struct skcipher_alg {int ivsize; int chunksize; int walksize; struct crypto_alg base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct skcipher_alg *VAR_5)
{
 struct crypto_alg *VAR_6 = &VAR_5->base;

 if (VAR_5->ivsize > VAR_3 / 8 || VAR_5->chunksize > VAR_3 / 8 ||
     VAR_5->walksize > VAR_3 / 8)
  return -VAR_2;

 if (!VAR_5->chunksize)
  VAR_5->chunksize = VAR_6->cra_blocksize;
 if (!VAR_5->walksize)
  VAR_5->walksize = VAR_5->chunksize;

 VAR_6->cra_type = &VAR_4;
 VAR_6->cra_flags &= ~VAR_0;
 VAR_6->cra_flags |= VAR_1;

 return 0;
}
