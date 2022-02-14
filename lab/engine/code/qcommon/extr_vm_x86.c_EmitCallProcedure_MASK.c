
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {intptr_t instructionCount; scalar_t__ instructionPointers; } ;
typedef TYPE_1__ vm_t ;


 int FUNC_0 (intptr_t) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_0 ;

int FUNC_8(vm_t *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5;

 FUNC_4("8B 04 9F");
 FUNC_6(1);
 FUNC_4("85 C0");


 FUNC_4("7C");
 VAR_3 = VAR_0++;



 FUNC_4("81 F8");
 FUNC_0(VAR_1->instructionCount);


 FUNC_4("73");
 VAR_4 = VAR_0++;




 FUNC_4("FF 14 85");
 FUNC_0((intptr_t) VAR_1->instructionPointers);

 FUNC_4("8B 04 9F");
 FUNC_4("C3");


 FUNC_5(VAR_4);
 FUNC_1(VAR_1, VAR_2);




 FUNC_5(VAR_3);
 VAR_5 = VAR_0;

 FUNC_2(VAR_1, VAR_2);


 FUNC_7(1);
 FUNC_4("C3");

 return VAR_5;
}
