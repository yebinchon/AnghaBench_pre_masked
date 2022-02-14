
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* ref; int value; } ;
typedef TYPE_1__ CheckItem ;



void FUNC_0(CheckItem* VAR_0, bool VAR_1) {
   if (VAR_0->ref)
      *(VAR_0->ref) = VAR_1;
   else
      VAR_0->value = VAR_1;
}
