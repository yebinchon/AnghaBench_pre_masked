
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long high; scalar_t__ low; } ;
struct TYPE_4__ {long long ll; TYPE_1__ s; } ;
typedef TYPE_2__ DWunion ;


 long long FUNC_0 (scalar_t__,scalar_t__) ;

long long FUNC_1(long long VAR_0, long long VAR_1)
{
 const DWunion VAR_2 = {.ll = VAR_0};
 const DWunion VAR_3 = {.ll = VAR_1};
 DWunion VAR_4 = {.ll = FUNC_0(VAR_2.s.low, VAR_3.s.low)};

 VAR_4.s.high += ((unsigned long) VAR_2.s.low * (unsigned long) VAR_3.s.high
  + (unsigned long) VAR_2.s.high * (unsigned long) VAR_3.s.low);

 return VAR_4.ll;
}
