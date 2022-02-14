
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ baseaddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int,scalar_t__) ;

void FUNC_2(u32 VAR_4, bool VAR_5)
{
 u32 VAR_6;

 if (VAR_4 >= VAR_2)
  return;

 VAR_6 = FUNC_0(VAR_4) ? VAR_0 : VAR_1;
 FUNC_1(VAR_5, VAR_3->baseaddr + VAR_6);
}
