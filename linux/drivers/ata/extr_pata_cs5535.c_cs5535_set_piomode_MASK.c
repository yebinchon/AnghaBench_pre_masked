
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ata_port {int dummy; } ;
struct ata_device {int pio_mode; int devno; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct ata_device* FUNC_0 (struct ata_device*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__,int,int) ;
 int FUNC_3 (scalar_t__,int const,int ) ;

__attribute__((used)) static void FUNC_4(struct ata_port *VAR_3, struct ata_device *VAR_4)
{
 static const u16 VAR_5[5] = {
  0xF7F4, 0xF173, 0x8141, 0x5131, 0x1131
 };
 static const u16 VAR_6[5] = {
  0xF7F4, 0x53F3, 0x13F1, 0x5131, 0x1131
 };
 u32 VAR_7, VAR_8;
 struct ata_device *VAR_9 = FUNC_0(VAR_4);

 int VAR_10 = VAR_4->pio_mode - VAR_2;
 int VAR_11 = VAR_10;


 if (VAR_9) {
  int VAR_12 = VAR_9->pio_mode - VAR_2;
  VAR_11 = FUNC_1(VAR_10, VAR_12);

  if (VAR_11 < VAR_12)
   FUNC_3(VAR_1 + 2 * VAR_9->devno,
    VAR_6[VAR_11] << 16 | VAR_5[VAR_12], 0);
 }

 FUNC_3(VAR_1 + 2 * VAR_4->devno,
  VAR_6[VAR_11] << 16 | VAR_5[VAR_10], 0);


 FUNC_2(VAR_0 + 2 * VAR_4->devno, VAR_7, VAR_8);
 FUNC_3(VAR_0 + 2 * VAR_4->devno, VAR_7 | 0x80000000UL, 0);
}
