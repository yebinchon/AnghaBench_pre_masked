
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_scsi_args {int id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct ata_scsi_args *VAR_0, u8 *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->id);
 int VAR_3 = FUNC_1(VAR_0->id);
 u8 VAR_4 = FUNC_2(VAR_0->id);

 VAR_1[1] = 0xb1;
 VAR_1[3] = 0x3c;
 VAR_1[4] = VAR_3 >> 8;
 VAR_1[5] = VAR_3;
 VAR_1[7] = VAR_2;
 if (VAR_4)
  VAR_1[8] = (VAR_4 << 4);

 return 0;
}
