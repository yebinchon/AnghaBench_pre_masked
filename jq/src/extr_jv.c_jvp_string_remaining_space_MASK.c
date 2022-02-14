
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ alloc_length; } ;
typedef TYPE_1__ jvp_string ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static uint32_t FUNC_2(jvp_string* VAR_0) {
  FUNC_0(VAR_0->alloc_length >= FUNC_1(VAR_0));
  uint32_t VAR_1 = VAR_0->alloc_length - FUNC_1(VAR_0);
  return VAR_1;
}
