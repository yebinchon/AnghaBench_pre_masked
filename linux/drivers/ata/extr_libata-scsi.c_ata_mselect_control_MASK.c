
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ata_queued_cmd {struct ata_device* dev; } ;
struct ata_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ata_device*,int*,int) ;

__attribute__((used)) static int FUNC_1(struct ata_queued_cmd *VAR_3,
          const u8 *VAR_4, int VAR_5, u16 *VAR_6)
{
 struct ata_device *VAR_7 = VAR_3->dev;
 u8 VAR_8[VAR_1];
 u8 VAR_9;
 int VAR_10;






 if (VAR_5 != VAR_1 - 2) {
  if (VAR_5 < VAR_1 - 2)
   *VAR_6 = VAR_5;
  else
   *VAR_6 = VAR_1 - 2;
  return -VAR_2;
 }

 VAR_9 = VAR_4[0] & (1 << 2);




 FUNC_0(VAR_7, VAR_8, 0);
 for (VAR_10 = 0; VAR_10 < VAR_1 - 2; VAR_10++) {
  if (VAR_10 == 0)
   continue;
  if (VAR_8[2 + VAR_10] != VAR_4[VAR_10]) {
   *VAR_6 = VAR_10;
   return -VAR_2;
  }
 }
 if (VAR_9 & (1 << 2))
  VAR_7->flags |= VAR_0;
 else
  VAR_7->flags &= ~VAR_0;
 return 0;
}
