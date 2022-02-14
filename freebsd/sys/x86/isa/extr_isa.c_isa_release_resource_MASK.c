
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct resource {int dummy; } ;
struct isa_device {struct resource_list id_resources; } ;
typedef int device_t ;


 struct isa_device* FUNC_0 (int ) ;
 int FUNC_1 (struct resource_list*,int ,int ,int,int,struct resource*) ;

int
FUNC_2(device_t VAR_0, device_t VAR_1, int VAR_2, int VAR_3,
       struct resource *VAR_4)
{
 struct isa_device* VAR_5 = FUNC_0(VAR_1);
 struct resource_list *VAR_6 = &VAR_5->id_resources;

 return FUNC_1(VAR_6, VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
