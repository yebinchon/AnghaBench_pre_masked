
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct pci_conf {int pc_sel; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;





 scalar_t__ VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int *,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_6(int VAR_2, struct pci_conf *VAR_3, uint8_t VAR_4)
{
 uint32_t VAR_5, VAR_6;

 VAR_5 = FUNC_5(VAR_2, &VAR_3->pc_sel, VAR_4 + VAR_1, 4);
 VAR_6 = FUNC_5(VAR_2, &VAR_3->pc_sel, VAR_4 + VAR_0, 4);
 FUNC_4("AGP ");
 if (FUNC_1(VAR_5)) {
  FUNC_4("v3 ");
  if (FUNC_2(VAR_5) & 128)
   FUNC_4("8x ");
  if (FUNC_2(VAR_5) & 129)
   FUNC_4("4x ");
 } else {
  if (FUNC_2(VAR_5) & 130)
   FUNC_4("4x ");
  if (FUNC_2(VAR_5) & 131)
   FUNC_4("2x ");
  if (FUNC_2(VAR_5) & 132)
   FUNC_4("1x ");
 }
 if (FUNC_3(VAR_5))
  FUNC_4("SBA ");
 if (FUNC_0(VAR_6)) {
  FUNC_4("enabled at ");
  if (FUNC_1(VAR_6)) {
   FUNC_4("v3 ");
   switch (FUNC_2(VAR_6)) {
   case 128:
    FUNC_4("8x ");
    break;
   case 129:
    FUNC_4("4x ");
    break;
   }
  } else
   switch (FUNC_2(VAR_6)) {
   case 130:
    FUNC_4("4x ");
    break;
   case 131:
    FUNC_4("2x ");
    break;
   case 132:
    FUNC_4("1x ");
    break;
   }
  if (FUNC_3(VAR_6))
   FUNC_4("SBA ");
 } else
  FUNC_4("disabled");
}
