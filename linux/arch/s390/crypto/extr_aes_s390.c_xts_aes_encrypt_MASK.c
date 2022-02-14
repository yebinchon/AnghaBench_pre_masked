
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct s390_xts_ctx {int fc; } ;
struct blkcipher_walk {int dummy; } ;
struct blkcipher_desc {int tfm; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 struct s390_xts_ctx* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct blkcipher_desc*,int ,struct blkcipher_walk*) ;
 int FUNC_4 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct blkcipher_desc *VAR_2,
      struct scatterlist *VAR_3, struct scatterlist *VAR_4,
      unsigned int VAR_5)
{
 struct s390_xts_ctx *VAR_6 = FUNC_1(VAR_2->tfm);
 struct blkcipher_walk VAR_7;

 if (!VAR_5)
  return -VAR_0;

 if (FUNC_2(!VAR_6->fc || (VAR_5 % VAR_1) != 0))
  return FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_0(&VAR_7, VAR_3, VAR_4, VAR_5);
 return FUNC_3(VAR_2, 0, &VAR_7);
}
