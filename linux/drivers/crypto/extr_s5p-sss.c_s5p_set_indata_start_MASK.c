
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct s5p_aes_dev {struct scatterlist* sg_src_cpy; int dev; } ;
struct ablkcipher_request {struct scatterlist* src; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct s5p_aes_dev*,struct scatterlist**) ;
 int FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (struct s5p_aes_dev*,struct scatterlist*,struct scatterlist**) ;
 int FUNC_4 (struct s5p_aes_dev*,struct scatterlist*) ;

__attribute__((used)) static int FUNC_5(struct s5p_aes_dev *VAR_0,
    struct ablkcipher_request *VAR_1)
{
 struct scatterlist *VAR_2;
 int VAR_3;

 VAR_0->sg_src_cpy = ((void*)0);
 VAR_2 = VAR_1->src;
 if (!FUNC_2(VAR_2)) {
  FUNC_0(VAR_0->dev,
   "At least one unaligned source scatter list, making a copy\n");
  VAR_3 = FUNC_3(VAR_0, VAR_2, &VAR_0->sg_src_cpy);
  if (VAR_3)
   return VAR_3;

  VAR_2 = VAR_0->sg_src_cpy;
 }

 VAR_3 = FUNC_4(VAR_0, VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_0, &VAR_0->sg_src_cpy);
  return VAR_3;
 }

 return 0;
}
