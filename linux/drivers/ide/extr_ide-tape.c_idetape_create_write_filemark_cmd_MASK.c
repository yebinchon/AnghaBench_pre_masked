
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_atapi_pc {int* c; int flags; } ;
typedef int ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ide_atapi_pc*) ;

__attribute__((used)) static void FUNC_1(ide_drive_t *VAR_2,
  struct ide_atapi_pc *VAR_3, int VAR_4)
{
 FUNC_0(VAR_3);
 VAR_3->c[0] = VAR_1;
 VAR_3->c[4] = VAR_4;
 VAR_3->flags |= VAR_0;
}
