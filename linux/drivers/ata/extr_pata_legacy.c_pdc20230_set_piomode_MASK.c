
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_port {int dummy; } ;
struct ata_device {int pio_mode; int devno; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct ata_port *VAR_1, struct ata_device *VAR_2)
{
 int VAR_3 = 5;
 int VAR_4 = VAR_2->pio_mode - VAR_0;
 u8 VAR_5;
 unsigned long VAR_6;



 FUNC_2(VAR_6);


 do {
  FUNC_0(0x1F5);
  FUNC_3(FUNC_0(0x1F2) | 0x80, 0x1F2);
  FUNC_0(0x1F2);
  FUNC_0(0x3F6);
  FUNC_0(0x3F6);
  FUNC_0(0x1F2);
  FUNC_0(0x1F2);
 }
 while ((FUNC_0(0x1F2) & 0x80) && --VAR_3);

 FUNC_1(VAR_6);

 FUNC_3(FUNC_0(0x1F4) & 0x07, 0x1F4);

 VAR_5 = FUNC_0(0x1F3);
 VAR_5 &= 0x07 << (3 * VAR_2->devno);
 if (VAR_4)
  VAR_5 |= (1 + 3 * VAR_4) << (3 * VAR_2->devno);

 FUNC_4(100);
 FUNC_3(FUNC_0(0x1F2) | 0x01, 0x1F2);
 FUNC_4(100);
 FUNC_0(0x1F5);

}
