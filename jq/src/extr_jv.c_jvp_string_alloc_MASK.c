
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int count; } ;
struct TYPE_6__ {scalar_t__ alloc_length; TYPE_1__ refcnt; } ;
typedef TYPE_2__ jvp_string ;


 TYPE_2__* FUNC_0 (scalar_t__) ;

__attribute__((used)) static jvp_string* FUNC_1(uint32_t VAR_0) {
  jvp_string* VAR_1 = FUNC_0(sizeof(jvp_string) + VAR_0 + 1);
  VAR_1->refcnt.count = 1;
  VAR_1->alloc_length = VAR_0;
  return VAR_1;
}
