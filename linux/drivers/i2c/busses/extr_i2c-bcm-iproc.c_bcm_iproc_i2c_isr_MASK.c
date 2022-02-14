
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_iproc_i2c_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcm_iproc_i2c_dev*,int) ;
 int FUNC_1 (struct bcm_iproc_i2c_dev*,int) ;
 int FUNC_2 (struct bcm_iproc_i2c_dev*,int ) ;
 int FUNC_3 (struct bcm_iproc_i2c_dev*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct bcm_iproc_i2c_dev *VAR_7 = VAR_6;
 u32 VAR_8 = FUNC_2(VAR_7, VAR_4);
 bool VAR_9;
 u32 VAR_10 = VAR_8 & VAR_3;

 if (VAR_10) {
  VAR_9 = FUNC_1(VAR_7, VAR_10);
  if (VAR_9)
   return VAR_0;
  else
   return VAR_1;
 }

 VAR_8 &= VAR_2;
 if (!VAR_8)
  return VAR_1;


 FUNC_0(VAR_7, VAR_8);
 FUNC_3(VAR_7, VAR_4, VAR_8);

 return VAR_0;
}
