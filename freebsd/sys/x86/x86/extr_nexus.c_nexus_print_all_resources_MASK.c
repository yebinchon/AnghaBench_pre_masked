
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct nexus_device {struct resource_list nx_resources; } ;
typedef int device_t ;


 struct nexus_device* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct resource_list*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct resource_list*,char*,int ,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 struct nexus_device *VAR_4 = FUNC_0(VAR_3);
 struct resource_list *VAR_5 = &VAR_4->nx_resources;
 int VAR_6 = 0;

 if (FUNC_1(VAR_5))
  VAR_6 += FUNC_2(" at");

 VAR_6 += FUNC_3(VAR_5, "port", VAR_0, "%#jx");
 VAR_6 += FUNC_3(VAR_5, "iomem", VAR_2, "%#jx");
 VAR_6 += FUNC_3(VAR_5, "irq", VAR_1, "%jd");

 return VAR_6;
}
