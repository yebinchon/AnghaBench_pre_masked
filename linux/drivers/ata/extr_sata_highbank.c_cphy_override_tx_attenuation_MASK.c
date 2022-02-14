
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_2__ {size_t lane_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (size_t,scalar_t__) ;
 int FUNC_1 (size_t,scalar_t__,int) ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static void FUNC_2(u8 VAR_7, u32 VAR_8)
{
 u8 VAR_9 = VAR_6[VAR_7].lane_mapping;
 u32 VAR_10;

 if (VAR_8 & 0x8)
  return;

 VAR_10 = FUNC_0(VAR_7, VAR_3 + VAR_9 * VAR_5);
 VAR_10 &= ~VAR_2;
 FUNC_1(VAR_7, VAR_4 + VAR_9 * VAR_5, VAR_10);

 VAR_10 |= VAR_2;
 FUNC_1(VAR_7, VAR_4 + VAR_9 * VAR_5, VAR_10);

 VAR_10 |= (VAR_8 << VAR_1) & VAR_0;
 FUNC_1(VAR_7, VAR_4 + VAR_9 * VAR_5, VAR_10);
}
