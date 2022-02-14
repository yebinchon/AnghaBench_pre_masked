
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ata_device {struct device tdev; } ;


 int FUNC_0 (struct ata_device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct ata_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->tdev;

 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 FUNC_0(VAR_0);
}
