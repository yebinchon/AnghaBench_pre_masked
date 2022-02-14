
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qup_i2c_dev {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct qup_i2c_dev *VAR_3,
       u32 VAR_4, u32 VAR_5)
{
 int VAR_6 = 1;
 u32 VAR_7;





 do {
  VAR_7 = FUNC_0(VAR_3->base + VAR_1);

  if (VAR_7 & VAR_2 &&
      (VAR_7 & VAR_5) == VAR_4)
   return 0;

  FUNC_1(1);
 } while (VAR_6--);

 return -VAR_0;
}
