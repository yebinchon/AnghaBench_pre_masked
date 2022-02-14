
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct gpu_i2c_dev {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct gpu_i2c_dev*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct gpu_i2c_dev *VAR_4, u8 VAR_5)
{
 u32 VAR_6;

 FUNC_1(VAR_5, VAR_4->regs + VAR_3);

 VAR_6 = VAR_2 | (1 << VAR_1);
 FUNC_1(VAR_6, VAR_4->regs + VAR_0);

 return FUNC_0(VAR_4);
}
