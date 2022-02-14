
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bochs_device {int qext_size; scalar_t__ mmio; } ;


 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct bochs_device *VAR_0)
{
 if (VAR_0->qext_size < 8)
  return;

 FUNC_0(0xbebebebe, VAR_0->mmio + 0x604);
}
