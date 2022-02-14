
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bochs_device {scalar_t__ mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static u16 FUNC_3(struct bochs_device *VAR_2, u16 VAR_3)
{
 u16 VAR_4 = 0;

 if (VAR_2->mmio) {
  int VAR_5 = 0x500 + (VAR_3 << 1);
  VAR_4 = FUNC_2(VAR_2->mmio + VAR_5);
 } else {
  FUNC_1(VAR_3, VAR_1);
  VAR_4 = FUNC_0(VAR_0);
 }
 return VAR_4;
}
