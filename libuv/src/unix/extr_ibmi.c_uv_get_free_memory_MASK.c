
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_3__ {unsigned long long main_storage_size; unsigned long long current_unprotected_storage_used; } ;
typedef TYPE_1__ SSTS0200 ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

uint64_t FUNC_1(void) {
  SSTS0200 VAR_0;

  if (FUNC_0(&VAR_0))
    return 0;


  uint64_t VAR_1 = VAR_0.main_storage_size;




  uint64_t VAR_2 =
    VAR_0.current_unprotected_storage_used * 1024ULL;

  uint64_t VAR_3 =
    (VAR_1 - VAR_2) * 1024ULL;

  return VAR_3 < 0 ? 0 : VAR_3;
}
