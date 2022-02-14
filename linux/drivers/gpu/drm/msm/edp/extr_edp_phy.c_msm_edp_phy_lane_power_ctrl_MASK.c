
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct edp_phy {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

void FUNC_2(struct edp_phy *VAR_1, bool VAR_2, u32 VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;

 if (VAR_2)
  VAR_5 = 0;
 else
  VAR_5 = 0x7;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_1(VAR_1->base + FUNC_0(VAR_4) , VAR_5);


 VAR_5 = 0x7;
 for (VAR_4 = VAR_3; VAR_4 < VAR_0; VAR_4++)
  FUNC_1(VAR_1->base + FUNC_0(VAR_4) , VAR_5);
}
