
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sahara_dev {int dma_completion; int error; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sahara_dev*,unsigned int) ;
 int FUNC_3 (struct sahara_dev*,unsigned int) ;
 unsigned int FUNC_4 (struct sahara_dev*,int ) ;
 int FUNC_5 (struct sahara_dev*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_10, void *VAR_11)
{
 struct sahara_dev *VAR_12 = (struct sahara_dev *)VAR_11;
 unsigned int VAR_13 = FUNC_4(VAR_12, VAR_7);
 unsigned int VAR_14 = FUNC_4(VAR_12, VAR_6);

 FUNC_5(VAR_12, VAR_4 | VAR_3,
       VAR_5);

 FUNC_3(VAR_12, VAR_13);

 if (FUNC_0(VAR_13) == VAR_8) {
  return VAR_2;
 } else if (FUNC_0(VAR_13) == VAR_9) {
  VAR_12->error = 0;
 } else {
  FUNC_2(VAR_12, VAR_14);
  VAR_12->error = -VAR_0;
 }

 FUNC_1(&VAR_12->dma_completion);

 return VAR_1;
}
