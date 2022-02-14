
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_driver {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct device_driver *VAR_2, char *VAR_3)
{
 return FUNC_0(VAR_3, VAR_0,
   "PPC440SP(e) RAID-6 capabilities are %sABLED.\n",
   VAR_1 ? "EN" : "DIS");
}
