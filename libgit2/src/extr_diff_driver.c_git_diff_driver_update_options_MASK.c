
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int binary_flags; int other_flags; } ;
typedef TYPE_1__ git_diff_driver ;


 int VAR_0 ;

void FUNC_0(
 uint32_t *VAR_1, git_diff_driver *VAR_2)
{
 if ((*VAR_1 & VAR_0) == 0)
  *VAR_1 |= VAR_2->binary_flags;

 *VAR_1 |= VAR_2->other_flags;
}
