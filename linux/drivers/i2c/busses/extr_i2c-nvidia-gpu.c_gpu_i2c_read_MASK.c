
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct gpu_i2c_dev {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct gpu_i2c_dev*) ;
 int FUNC_1 (int,int*) ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct gpu_i2c_dev *VAR_7, u8 *VAR_8, u16 VAR_9)
{
 int VAR_10;
 u32 VAR_11;

 VAR_11 = VAR_5 | VAR_2 |
  (VAR_9 << VAR_1) |
  VAR_3 | VAR_4;
 FUNC_4(VAR_11, VAR_7->regs + VAR_0);

 VAR_10 = FUNC_0(VAR_7);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_11 = FUNC_3(VAR_7->regs + VAR_6);
 switch (VAR_9) {
 case 1:
  VAR_8[0] = VAR_11;
  break;
 case 2:
  FUNC_1(VAR_11, VAR_8);
  break;
 case 3:
  FUNC_1(VAR_11 >> 8, VAR_8);
  VAR_8[2] = VAR_11;
  break;
 case 4:
  FUNC_2(VAR_11, VAR_8);
  break;
 default:
  break;
 }
 return VAR_10;
}
