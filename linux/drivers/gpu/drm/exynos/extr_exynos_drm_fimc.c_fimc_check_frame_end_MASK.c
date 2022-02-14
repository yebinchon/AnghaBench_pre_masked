
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_context {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct fimc_context*,int ) ;
 int FUNC_2 (struct fimc_context*,int,int ) ;

__attribute__((used)) static bool FUNC_3(struct fimc_context *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0);

 FUNC_0(VAR_2->dev, "cfg[0x%x]\n", VAR_3);

 if (!(VAR_3 & VAR_1))
  return 0;

 VAR_3 &= ~(VAR_1);
 FUNC_2(VAR_2, VAR_3, VAR_0);

 return 1;
}
