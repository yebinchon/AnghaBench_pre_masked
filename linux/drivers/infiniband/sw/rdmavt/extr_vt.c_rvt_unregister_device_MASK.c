
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_dev_info {int ibdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rvt_dev_info*) ;
 int FUNC_2 (struct rvt_dev_info*) ;
 int FUNC_3 (struct rvt_dev_info*) ;
 int FUNC_4 (struct rvt_dev_info*) ;
 int FUNC_5 (struct rvt_dev_info*,char*) ;

void FUNC_6(struct rvt_dev_info *VAR_0)
{
 FUNC_5(VAR_0, "Driver is unregistering.");
 if (!VAR_0)
  return;

 FUNC_1(VAR_0);

 FUNC_0(&VAR_0->ibdev);
 FUNC_4(VAR_0);
 FUNC_2(VAR_0);
 FUNC_3(VAR_0);
}
