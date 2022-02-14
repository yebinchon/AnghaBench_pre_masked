
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* systemCall ) (intptr_t*) ;scalar_t__ dataBase; scalar_t__ programStack; } ;
typedef TYPE_1__ vm_t ;


 int FUNC_0 (intptr_t*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;

 int FUNC_3 (int,int,int ) ;

 TYPE_1__* VAR_2 ;
 int FUNC_4 (intptr_t*) ;
 int FUNC_5 (intptr_t*) ;
 int VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_6(void)
{
 vm_t *VAR_8;


 VAR_8 = VAR_2;

 VAR_2->programStack = VAR_6 - 4;

 if(VAR_7 < 0)
 {
  int *VAR_9, *VAR_10;





  VAR_9 = (int *) (VAR_8->dataBase + VAR_6 + 4);
  VAR_10 = &VAR_4[VAR_5 + 1];
  VAR_9[0] = ~VAR_7;
  *VAR_10 = VAR_8->systemCall((intptr_t *) VAR_9);

 }
 else
 {
  switch(VAR_7)
  {
  case 128:
   FUNC_2();
  break;
  case 129:
   if(VAR_5 < 1)
    FUNC_1(VAR_0, "VM_BLOCK_COPY failed due to corrupted opStack");

   FUNC_3(VAR_4[(VAR_5 - 1)], VAR_4[VAR_5], VAR_3);
  break;
  default:
   FUNC_1(VAR_0, "Unknown VM operation %d", VAR_7);
  break;
  }
 }

 VAR_2 = VAR_8;
}
