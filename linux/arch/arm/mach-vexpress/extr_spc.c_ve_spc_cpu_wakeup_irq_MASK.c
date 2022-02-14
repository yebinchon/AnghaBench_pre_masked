
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ baseaddr; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;

void FUNC_4(u32 VAR_3, u32 VAR_4, bool VAR_5)
{
 u32 VAR_6, VAR_7;

 if (VAR_3 >= VAR_0)
  return;

 VAR_6 = FUNC_0(VAR_4);

 if (!FUNC_1(VAR_3))
  VAR_6 <<= 4;

 VAR_7 = FUNC_2(VAR_2->baseaddr + VAR_1);

 if (VAR_5)
  VAR_7 |= VAR_6;
 else
  VAR_7 &= ~VAR_6;

 FUNC_3(VAR_7, VAR_2->baseaddr + VAR_1);
}
