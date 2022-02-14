
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cma3000_accl_data {int dev; } ;


 int FUNC_0 (struct cma3000_accl_data*,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct cma3000_accl_data*,int ,int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct cma3000_accl_data *VAR_4)
{
 int VAR_5;


 FUNC_1(VAR_4, VAR_0, 0x02, "Reset");
 FUNC_1(VAR_4, VAR_0, 0x0A, "Reset");
 FUNC_1(VAR_4, VAR_0, 0x04, "Reset");


 FUNC_3(10);

 VAR_5 = FUNC_0(VAR_4, VAR_1, "Status");
 if (VAR_5 < 0) {
  FUNC_2(VAR_4->dev, "Reset failed\n");
  return VAR_5;
 }

 if (VAR_5 & VAR_2) {
  FUNC_2(VAR_4->dev, "Parity Error\n");
  return -VAR_3;
 }

 return 0;
}
