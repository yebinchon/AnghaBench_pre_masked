
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int max_pages; int used_pages; } ;
typedef TYPE_1__ system_info ;
typedef scalar_t__ status_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

uint64_t FUNC_1(void) {
  status_t VAR_2;
  system_info VAR_3;

  VAR_2 = FUNC_0(&VAR_3);
  if (VAR_2 != VAR_0)
    return 0;

  return (VAR_3.max_pages - VAR_3.used_pages) * VAR_1;
}
