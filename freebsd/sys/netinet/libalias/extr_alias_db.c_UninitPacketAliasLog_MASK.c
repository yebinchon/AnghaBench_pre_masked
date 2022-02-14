
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libalias {int packetAliasMode; int * logDesc; } ;


 int FUNC_0 (struct libalias*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct libalias *VAR_1)
{

 FUNC_0(VAR_1);
 if (VAR_1->logDesc) {



  FUNC_1(VAR_1->logDesc);

  VAR_1->logDesc = ((void*)0);
 }
 VAR_1->packetAliasMode &= ~VAR_0;
}
