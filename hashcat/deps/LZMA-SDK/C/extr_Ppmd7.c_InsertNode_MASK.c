
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * FreeList; } ;
typedef int CPpmd_Void_Ref ;
typedef TYPE_1__ CPpmd7 ;


 int FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(CPpmd7 *VAR_0, void *VAR_1, unsigned VAR_2)
{
  *((CPpmd_Void_Ref *)VAR_1) = VAR_0->FreeList[VAR_2];
  VAR_0->FreeList[VAR_2] = FUNC_0(VAR_1);
}
