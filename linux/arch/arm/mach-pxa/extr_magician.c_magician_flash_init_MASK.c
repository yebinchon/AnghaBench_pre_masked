
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 int VAR_2 = FUNC_2(VAR_0, "flash Vpp enable");

 if (VAR_2) {
  FUNC_3("Cannot request flash enable GPIO (%i)\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_0(VAR_0, 1);
 if (VAR_2) {
  FUNC_3("Cannot set direction for flash enable (%i)\n", VAR_2);
  FUNC_1(VAR_0);
 }

 return VAR_2;
}
