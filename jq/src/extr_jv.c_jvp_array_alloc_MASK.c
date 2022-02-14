
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; } ;
struct TYPE_6__ {unsigned int alloc_length; scalar_t__ length; TYPE_1__ refcnt; } ;
typedef TYPE_2__ jvp_array ;
typedef int jv ;


 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static jvp_array* FUNC_1(unsigned VAR_0) {
  jvp_array* VAR_1 = FUNC_0(sizeof(jvp_array) + sizeof(jv) * VAR_0);
  VAR_1->refcnt.count = 1;
  VAR_1->length = 0;
  VAR_1->alloc_length = VAR_0;
  return VAR_1;
}
