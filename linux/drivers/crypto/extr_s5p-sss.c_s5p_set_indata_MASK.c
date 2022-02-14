
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; } ;
struct s5p_aes_dev {struct scatterlist* sg_src; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct scatterlist*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct s5p_aes_dev *VAR_3, struct scatterlist *VAR_4)
{
 if (!VAR_4->length)
  return -VAR_1;

 if (!FUNC_0(VAR_3->dev, VAR_4, 1, VAR_0))
  return -VAR_2;

 VAR_3->sg_src = VAR_4;

 return 0;
}
