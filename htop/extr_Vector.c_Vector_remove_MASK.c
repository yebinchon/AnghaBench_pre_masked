
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ owner; } ;
typedef TYPE_1__ Vector ;
typedef int Object ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_1__*,int) ;

Object* FUNC_2(Vector* VAR_0, int VAR_1) {
   Object* VAR_2 = FUNC_1(VAR_0, VAR_1);
   if (VAR_0->owner) {
      FUNC_0(VAR_2);
      return ((void*)0);
   } else
      return VAR_2;
}
