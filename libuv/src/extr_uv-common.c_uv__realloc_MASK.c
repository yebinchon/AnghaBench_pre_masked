
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* (* local_realloc ) (void*,size_t) ;} ;


 void* FUNC_0 (void*,size_t) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (void*) ;

void* FUNC_2(void* VAR_1, size_t VAR_2) {
  if (VAR_2 > 0)
    return VAR_0.local_realloc(VAR_1, VAR_2);
  FUNC_1(VAR_1);
  return ((void*)0);
}
