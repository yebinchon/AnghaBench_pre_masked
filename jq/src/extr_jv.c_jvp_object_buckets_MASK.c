
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t size; } ;
typedef TYPE_1__ jv ;
struct TYPE_6__ {int * elements; } ;


 TYPE_2__* FUNC_0 (TYPE_1__) ;

__attribute__((used)) static int* FUNC_1(jv VAR_0) {
  return (int*)(&FUNC_0(VAR_0)->elements[VAR_0.size]);
}
