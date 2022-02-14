
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {int fireWallFD; int packetAliasMode; int * fireWallField; } ;


 int FUNC_0 (struct libalias*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct libalias *VAR_1)
{

 FUNC_0(VAR_1);
 if (VAR_1->fireWallFD >= 0)
  FUNC_1(VAR_1->fireWallFD);
 VAR_1->fireWallFD = -1;
 if (VAR_1->fireWallField)
  FUNC_2(VAR_1->fireWallField);
 VAR_1->fireWallField = ((void*)0);
 VAR_1->packetAliasMode &= ~VAR_0;
}
