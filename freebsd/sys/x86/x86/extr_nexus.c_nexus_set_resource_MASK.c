
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct nexus_device {struct resource_list nx_resources; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;


 struct nexus_device* FUNC_0 (int ) ;
 int FUNC_1 (struct resource_list*,int,int,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, device_t VAR_1, int VAR_2, int VAR_3,
    rman_res_t VAR_4, rman_res_t VAR_5)
{
 struct nexus_device *VAR_6 = FUNC_0(VAR_1);
 struct resource_list *VAR_7 = &VAR_6->nx_resources;


 FUNC_1(VAR_7, VAR_2, VAR_3, VAR_4, VAR_4 + VAR_5 - 1, VAR_5);
 return(0);
}
