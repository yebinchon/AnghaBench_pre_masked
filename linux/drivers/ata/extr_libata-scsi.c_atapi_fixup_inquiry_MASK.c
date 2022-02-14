
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_cmnd {int dummy; } ;


 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int ,int*,int) ;

__attribute__((used)) static void FUNC_4(struct scsi_cmnd *VAR_0)
{
 u8 VAR_1[4];

 FUNC_3(FUNC_1(VAR_0), FUNC_0(VAR_0), VAR_1, 4);
 if (VAR_1[2] == 0) {
  VAR_1[2] = 0x5;
  VAR_1[3] = 0x32;
 }
 FUNC_2(FUNC_1(VAR_0), FUNC_0(VAR_0), VAR_1, 4);
}
