
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsi_data {int dev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct dsi_data *VAR_0)
{
 int VAR_1;

 FUNC_0("dsi_runtime_get\n");

 VAR_1 = FUNC_2(VAR_0->dev);
 FUNC_1(VAR_1 < 0);
 return VAR_1 < 0 ? VAR_1 : 0;
}
