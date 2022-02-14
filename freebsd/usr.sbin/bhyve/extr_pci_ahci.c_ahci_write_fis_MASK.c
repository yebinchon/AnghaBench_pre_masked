
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ahci_port {int cmd; int waitforclear; int is; int * rfis; } ;
typedef enum sata_fis_type { ____Placeholder_sata_fis_type } sata_fis_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct ahci_port*) ;
 int FUNC_2 (int *,int*,int) ;

__attribute__((used)) static void
FUNC_3(struct ahci_port *VAR_6, enum sata_fis_type VAR_7, uint8_t *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;

 if (VAR_6->rfis == ((void*)0) || !(VAR_6->cmd & VAR_0))
  return;

 switch (VAR_7) {
 case 129:
  VAR_9 = 0x40;
  VAR_10 = 20;
  VAR_11 = (VAR_8[1] & (1 << 6)) ? VAR_1 : 0;
  break;
 case 128:
  VAR_9 = 0x58;
  VAR_10 = 8;
  VAR_11 = (VAR_8[1] & (1 << 6)) ? VAR_3 : 0;
  break;
 case 130:
  VAR_9 = 0x20;
  VAR_10 = 20;
  VAR_11 = (VAR_8[1] & (1 << 6)) ? VAR_2 : 0;
  break;
 default:
  FUNC_0("unsupported fis type %d\n", VAR_7);
  return;
 }
 if (VAR_8[2] & VAR_5) {
  VAR_6->waitforclear = 1;
  VAR_11 |= VAR_4;
 }
 FUNC_2(VAR_6->rfis + VAR_9, VAR_8, VAR_10);
 if (VAR_11) {
  if (~VAR_6->is & VAR_11) {
   VAR_6->is |= VAR_11;
   FUNC_1(VAR_6);
  }
 }
}
