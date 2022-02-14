
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ide_atapi_pc {int* c; int flags; } ;
typedef int ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct ide_atapi_pc*) ;
 int FUNC_2 (int ,unsigned int*) ;

__attribute__((used)) static void FUNC_3(ide_drive_t *VAR_2,
  struct ide_atapi_pc *VAR_3,
  unsigned int VAR_4, u8 VAR_5, int VAR_6)
{
 FUNC_1(VAR_3);
 VAR_3->c[0] = VAR_1;
 VAR_3->c[1] = 2;
 FUNC_2(FUNC_0(VAR_4), (unsigned int *) &VAR_3->c[3]);
 VAR_3->c[8] = VAR_5;
 VAR_3->flags |= VAR_0;
}
