
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_1__* Type ;
struct TYPE_15__ {scalar_t__ size; } ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_0 (TYPE_1__*) ;

Type FUNC_1(Type VAR_9, Type VAR_10) {

 if (VAR_9 == VAR_3 || VAR_10 == VAR_3) return VAR_3;
 if (VAR_9 == VAR_0 || VAR_10 == VAR_0) return VAR_0;
 if (VAR_9 == VAR_1 || VAR_10 == VAR_1) return VAR_1;
 if (VAR_9 == VAR_7 || VAR_10 == VAR_7) return VAR_7;
 if (VAR_9 == VAR_4 || VAR_10 == VAR_4) return VAR_4;
 if (VAR_9 == VAR_6 || VAR_10 == VAR_6) return VAR_6;
 if ((VAR_9 == VAR_5 && VAR_10 == VAR_8)
 || (VAR_9 == VAR_8 && VAR_10 == VAR_5)) {
  if (VAR_5->size > VAR_8->size)
   return VAR_5;
  else
   return VAR_6;
 }
 if (VAR_9 == VAR_5 || VAR_10 == VAR_5) return VAR_5;
 if (VAR_9 == VAR_8 || VAR_10 == VAR_8) return VAR_8;
 return VAR_2;

}
