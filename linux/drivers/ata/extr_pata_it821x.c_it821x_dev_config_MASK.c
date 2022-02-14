
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_device {int* id; int max_sectors; int horkage; } ;
typedef int model_num ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ata_device*,char*,char*,int) ;
 int FUNC_1 (int*,unsigned char*,int ,int) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (unsigned char*,char*) ;

__attribute__((used)) static void FUNC_4(struct ata_device *VAR_4)
{
 unsigned char VAR_5[VAR_3 + 1];

 FUNC_1(VAR_4->id, VAR_5, VAR_2, sizeof(VAR_5));

 if (VAR_4->max_sectors > 255)
  VAR_4->max_sectors = 255;

 if (FUNC_3(VAR_5, "Integrated Technology Express")) {

  FUNC_0(VAR_4, "%sRAID%d volume",
        VAR_4->id[147] ? "Bootable " : "",
        VAR_4->id[129]);
  if (VAR_4->id[129] != 1)
   FUNC_2("(%dK stripe)", VAR_4->id[146]);
  FUNC_2("\n");
 }


 VAR_4->horkage &= ~VAR_1;

 VAR_4->horkage |= VAR_0;
}
