
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpga_manager {int dev; int ref_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct fpga_manager *VAR_1)
{
 if (!FUNC_1(&VAR_1->ref_mutex)) {
  FUNC_0(&VAR_1->dev, "FPGA manager is in use.\n");
  return -VAR_0;
 }

 return 0;
}
