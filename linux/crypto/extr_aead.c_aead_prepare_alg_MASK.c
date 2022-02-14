
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_alg {int cra_flags; int * cra_type; int cra_blocksize; } ;
struct aead_alg {int chunksize; int ivsize; int maxauthsize; struct crypto_alg base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct aead_alg *VAR_5)
{
 struct crypto_alg *VAR_6 = &VAR_5->base;

 if (FUNC_0(VAR_5->maxauthsize, VAR_5->ivsize, VAR_5->chunksize) >
     VAR_3 / 8)
  return -VAR_2;

 if (!VAR_5->chunksize)
  VAR_5->chunksize = VAR_6->cra_blocksize;

 VAR_6->cra_type = &VAR_4;
 VAR_6->cra_flags &= ~VAR_1;
 VAR_6->cra_flags |= VAR_0;

 return 0;
}
