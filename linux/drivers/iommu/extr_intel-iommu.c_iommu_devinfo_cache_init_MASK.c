
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_domain_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int ,int ,int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static inline int FUNC_2(void)
{
 int VAR_3 = 0;

 VAR_2 = FUNC_0("iommu_devinfo",
      sizeof(struct device_domain_info),
      0,
      VAR_1,
      ((void*)0));
 if (!VAR_2) {
  FUNC_1("Couldn't create devinfo cache\n");
  VAR_3 = -VAR_0;
 }

 return VAR_3;
}
