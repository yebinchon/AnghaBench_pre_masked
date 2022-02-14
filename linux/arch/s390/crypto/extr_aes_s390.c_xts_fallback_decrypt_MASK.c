
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct s390_xts_ctx {int fallback; } ;
struct crypto_blkcipher {int dummy; } ;
struct blkcipher_desc {int info; int flags; struct crypto_blkcipher* tfm; } ;


 int FUNC_0 (int ,int ) ;
 struct s390_xts_ctx* FUNC_1 (struct crypto_blkcipher*) ;
 unsigned int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int *,int *) ;
 int FUNC_4 (int ,struct scatterlist*,struct scatterlist*,unsigned int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct blkcipher_desc *VAR_1,
  struct scatterlist *VAR_2, struct scatterlist *VAR_3,
  unsigned int VAR_4)
{
 struct crypto_blkcipher *VAR_5 = VAR_1->tfm;
 struct s390_xts_ctx *VAR_6 = FUNC_1(VAR_5);
 FUNC_0(VAR_0, VAR_6->fallback);
 unsigned int VAR_7;

 FUNC_5(VAR_0, VAR_6->fallback);
 FUNC_3(VAR_0, VAR_1->flags, ((void*)0), ((void*)0));
 FUNC_4(VAR_0, VAR_3, VAR_2, VAR_4, VAR_1->info);

 VAR_7 = FUNC_2(VAR_0);

 FUNC_6(VAR_0);
 return VAR_7;
}
