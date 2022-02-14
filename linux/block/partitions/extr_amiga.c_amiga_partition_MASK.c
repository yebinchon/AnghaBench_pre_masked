
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct parsed_partitions {int pp_buf; int bdev; } ;
struct RigidDiskBlock {scalar_t__ rdb_SummedLongs; scalar_t__ rdb_BlockBytes; scalar_t__ rdb_PartitionList; } ;
struct PartitionBlock {scalar_t__ pb_Next; scalar_t__ pb_ID; scalar_t__ pb_SummedLongs; scalar_t__* pb_Environment; } ;
typedef scalar_t__ __be32 ;
typedef int Sector ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,int,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct parsed_partitions*,int ,int,int) ;
 unsigned char* FUNC_7 (struct parsed_partitions*,int,int *) ;
 int FUNC_8 (char*,int,char*,int,...) ;
 int FUNC_9 (int ,char*,int ) ;
 scalar_t__ VAR_5 ;

int FUNC_10(struct parsed_partitions *VAR_6)
{
 Sector VAR_7;
 unsigned char *VAR_8;
 struct RigidDiskBlock *VAR_9;
 struct PartitionBlock *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15 = 0;
 int VAR_16 = 1;
 int VAR_17 = 1;
 char VAR_18[VAR_0];

 for (VAR_13 = 0; ; VAR_13++, FUNC_5(VAR_7)) {
  if (VAR_13 == VAR_4)
   goto rdb_done;
  VAR_8 = FUNC_7(VAR_6, VAR_13, &VAR_7);
  if (!VAR_8) {
   if (VAR_5)
    FUNC_4("Dev %s: unable to read RDB block %d\n",
           FUNC_0(VAR_6->bdev, VAR_18), VAR_13);
   VAR_15 = -1;
   goto rdb_done;
  }
  if (*(__be32 *)VAR_8 != FUNC_3(VAR_2))
   continue;

  VAR_9 = (struct RigidDiskBlock *)VAR_8;
  if (FUNC_2((__be32 *)VAR_8, FUNC_1(VAR_9->rdb_SummedLongs) & 0x7F) == 0)
   break;



  *(__be32 *)(VAR_8+0xdc) = 0;
  if (FUNC_2((__be32 *)VAR_8,
    FUNC_1(VAR_9->rdb_SummedLongs) & 0x7F)==0) {
   FUNC_4("Trashed word at 0xd0 in block %d ignored in checksum calculation\n",
          VAR_13);
   break;
  }

  FUNC_4("Dev %s: RDB in block %d has bad checksum\n",
         FUNC_0(VAR_6->bdev, VAR_18), VAR_13);
 }


 VAR_16 = FUNC_1( VAR_9->rdb_BlockBytes ) / 512;

 {
  char VAR_19[7 + 10 + 1 + 1];


  FUNC_8(VAR_19, sizeof(VAR_19), " RDSK (%d)", VAR_16 * 512);
  FUNC_9(VAR_6->pp_buf, VAR_19, VAR_3);
 }
 VAR_13 = FUNC_1(VAR_9->rdb_PartitionList);
 FUNC_5(VAR_7);
 for (VAR_14 = 1; VAR_13>0 && VAR_14<=16; VAR_14++, FUNC_5(VAR_7)) {
  VAR_13 *= VAR_16;
  VAR_8 = FUNC_7(VAR_6, VAR_13, &VAR_7);
  if (!VAR_8) {
   if (VAR_5)
    FUNC_4("Dev %s: unable to read partition block %d\n",
           FUNC_0(VAR_6->bdev, VAR_18), VAR_13);
   VAR_15 = -1;
   goto rdb_done;
  }
  VAR_10 = (struct PartitionBlock *)VAR_8;
  VAR_13 = FUNC_1(VAR_10->pb_Next);
  if (VAR_10->pb_ID != FUNC_3(VAR_1))
   continue;
  if (FUNC_2((__be32 *)VAR_10, FUNC_1(VAR_10->pb_SummedLongs) & 0x7F) != 0 )
   continue;



  VAR_12 = (FUNC_1(VAR_10->pb_Environment[10]) + 1 -
       FUNC_1(VAR_10->pb_Environment[9])) *
      FUNC_1(VAR_10->pb_Environment[3]) *
      FUNC_1(VAR_10->pb_Environment[5]) *
      VAR_16;
  if (!VAR_12)
   continue;
  VAR_11 = FUNC_1(VAR_10->pb_Environment[9]) *
        FUNC_1(VAR_10->pb_Environment[3]) *
        FUNC_1(VAR_10->pb_Environment[5]) *
        VAR_16;
  FUNC_6(VAR_6,VAR_17++,VAR_11,VAR_12);
  {

   char VAR_20[4];
   char VAR_21[42];

   __be32 *VAR_22 = (__be32 *)VAR_20;
   *VAR_22 = VAR_10->pb_Environment[16];
   if (VAR_20[3] < ' ')
    FUNC_8(VAR_21, sizeof(VAR_21), " (%c%c%c^%c)",
     VAR_20[0], VAR_20[1],
     VAR_20[2], VAR_20[3] + '@' );
   else
    FUNC_8(VAR_21, sizeof(VAR_21), " (%c%c%c%c)",
     VAR_20[0], VAR_20[1],
     VAR_20[2], VAR_20[3]);
   FUNC_9(VAR_6->pp_buf, VAR_21, VAR_3);
   FUNC_8(VAR_21, sizeof(VAR_21), "(res %d spb %d)",
    FUNC_1(VAR_10->pb_Environment[6]),
    FUNC_1(VAR_10->pb_Environment[4]));
   FUNC_9(VAR_6->pp_buf, VAR_21, VAR_3);
  }
  VAR_15 = 1;
 }
 FUNC_9(VAR_6->pp_buf, "\n", VAR_3);

rdb_done:
 return VAR_15;
}
