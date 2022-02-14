
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmt_i2c_dev {int dev; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct wmt_i2c_dev *VAR_5)
{
 unsigned long VAR_6;

 VAR_6 = VAR_4 + VAR_3;
 while (!(FUNC_2(VAR_5->base + VAR_2) & VAR_0)) {
  if (FUNC_3(VAR_4, VAR_6)) {
   FUNC_0(VAR_5->dev, "timeout waiting for bus ready\n");
   return -VAR_1;
  }
  FUNC_1(20);
 }

 return 0;
}
