
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_2__ {size_t lane_mapping; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (size_t,scalar_t__) ;
 int FUNC_1 (size_t,scalar_t__,int) ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static void FUNC_3(u8 VAR_8, u32 VAR_9)
{
 u8 VAR_10 = VAR_7[VAR_8].lane_mapping;
 u32 VAR_11;
 VAR_11 = FUNC_0(VAR_8, VAR_0 + VAR_10 * VAR_6);
 VAR_11 &= ~VAR_5;
 FUNC_1(VAR_8, VAR_1 + VAR_10 * VAR_6, VAR_11);

 VAR_11 |= VAR_5;
 FUNC_1(VAR_8, VAR_1 + VAR_10 * VAR_6, VAR_11);

 VAR_11 &= ~VAR_2;
 VAR_11 |= VAR_9 << VAR_4;
 FUNC_1(VAR_8, VAR_1 + VAR_10 * VAR_6, VAR_11);

 VAR_11 |= VAR_3;
 FUNC_1(VAR_8, VAR_1 + VAR_10 * VAR_6, VAR_11);

 VAR_11 &= ~VAR_3;
 FUNC_1(VAR_8, VAR_1 + VAR_10 * VAR_6, VAR_11);

 FUNC_2(15);
}
