
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int clkr; } ;
struct TYPE_9__ {int clkr; } ;
struct TYPE_8__ {int clkr; } ;
struct TYPE_7__ {int parent_map; int freq_tbl; } ;
struct TYPE_6__ {int num_parents; int parent_names; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int ** VAR_5 ;
 TYPE_5__ VAR_6 ;
 TYPE_4__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__ VAR_10 ;
 int VAR_11 ;
 TYPE_2__ VAR_12 ;
 TYPE_1__ VAR_13 ;

__attribute__((used)) static void FUNC_0(void)
{
 VAR_13.parent_names = VAR_8;
 VAR_13.num_parents = 3;
 VAR_12.freq_tbl = VAR_4;
 VAR_12.parent_map = VAR_9;

 VAR_5[VAR_2] = &VAR_10;
 VAR_5[VAR_3] = &VAR_11;
 VAR_5[VAR_1] =
  &VAR_7.clkr;
 VAR_5[VAR_0] =
  &VAR_6.clkr;
}
