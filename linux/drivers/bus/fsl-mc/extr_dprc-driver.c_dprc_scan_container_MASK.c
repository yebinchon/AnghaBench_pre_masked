
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_device {int dummy; } ;
struct fsl_mc_bus {int scan_mutex; } ;


 int FUNC_0 (struct fsl_mc_device*,int *) ;
 int FUNC_1 (struct fsl_mc_device*) ;
 int FUNC_2 (struct fsl_mc_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct fsl_mc_bus* FUNC_5 (struct fsl_mc_device*) ;

__attribute__((used)) static int FUNC_6(struct fsl_mc_device *VAR_0)
{
 int VAR_1;
 struct fsl_mc_bus *VAR_2 = FUNC_5(VAR_0);

 FUNC_2(VAR_0);




 FUNC_3(&VAR_2->scan_mutex);
 VAR_1 = FUNC_0(VAR_0, ((void*)0));
 FUNC_4(&VAR_2->scan_mutex);
 if (VAR_1 < 0) {
  FUNC_1(VAR_0);
  return VAR_1;
 }

 return 0;
}
