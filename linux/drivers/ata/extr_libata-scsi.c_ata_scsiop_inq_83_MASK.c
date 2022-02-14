
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_scsi_args {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned char*,int ,int) ;
 int FUNC_2 (int*,char*,int) ;

__attribute__((used)) static unsigned int FUNC_3(struct ata_scsi_args *VAR_6, u8 *VAR_7)
{
 const int VAR_8 = 68;
 int VAR_9;

 VAR_7[1] = 0x83;
 VAR_9 = 4;


 VAR_7[VAR_9 + 0] = 2;
 VAR_7[VAR_9 + 3] = VAR_3;
 VAR_9 += 4;
 FUNC_1(VAR_6->id, (unsigned char *) VAR_7 + VAR_9,
        VAR_2, VAR_3);
 VAR_9 += VAR_3;



 VAR_7[VAR_9 + 0] = 2;
 VAR_7[VAR_9 + 1] = 1;
 VAR_7[VAR_9 + 3] = VAR_8;
 VAR_9 += 4;
 FUNC_2(VAR_7 + VAR_9, "ATA     ", 8);
 VAR_9 += 8;
 FUNC_1(VAR_6->id, (unsigned char *) VAR_7 + VAR_9, VAR_0,
        VAR_1);
 VAR_9 += VAR_1;
 FUNC_1(VAR_6->id, (unsigned char *) VAR_7 + VAR_9, VAR_2,
        VAR_3);
 VAR_9 += VAR_3;

 if (FUNC_0(VAR_6->id)) {


  VAR_7[VAR_9 + 0] = 1;
  VAR_7[VAR_9 + 1] = 3;
  VAR_7[VAR_9 + 3] = VAR_5;
  VAR_9 += 4;
  FUNC_1(VAR_6->id, (unsigned char *) VAR_7 + VAR_9,
         VAR_4, VAR_5);
  VAR_9 += VAR_5;
 }
 VAR_7[3] = VAR_9 - 4;
 return 0;
}
