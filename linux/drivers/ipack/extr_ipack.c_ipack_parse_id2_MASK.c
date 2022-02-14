
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ipack_device {int id_vendor; int id_device; int speed_8mhz; int speed_32mhz; int id_crc_correct; int dev; scalar_t__ id; } ;
typedef int __be16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (struct ipack_device*) ;

__attribute__((used)) static void FUNC_3(struct ipack_device *VAR_0)
{
 __be16 *VAR_1 = (__be16 *) VAR_0->id;
 u16 VAR_2, VAR_3;

 VAR_0->id_vendor = ((FUNC_0(VAR_1[3]) & 0xff) << 16)
    + FUNC_0(VAR_1[4]);
 VAR_0->id_device = FUNC_0(VAR_1[5]);
 VAR_2 = FUNC_0(VAR_1[10]);
 VAR_0->speed_8mhz = !!(VAR_2 & 2);
 VAR_0->speed_32mhz = !!(VAR_2 & 4);
 VAR_3 = FUNC_2(VAR_0);
 VAR_0->id_crc_correct = (VAR_3 == FUNC_0(VAR_1[12]));
 if (!VAR_0->id_crc_correct) {
  FUNC_1(&VAR_0->dev, "ID CRC invalid found 0x%x, expected 0x%x.\n",
    VAR_1[11], VAR_3);
 }
}
