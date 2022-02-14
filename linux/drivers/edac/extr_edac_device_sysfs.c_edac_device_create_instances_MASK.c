
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edac_device_ctl_info {int nr_instances; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct edac_device_ctl_info*,int) ;
 int FUNC_2 (struct edac_device_ctl_info*,int) ;

__attribute__((used)) static int FUNC_3(struct edac_device_ctl_info *VAR_0)
{
 int VAR_1, VAR_2;
 int VAR_3;

 FUNC_0(0, "\n");


 for (VAR_1 = 0; VAR_1 < VAR_0->nr_instances; VAR_1++) {
  VAR_3 = FUNC_1(VAR_0, VAR_1);
  if (VAR_3) {

   for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
    FUNC_2(VAR_0, VAR_2);
   return VAR_3;
  }
 }

 return 0;
}
