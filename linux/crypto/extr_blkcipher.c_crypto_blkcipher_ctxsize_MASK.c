
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct blkcipher_alg {scalar_t__ ivsize; } ;
struct crypto_alg {unsigned int cra_ctxsize; scalar_t__ cra_alignmask; struct blkcipher_alg cra_blkcipher; } ;


 unsigned int FUNC_0 (unsigned int,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_1(struct crypto_alg *VAR_1, u32 VAR_2,
          u32 VAR_3)
{
 struct blkcipher_alg *VAR_4 = &VAR_1->cra_blkcipher;
 unsigned int VAR_5 = VAR_1->cra_ctxsize;

 if ((VAR_3 & VAR_0) == VAR_0 &&
     VAR_4->ivsize) {
  VAR_5 = FUNC_0(VAR_5, (unsigned long)VAR_1->cra_alignmask + 1);
  VAR_5 += VAR_4->ivsize;
 }

 return VAR_5;
}
