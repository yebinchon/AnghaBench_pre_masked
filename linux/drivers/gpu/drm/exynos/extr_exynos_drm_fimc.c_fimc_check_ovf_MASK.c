
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_context {int id; int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct fimc_context*,int ) ;
 int FUNC_3 (struct fimc_context*,int ,int) ;

__attribute__((used)) static bool FUNC_4(struct fimc_context *VAR_8)
{
 u32 VAR_9, VAR_10;

 VAR_9 = FUNC_2(VAR_8, VAR_0);
 VAR_10 = VAR_3 | VAR_1 |
  VAR_2;

 FUNC_0(VAR_8->dev, "flag[0x%x]\n", VAR_10);

 if (VAR_9 & VAR_10) {
  FUNC_3(VAR_8, VAR_4,
   VAR_7 | VAR_5 |
   VAR_6);

  FUNC_1(VAR_8->dev,
         "occurred overflow at %d, status 0x%x.\n",
         VAR_8->id, VAR_9);
  return 1;
 }

 return 0;
}
