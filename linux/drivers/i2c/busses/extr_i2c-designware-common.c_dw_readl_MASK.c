
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dw_i2c_dev {int flags; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;

u32 FUNC_3(struct dw_i2c_dev *VAR_2, int VAR_3)
{
 u32 VAR_4;

 if (VAR_2->flags & VAR_0)
  VAR_4 = FUNC_1(VAR_2->base + VAR_3) |
   (FUNC_1(VAR_2->base + VAR_3 + 2) << 16);
 else
  VAR_4 = FUNC_0(VAR_2->base + VAR_3);

 if (VAR_2->flags & VAR_1)
  return FUNC_2(VAR_4);
 else
  return VAR_4;
}
