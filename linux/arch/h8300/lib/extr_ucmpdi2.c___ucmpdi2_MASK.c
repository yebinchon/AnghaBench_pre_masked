
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int word_type ;
typedef scalar_t__ UWtype ;
struct TYPE_3__ {scalar_t__ low; scalar_t__ high; } ;
struct TYPE_4__ {TYPE_1__ s; int ll; } ;
typedef TYPE_2__ DWunion ;
typedef int DWtype ;



word_type FUNC_0(DWtype VAR_0, DWtype VAR_1)
{
 const DWunion VAR_2 = {.ll = VAR_0};
 const DWunion VAR_3 = {.ll = VAR_1};

 if ((UWtype) VAR_2.s.high < (UWtype) VAR_3.s.high)
  return 0;
 else if ((UWtype) VAR_2.s.high > (UWtype) VAR_3.s.high)
  return 2;
 if ((UWtype) VAR_2.s.low < (UWtype) VAR_3.s.low)
  return 0;
 else if ((UWtype) VAR_2.s.low > (UWtype) VAR_3.s.low)
  return 2;
 return 1;
}
