
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_context {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct fimc_context*,int ) ;
 int FUNC_2 (struct fimc_context*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct fimc_context *VAR_4, bool VAR_5)
{
 u32 VAR_6;

 FUNC_0(VAR_4->dev, "enable[%d]\n", VAR_5);

 VAR_6 = FUNC_1(VAR_4, VAR_0);
 if (VAR_5) {
  VAR_6 &= ~VAR_3;
  VAR_6 |= VAR_1 | VAR_2;
 } else
  VAR_6 &= ~VAR_1;
 FUNC_2(VAR_4, VAR_6, VAR_0);
}
