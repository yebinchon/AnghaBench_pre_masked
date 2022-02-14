
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct bochs_device {scalar_t__ mmio; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct bochs_device *VAR_0, u16 VAR_1, u8 VAR_2)
{
 if (FUNC_0(VAR_1 < 0x3c0 || VAR_1 > 0x3df))
  return;

 if (VAR_0->mmio) {
  int VAR_3 = VAR_1 - 0x3c0 + 0x400;
  FUNC_2(VAR_2, VAR_0->mmio + VAR_3);
 } else {
  FUNC_1(VAR_2, VAR_1);
 }
}
