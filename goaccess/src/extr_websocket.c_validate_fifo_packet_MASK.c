
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int max_frm_size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int
FUNC_1 (uint32_t VAR_4, uint32_t VAR_5, int VAR_6)
{
  if (VAR_4 > VAR_0) {
    FUNC_0 (("Invalid listener\n"));
    return 1;
  }

  if (VAR_5 != VAR_2 && VAR_5 != VAR_1) {
    FUNC_0 (("Invalid fifo packet type\n"));
    return 1;
  }

  if (VAR_6 > VAR_3.max_frm_size) {
    FUNC_0 (("Invalid fifo packet size\n"));
    return 1;
  }

  return 0;
}
