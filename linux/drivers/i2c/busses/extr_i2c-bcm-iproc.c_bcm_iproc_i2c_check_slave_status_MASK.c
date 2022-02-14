
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm_iproc_i2c_dev {int device; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bcm_iproc_i2c_dev*,int) ;
 int FUNC_2 (struct bcm_iproc_i2c_dev*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct bcm_iproc_i2c_dev*,int ) ;

__attribute__((used)) static void FUNC_5(
 struct bcm_iproc_i2c_dev *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_4(VAR_5, VAR_0);

 if (VAR_6 & FUNC_0(VAR_1))
  return;

 VAR_6 = (VAR_6 >> VAR_3) & VAR_2;
 if (VAR_6 == VAR_4) {
  FUNC_3(VAR_5->device, "slave random stretch time timeout\n");


  FUNC_1(VAR_5, 0);
  FUNC_2(VAR_5, 1);
  FUNC_1(VAR_5, 1);
 }
}
