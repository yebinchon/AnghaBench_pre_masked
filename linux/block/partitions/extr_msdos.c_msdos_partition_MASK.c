
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct partition {int boot_ind; } ;
struct parsed_partitions {int next; int pp_buf; TYPE_1__* parts; int bdev; } ;
struct fat_boot_sector {int media; scalar_t__ fats; scalar_t__ reserved; } ;
typedef int sector_t ;
typedef int __le32 ;
struct TYPE_4__ {unsigned char id; int (* parse ) (struct parsed_partitions*,int,int,int) ;} ;
struct TYPE_3__ {int flags; } ;
typedef int Sector ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 unsigned char FUNC_0 (struct partition*) ;
 scalar_t__ FUNC_1 (struct parsed_partitions*,unsigned char*) ;
 int FUNC_2 (struct parsed_partitions*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct partition*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (unsigned char*) ;
 int FUNC_10 (struct partition*) ;
 int FUNC_11 (struct parsed_partitions*,int,int,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct parsed_partitions*,int,int,int) ;
 unsigned char* FUNC_14 (struct parsed_partitions*,int ,int *) ;
 int FUNC_15 (struct parsed_partitions*,int,int ) ;
 int FUNC_16 (struct partition*) ;
 int FUNC_17 (int ,char*,int ) ;
 int FUNC_18 (struct parsed_partitions*,int,int,int) ;
 TYPE_2__* VAR_6 ;

int FUNC_19(struct parsed_partitions *VAR_7)
{
 sector_t VAR_8 = FUNC_3(VAR_7->bdev) / 512;
 Sector VAR_9;
 unsigned char *VAR_10;
 struct partition *VAR_11;
 struct fat_boot_sector *VAR_12;
 int VAR_13;
 u32 VAR_14;

 VAR_10 = FUNC_14(VAR_7, 0, &VAR_9);
 if (!VAR_10)
  return -1;





 if (FUNC_1(VAR_7, VAR_10)) {
  FUNC_12(VAR_9);



  FUNC_17(VAR_7->pp_buf, " [AIX]", VAR_5);
  return 0;

 }

 if (!FUNC_9(VAR_10 + 510)) {
  FUNC_12(VAR_9);
  return 0;
 }







 VAR_11 = (struct partition *) (VAR_10 + 0x1be);
 for (VAR_13 = 1; VAR_13 <= 4; VAR_13++, VAR_11++) {
  if (VAR_11->boot_ind != 0 && VAR_11->boot_ind != 0x80) {





   VAR_12 = (struct fat_boot_sector *) VAR_10;
   if (VAR_13 == 1 && VAR_12->reserved && VAR_12->fats
    && FUNC_4(VAR_12->media)) {
    FUNC_17(VAR_7->pp_buf, "\n", VAR_5);
    FUNC_12(VAR_9);
    return 1;
   } else {
    FUNC_12(VAR_9);
    return 0;
   }
  }
 }
 VAR_11 = (struct partition *) (VAR_10 + 0x1be);

 VAR_14 = FUNC_6((__le32 *)(VAR_10 + 0x1b8));







 VAR_7->next = 5;
 for (VAR_13 = 1 ; VAR_13 <= 4 ; VAR_13++, VAR_11++) {
  sector_t VAR_15 = FUNC_16(VAR_11)*VAR_8;
  sector_t VAR_16 = FUNC_10(VAR_11)*VAR_8;

  if (!VAR_16)
   continue;
  if (FUNC_5(VAR_11)) {






   sector_t VAR_17 = 2;

   VAR_17 = FUNC_8(VAR_16, FUNC_7(VAR_8, VAR_17));
   FUNC_13(VAR_7, VAR_13, VAR_15, VAR_17);

   FUNC_17(VAR_7->pp_buf, " <", VAR_5);
   FUNC_11(VAR_7, VAR_15, VAR_16, VAR_14);
   FUNC_17(VAR_7->pp_buf, " >", VAR_5);
   continue;
  }
  FUNC_13(VAR_7, VAR_13, VAR_15, VAR_16);
  FUNC_15(VAR_7, VAR_13, VAR_14);
  if (FUNC_0(VAR_11) == VAR_4)
   VAR_7->parts[VAR_13].flags = VAR_0;
  if (FUNC_0(VAR_11) == VAR_1)
   FUNC_17(VAR_7->pp_buf, "[DM]", VAR_5);
  if (FUNC_0(VAR_11) == VAR_3)
   FUNC_17(VAR_7->pp_buf, "[EZD]", VAR_5);
 }

 FUNC_17(VAR_7->pp_buf, "\n", VAR_5);


 VAR_11 = (struct partition *) (0x1be + VAR_10);
 for (VAR_13 = 1 ; VAR_13 <= 4 ; VAR_13++, VAR_11++) {
  unsigned char VAR_18 = FUNC_0(VAR_11);
  int VAR_19;

  if (!FUNC_10(VAR_11))
   continue;

  for (VAR_19 = 0; VAR_6[VAR_19].parse && VAR_18 != VAR_6[VAR_19].id; VAR_19++)
   ;

  if (!VAR_6[VAR_19].parse)
   continue;
  VAR_6[VAR_19].parse(VAR_7, FUNC_16(VAR_11) * VAR_8,
      FUNC_10(VAR_11) * VAR_8, VAR_13);
 }
 FUNC_12(VAR_9);
 return 1;
}
