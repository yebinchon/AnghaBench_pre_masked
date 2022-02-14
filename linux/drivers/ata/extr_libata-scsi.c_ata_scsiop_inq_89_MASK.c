
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int tf ;
struct ata_taskfile {int lbal; int nsect; int command; } ;
struct ata_scsi_args {char* id; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (struct ata_taskfile*,int ,int,int*) ;
 int FUNC_1 (int*,char*,int) ;
 int FUNC_2 (struct ata_taskfile*,int ,int) ;

__attribute__((used)) static unsigned int FUNC_3(struct ata_scsi_args *VAR_3, u8 *VAR_4)
{
 struct ata_taskfile VAR_5;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));

 VAR_4[1] = 0x89;
 VAR_4[2] = (0x238 >> 8);
 VAR_4[3] = (0x238 & 0xff);

 FUNC_1(&VAR_4[8], "linux   ", 8);
 FUNC_1(&VAR_4[16], "libata          ", 16);
 FUNC_1(&VAR_4[32], VAR_2, 4);



 VAR_5.command = VAR_1;
 VAR_5.lbal = 0x1;
 VAR_5.nsect = 0x1;

 FUNC_0(&VAR_5, 0, 1, &VAR_4[36]);
 VAR_4[36] = 0x34;

 VAR_4[56] = VAR_0;

 FUNC_1(&VAR_4[60], &VAR_3->id[0], 512);
 return 0;
}
