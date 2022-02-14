
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dw_i2c_dev {int flags; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

void FUNC_3(struct dw_i2c_dev *VAR_2, u32 VAR_3, int VAR_4)
{
 if (VAR_2->flags & VAR_1)
  VAR_3 = FUNC_0(VAR_3);

 if (VAR_2->flags & VAR_0) {
  FUNC_2((u16)VAR_3, VAR_2->base + VAR_4);
  FUNC_2((u16)(VAR_3 >> 16), VAR_2->base + VAR_4 + 2);
 } else {
  FUNC_1(VAR_3, VAR_2->base + VAR_4);
 }
}
