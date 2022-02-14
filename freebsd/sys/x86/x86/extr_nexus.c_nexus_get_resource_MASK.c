
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list_entry {int count; int start; } ;
struct resource_list {int dummy; } ;
struct nexus_device {struct resource_list nx_resources; } ;
typedef int rman_res_t ;
typedef int device_t ;


 struct nexus_device* FUNC_0 (int ) ;
 int VAR_0 ;
 struct resource_list_entry* FUNC_1 (struct resource_list*,int,int) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, device_t VAR_2, int VAR_3, int VAR_4,
    rman_res_t *VAR_5, rman_res_t *VAR_6)
{
 struct nexus_device *VAR_7 = FUNC_0(VAR_2);
 struct resource_list *VAR_8 = &VAR_7->nx_resources;
 struct resource_list_entry *VAR_9;

 VAR_9 = FUNC_1(VAR_8, VAR_3, VAR_4);
 if (!VAR_9)
  return(VAR_0);
 if (VAR_5)
  *VAR_5 = VAR_9->start;
 if (VAR_6)
  *VAR_6 = VAR_9->count;
 return(0);
}
