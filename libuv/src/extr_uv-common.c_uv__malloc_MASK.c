
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* (* local_malloc ) (size_t) ;} ;


 void* FUNC_0 (size_t) ;
 TYPE_1__ VAR_0 ;

void* FUNC_1(size_t VAR_1) {
  if (VAR_1 > 0)
    return VAR_0.local_malloc(VAR_1);
  return ((void*)0);
}
