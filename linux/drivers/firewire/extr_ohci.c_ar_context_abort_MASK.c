
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_ohci {int dummy; } ;
struct ar_context {int regs; struct fw_ohci* ohci; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fw_ohci*) ;
 int FUNC_2 (struct fw_ohci*,char*,char const*) ;
 int FUNC_3 (struct fw_ohci*,int ) ;
 int FUNC_4 (struct fw_ohci*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ar_context *VAR_1, const char *VAR_2)
{
 struct fw_ohci *VAR_3 = VAR_1->ohci;

 if (FUNC_3(VAR_3, FUNC_0(VAR_1->regs)) & VAR_0) {
  FUNC_4(VAR_3, FUNC_0(VAR_1->regs), VAR_0);
  FUNC_1(VAR_3);

  FUNC_2(VAR_3, "AR error: %s; DMA stopped\n", VAR_2);
 }

}
