
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar724x_pci_controller {scalar_t__ ctrl_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct ar724x_pci_controller*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct ar724x_pci_controller *VAR_7)
{
 u32 VAR_8, VAR_9;
 int VAR_10 = 0;


 FUNC_3(VAR_5);
 FUNC_3(VAR_6);


 VAR_8 = FUNC_4(VAR_2);
 VAR_8 &= ~VAR_4;
 FUNC_5(VAR_2, VAR_8);


 VAR_8 = FUNC_4(VAR_2);
 VAR_8 &= ~VAR_3;
 FUNC_5(VAR_2, VAR_8);


 VAR_9 = FUNC_0(VAR_7->ctrl_base + VAR_1);
 VAR_9 |= VAR_0;
 FUNC_1(VAR_9, VAR_7->ctrl_base + VAR_1);


 do {
  FUNC_6(10);
  VAR_10++;
 } while (VAR_10 < 10 && !FUNC_2(VAR_7));
}
