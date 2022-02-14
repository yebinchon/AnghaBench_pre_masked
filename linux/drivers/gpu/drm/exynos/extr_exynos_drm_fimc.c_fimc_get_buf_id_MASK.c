
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_context {int dev; } ;


 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct fimc_context*,int ) ;

__attribute__((used)) static int FUNC_5(struct fimc_context *VAR_2)
{
 u32 VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = FUNC_4(VAR_2, VAR_1);
 VAR_4 = FUNC_2(VAR_3);

 if (VAR_4 == 0)
  VAR_4 = FUNC_3(VAR_3);

 FUNC_0(VAR_2->dev, "present[%d]before[%d]\n",
     FUNC_3(VAR_3),
     FUNC_2(VAR_3));

 if (VAR_4 == 0) {
  FUNC_1(VAR_2->dev, "failed to get frame count.\n");
  return -VAR_0;
 }

 VAR_5 = VAR_4 - 1;
 FUNC_0(VAR_2->dev, "buf_id[%d]\n", VAR_5);

 return VAR_5;
}
