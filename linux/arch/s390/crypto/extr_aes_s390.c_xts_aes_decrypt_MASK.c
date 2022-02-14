
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct s390_xts_ctx {int fc; } ;
struct blkcipher_walk {int dummy; } ;
struct blkcipher_desc {int tfm; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct blkcipher_walk*,struct scatterlist*,struct scatterlist*,unsigned int) ;
 struct s390_xts_ctx* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct blkcipher_desc*,int ,struct blkcipher_walk*) ;
 int FUNC_4 (struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct blkcipher_desc *VAR_3,
      struct scatterlist *VAR_4, struct scatterlist *VAR_5,
      unsigned int VAR_6)
{
 struct s390_xts_ctx *VAR_7 = FUNC_1(VAR_3->tfm);
 struct blkcipher_walk VAR_8;

 if (!VAR_6)
  return -VAR_1;

 if (FUNC_2(!VAR_7->fc || (VAR_6 % VAR_2) != 0))
  return FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6);

 FUNC_0(&VAR_8, VAR_4, VAR_5, VAR_6);
 return FUNC_3(VAR_3, VAR_0, &VAR_8);
}
