
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_link {int supplier; int consumer; int rpm_active; } ;


 int FUNC_0 (struct device_link*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct device_link *VAR_0)
{
 while (FUNC_3(&VAR_0->rpm_active))
  FUNC_1(VAR_0->supplier);

 FUNC_2(VAR_0->consumer);
 FUNC_2(VAR_0->supplier);
 FUNC_0(VAR_0);
}
