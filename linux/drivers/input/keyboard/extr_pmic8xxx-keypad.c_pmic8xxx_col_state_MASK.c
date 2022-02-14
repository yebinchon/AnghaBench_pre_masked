
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pmic8xxx_kp {int num_cols; } ;



__attribute__((used)) static u8 FUNC_0(struct pmic8xxx_kp *VAR_0, u8 VAR_1)
{

 if (VAR_1 == 0x00)
  return 1 << VAR_0->num_cols;
 else
  return VAR_1 & ((1 << VAR_0->num_cols) - 1);
}
