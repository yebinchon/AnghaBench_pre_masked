
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_scsi_args {int id; } ;
typedef int hdr ;


 int VAR_0 ;

 int FUNC_0 (int ,unsigned char*,int ,int const) ;
 int FUNC_1 (int*,int const*,int) ;

__attribute__((used)) static unsigned int FUNC_2(struct ata_scsi_args *VAR_1, u8 *VAR_2)
{
 static const u8 VAR_3[] = {
  0,
  0x80,
  0,
  128,
 };

 FUNC_1(VAR_2, VAR_3, sizeof(VAR_3));
 FUNC_0(VAR_1->id, (unsigned char *) &VAR_2[4],
        VAR_0, 128);
 return 0;
}
