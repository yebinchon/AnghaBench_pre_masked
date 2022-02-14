
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct ipack_device {char* id; char id_vendor; char id_device; int speed_8mhz; int speed_32mhz; int id_crc_correct; int dev; } ;


 int FUNC_0 (int *,char*,char,char) ;
 char FUNC_1 (struct ipack_device*) ;

__attribute__((used)) static void FUNC_2(struct ipack_device *VAR_0)
{
 u8 *VAR_1 = VAR_0->id;
 u8 VAR_2;

 VAR_0->id_vendor = VAR_1[4];
 VAR_0->id_device = VAR_1[5];
 VAR_0->speed_8mhz = 1;
 VAR_0->speed_32mhz = (VAR_1[7] == 'H');
 VAR_2 = FUNC_1(VAR_0);
 VAR_0->id_crc_correct = (VAR_2 == VAR_1[11]);
 if (!VAR_0->id_crc_correct) {
  FUNC_0(&VAR_0->dev, "ID CRC invalid found 0x%x, expected 0x%x.\n",
    VAR_1[11], VAR_2);
 }
}
