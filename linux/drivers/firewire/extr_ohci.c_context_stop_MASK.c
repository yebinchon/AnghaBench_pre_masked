
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_ohci {int dummy; } ;
struct context {int running; int regs; struct fw_ohci* ohci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fw_ohci*,char*,int) ;
 int FUNC_3 (struct fw_ohci*,int ) ;
 int FUNC_4 (struct fw_ohci*,int ,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct context *VAR_2)
{
 struct fw_ohci *VAR_3 = VAR_2->ohci;
 u32 VAR_4;
 int VAR_5;

 FUNC_4(VAR_3, FUNC_0(VAR_2->regs), VAR_1);
 VAR_2->running = 0;

 for (VAR_5 = 0; VAR_5 < 1000; VAR_5++) {
  VAR_4 = FUNC_3(VAR_3, FUNC_1(VAR_2->regs));
  if ((VAR_4 & VAR_0) == 0)
   return;

  if (VAR_5)
   FUNC_5(10);
 }
 FUNC_2(VAR_3, "DMA context still active (0x%08x)\n", VAR_4);
}
