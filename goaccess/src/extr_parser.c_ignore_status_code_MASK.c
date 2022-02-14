
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ignore_status_idx; int ignore_status; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char const*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_1 (const char *VAR_1)
{
  if (VAR_0.ignore_status_idx == 0)
    return 0;

  if (FUNC_0 (VAR_1, VAR_0.ignore_status, VAR_0.ignore_status_idx) != -1)
    return 1;
  return 0;
}
