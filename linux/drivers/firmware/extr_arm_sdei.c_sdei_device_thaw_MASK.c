
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *,int *) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_3();
 if (VAR_4) {
  FUNC_1("Failed to re-register shared events...\n");
  FUNC_2();
  return VAR_4;
 }

 VAR_4 = FUNC_0(VAR_0, "SDEI",
    &VAR_2, &VAR_1);
 if (VAR_4)
  FUNC_1("Failed to re-register CPU hotplug notifier...\n");

 return VAR_4;
}
