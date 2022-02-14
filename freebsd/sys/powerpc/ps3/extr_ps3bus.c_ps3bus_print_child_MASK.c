
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps3bus_devinfo {int resources; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct ps3bus_devinfo* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,char*,int ,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, device_t VAR_3)
{
 struct ps3bus_devinfo *VAR_4 = FUNC_2(VAR_3);
 int VAR_5 = 0;

 VAR_5 += FUNC_1(VAR_2, VAR_3);
 VAR_5 += FUNC_3(&VAR_4->resources, "mem",
     VAR_1, "%#jx");
 VAR_5 += FUNC_3(&VAR_4->resources, "irq",
     VAR_0, "%jd");

 VAR_5 += FUNC_0(VAR_2, VAR_3);

 return (VAR_5);
}
