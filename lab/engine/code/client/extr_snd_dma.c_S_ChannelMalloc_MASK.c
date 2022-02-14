
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int allocTime; } ;
typedef TYPE_1__ channel_t ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;

channel_t* FUNC_1( void ) {
 channel_t *VAR_1;
 if (VAR_0 == ((void*)0)) {
  return ((void*)0);
 }
 VAR_1 = VAR_0;
 VAR_0 = *(channel_t **)VAR_0;
 VAR_1->allocTime = FUNC_0();
 return VAR_1;
}
