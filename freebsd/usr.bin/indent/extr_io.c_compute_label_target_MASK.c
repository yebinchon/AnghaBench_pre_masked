
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ind_size; } ;
struct TYPE_3__ {int ind_level; scalar_t__ pcase; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 char* VAR_4 ;

int
FUNC_0(void)
{
    return
 VAR_3.pcase ? (int) (VAR_0 * VAR_2.ind_size) + 1
 : *VAR_4 == '#' ? 1
 : VAR_2.ind_size * (VAR_3.ind_level - VAR_1) + 1;
}
