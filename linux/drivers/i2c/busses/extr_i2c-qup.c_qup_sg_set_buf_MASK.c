
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct qup_i2c_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct scatterlist*,int,int) ;
 int FUNC_1 (struct scatterlist*,void*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct scatterlist *VAR_1, void *VAR_2,
     unsigned int VAR_3, struct qup_i2c_dev *VAR_4,
     int VAR_5)
{
 int VAR_6;

 FUNC_1(VAR_1, VAR_2, VAR_3);
 VAR_6 = FUNC_0(VAR_4->dev, VAR_1, 1, VAR_5);
 if (!VAR_6)
  return -VAR_0;

 return 0;
}
