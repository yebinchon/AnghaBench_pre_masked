
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct idt77252_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int * VAR_0 ;

__attribute__((used)) static u8
FUNC_1(struct idt77252_dev *VAR_1, int VAR_2)
{
 u16 VAR_3;

 VAR_3 = FUNC_0(VAR_2 < 0 ? -VAR_2 : VAR_2);
 if (VAR_2 < 0)
  return VAR_0[(VAR_3 >> 5) & 0x1ff];
 return VAR_0[((VAR_3 >> 5) + 1) & 0x1ff];
}
