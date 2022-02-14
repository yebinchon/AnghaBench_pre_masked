
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_2__ {size_t phy_devs; scalar_t__ phy_base; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (size_t,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static u32 FUNC_6(u8 VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 u8 VAR_5 = VAR_1[VAR_2].phy_devs;
 FUNC_3(&VAR_0);
 FUNC_5(FUNC_1(VAR_5, VAR_3), VAR_1[VAR_2].phy_base + 0x800);
 VAR_4 = FUNC_2(VAR_1[VAR_2].phy_base + FUNC_0(VAR_3));
 FUNC_4(&VAR_0);
 return VAR_4;
}
