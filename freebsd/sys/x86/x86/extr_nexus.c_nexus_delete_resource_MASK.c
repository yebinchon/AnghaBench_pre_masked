
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct nexus_device {struct resource_list nx_resources; } ;
typedef int device_t ;


 struct nexus_device* FUNC_0 (int ) ;
 int FUNC_1 (struct resource_list*,int,int) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, device_t VAR_1, int VAR_2, int VAR_3)
{
 struct nexus_device *VAR_4 = FUNC_0(VAR_1);
 struct resource_list *VAR_5 = &VAR_4->nx_resources;

 FUNC_1(VAR_5, VAR_2, VAR_3);
}
