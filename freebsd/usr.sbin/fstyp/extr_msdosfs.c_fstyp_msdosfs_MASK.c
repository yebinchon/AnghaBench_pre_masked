
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int* BS_FilSysType; int* BS_VolLab; int BPB_NumFATs; int BPB_BytsPerSec; int BPB_FATSz32; int BPB_RsvdSecCnt; } ;
struct TYPE_5__ {int* BS_FilSysType; int* BS_VolLab; int BPB_FATSz16; } ;
struct TYPE_4__ {int* DIR_Name; int DIR_Attr; } ;
typedef int FILE ;
typedef TYPE_1__ FAT_DES ;
typedef TYPE_2__ FAT_BSBPB ;
typedef TYPE_3__ FAT32_BSBPB ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (size_t,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 (int *,int,int) ;
 int FUNC_5 (char*,size_t) ;
 int FUNC_6 (char*,int*,int ) ;
 scalar_t__ FUNC_7 (int*,char*,int) ;

int
FUNC_8(FILE *VAR_3, char *VAR_4, size_t VAR_5)
{
 FAT_BSBPB *VAR_6;
 FAT32_BSBPB *VAR_7;
 FAT_DES *VAR_8;
 uint8_t *VAR_9, *VAR_10;

 VAR_9 = ((void*)0);
 VAR_10 = ((void*)0);


 VAR_9 = (uint8_t *)FUNC_4(VAR_3, 0, 512);
 if (VAR_9 == ((void*)0))
  return (1);


 if (VAR_9[510] != 0x55 || VAR_9[511] != 0xaa) {
  goto error;
 }





 VAR_6 = (FAT_BSBPB *)VAR_9;
 VAR_7 = (FAT32_BSBPB *)VAR_9;

 if (FUNC_1(VAR_6->BPB_FATSz16) != 0) {




  if (FUNC_7(VAR_6->BS_FilSysType, "FAT", 3) != 0) {
   goto error;
  }


  if (FUNC_7(VAR_6->BS_VolLab, VAR_2,
      sizeof(VAR_6->BS_VolLab)) == 0) {
   goto endofchecks;
  }
  FUNC_6(VAR_4, VAR_6->BS_VolLab,
      FUNC_0(VAR_5, sizeof(VAR_6->BS_VolLab) + 1));
 } else if (FUNC_2(VAR_7->BPB_FATSz32) != 0) {
  uint32_t VAR_11, VAR_12, VAR_13;





  if (FUNC_7(VAR_7->BS_FilSysType, "FAT", 3) != 0) {
   goto error;
  }




  if (FUNC_7(VAR_7->BS_VolLab, VAR_2,
      sizeof(VAR_7->BS_VolLab)) != 0) {
   FUNC_6(VAR_4, VAR_7->BS_VolLab,
       FUNC_0(VAR_5, sizeof(VAR_7->BS_VolLab) + 1));
   goto endofchecks;
  }






  VAR_11 =
      FUNC_1(VAR_7->BPB_RsvdSecCnt) +
      (VAR_7->BPB_NumFATs *
       FUNC_2(VAR_7->BPB_FATSz32));
  VAR_12 = FUNC_1(VAR_7->BPB_BytsPerSec);



  for (VAR_13 = VAR_12 * VAR_11;;
      VAR_13 += VAR_12) {
   VAR_10 = (uint8_t *)FUNC_4(VAR_3, VAR_13, VAR_12);
   if (VAR_10 == ((void*)0))
    goto error;

   VAR_8 = (FAT_DES *)VAR_10;
   do {

    if (VAR_8->DIR_Name[0] == 0) {
     goto endofchecks;
    }


    if (VAR_8->DIR_Name[0] == 0xe5 ||
        (VAR_8->DIR_Attr &
         VAR_0) ==
        VAR_0) {
     continue;
    }





    if (VAR_8->DIR_Attr &
        VAR_1) {
     FUNC_6(VAR_4, VAR_8->DIR_Name,
         FUNC_0(VAR_5,
         sizeof(VAR_8->DIR_Name) + 1));
     goto endofchecks;
    }
   } while((uint8_t *)(++VAR_8) <
       (uint8_t *)(VAR_10 + VAR_12));
   FUNC_3(VAR_10);
  }
 } else {
  goto error;
 }

endofchecks:
 FUNC_5(VAR_4, VAR_5);

 FUNC_3(VAR_9);
 FUNC_3(VAR_10);

 return (0);

error:
 FUNC_3(VAR_9);
 FUNC_3(VAR_10);

 return (1);
}
