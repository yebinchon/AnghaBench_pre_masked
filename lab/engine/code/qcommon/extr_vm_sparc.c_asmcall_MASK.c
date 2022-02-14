
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int programStack; int (* systemCall ) (intptr_t*) ;scalar_t__ dataBase; } ;
typedef TYPE_1__ vm_t ;
typedef int byte ;


 int FUNC_0 (intptr_t*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (intptr_t*) ;
 int FUNC_2 (intptr_t*) ;

__attribute__((used)) static int FUNC_3(int VAR_2, int VAR_3)
{
 vm_t *VAR_4 = VAR_1;
 int VAR_5, VAR_6;

 VAR_1->programStack = VAR_3 - 4;
 if (sizeof(intptr_t) == sizeof(int)) {
  intptr_t *VAR_7 = (intptr_t *)((byte *)VAR_1->dataBase + VAR_3 + 4);
  VAR_7[0] = -1 - VAR_2;
  VAR_6 = VAR_1->systemCall(VAR_7);
 } else {
  intptr_t VAR_8[VAR_0];

  VAR_8[0] = -1 - VAR_2;
  int *VAR_9 = (int *)((byte *)VAR_1->dataBase + VAR_3 + 4);
  for( VAR_5 = 1; VAR_5 < FUNC_0(VAR_8); VAR_5++ )
   VAR_8[VAR_5] = VAR_9[VAR_5];

  VAR_6 = VAR_1->systemCall(VAR_8);
 }

 VAR_1 = VAR_4;

 return VAR_6;
}
