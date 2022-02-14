
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etm_drvdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct etm_drvdata*,int ) ;
 int FUNC_1 (struct etm_drvdata*,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct etm_drvdata *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 VAR_3 &= ~VAR_1;
 FUNC_1(VAR_2, VAR_3, VAR_0);

 FUNC_3();
 FUNC_2();
}
