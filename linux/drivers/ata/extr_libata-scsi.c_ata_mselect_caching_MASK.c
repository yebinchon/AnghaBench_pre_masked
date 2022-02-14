
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ata_taskfile {int flags; int feature; int command; scalar_t__ nsect; int protocol; } ;
struct ata_queued_cmd {struct ata_device* dev; struct ata_taskfile tf; } ;
struct ata_device {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct ata_queued_cmd *VAR_8,
          const u8 *VAR_9, int VAR_10, u16 *VAR_11)
{
 struct ata_taskfile *VAR_12 = &VAR_8->tf;
 struct ata_device *VAR_13 = VAR_8->dev;
 u8 VAR_14[VAR_4];
 u8 VAR_15;
 int VAR_16;






 if (VAR_10 != VAR_4 - 2) {
  if (VAR_10 < VAR_4 - 2)
   *VAR_11 = VAR_10;
  else
   *VAR_11 = VAR_4 - 2;
  return -VAR_5;
 }

 VAR_15 = VAR_9[0] & (1 << 2);




 FUNC_0(VAR_13->id, VAR_14, 0);
 for (VAR_16 = 0; VAR_16 < VAR_4 - 2; VAR_16++) {
  if (VAR_16 == 0)
   continue;
  if (VAR_14[VAR_16 + 2] != VAR_9[VAR_16]) {
   *VAR_11 = VAR_16;
   return -VAR_5;
  }
 }

 VAR_12->flags |= VAR_2 | VAR_3;
 VAR_12->protocol = VAR_1;
 VAR_12->nsect = 0;
 VAR_12->command = VAR_0;
 VAR_12->feature = VAR_15 ? VAR_7 : VAR_6;
 return 0;
}
