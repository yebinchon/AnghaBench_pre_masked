
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct s390_aes_ctx {int fc; } ;
struct blkcipher_walk {int dummy; } ;
struct blkcipher_desc {int tfm; } ;


 int VAR_0 ;
 int FUNC_0 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 int FUNC_1 (struct blkcipher_desc*,int ,struct blkcipher_walk*) ;
 struct s390_aes_ctx* FUNC_2 (int ) ;
 int FUNC_3 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct blkcipher_desc *VAR_1,
      struct scatterlist *VAR_2, struct scatterlist *VAR_3,
      unsigned int VAR_4)
{
 struct s390_aes_ctx *VAR_5 = FUNC_2(VAR_1->tfm);
 struct blkcipher_walk VAR_6;

 if (FUNC_4(!VAR_5->fc))
  return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);

 FUNC_0(&VAR_6, VAR_2, VAR_3, VAR_4);
 return FUNC_1(VAR_1, VAR_0, &VAR_6);
}
