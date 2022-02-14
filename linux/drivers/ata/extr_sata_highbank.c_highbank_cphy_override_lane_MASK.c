
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_2__ {size_t lane_mapping; int tx_atten; int * phy_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t,scalar_t__) ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (size_t,int ) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(u8 VAR_4)
{
 u8 VAR_5 = VAR_3[VAR_4].lane_mapping;
 u32 VAR_6, VAR_7 = 0;

 if (FUNC_3(VAR_3[VAR_4].phy_base == ((void*)0)))
  return;
 do {
  VAR_6 = FUNC_0(VAR_4, VAR_0 +
      VAR_5 * VAR_2);
 } while ((VAR_6 & VAR_1) && (VAR_7++ < 1000));
 FUNC_1(VAR_4, 3);
 FUNC_2(VAR_4, VAR_3[VAR_4].tx_atten);
}
