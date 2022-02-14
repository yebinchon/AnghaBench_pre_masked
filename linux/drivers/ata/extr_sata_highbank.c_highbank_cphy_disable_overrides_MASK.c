
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_2__ {size_t lane_mapping; int * phy_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (size_t,scalar_t__) ;
 int FUNC_1 (size_t,scalar_t__,int ) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(u8 VAR_5)
{
 u8 VAR_6 = VAR_4[VAR_5].lane_mapping;
 u32 VAR_7;
 if (FUNC_2(VAR_4[VAR_5].phy_base == ((void*)0)))
  return;
 VAR_7 = FUNC_0(VAR_5, VAR_0 + VAR_6 * VAR_3);
 VAR_7 &= ~VAR_2;
 FUNC_1(VAR_5, VAR_1 + VAR_6 * VAR_3, VAR_7);
}
