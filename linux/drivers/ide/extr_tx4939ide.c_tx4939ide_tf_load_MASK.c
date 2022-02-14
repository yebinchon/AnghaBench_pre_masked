
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ide_taskfile {int dummy; } ;
typedef int ide_drive_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct ide_taskfile*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(ide_drive_t *VAR_1, struct ide_taskfile *VAR_2,
         u8 VAR_3)
{
 FUNC_0(VAR_1, VAR_2, VAR_3);

 if (VAR_3 & VAR_0)
  FUNC_1(VAR_1);
}
