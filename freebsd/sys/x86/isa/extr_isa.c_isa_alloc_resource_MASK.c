
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct resource_list_entry {int dummy; } ;
struct resource_list {int dummy; } ;
struct resource {int dummy; } ;
struct isa_device {struct resource_list id_resources; } ;
typedef int rman_res_t ;
typedef int device_t ;


 struct isa_device* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;




 int FUNC_2 (int ) ;
 int FUNC_3 (struct resource_list*,int,int,int ,int ,int ) ;
 struct resource* FUNC_4 (struct resource_list*,int ,int ,int,int*,int ,int ,int ,int ) ;
 struct resource_list_entry* FUNC_5 (struct resource_list*,int,int) ;

struct resource *
FUNC_6(device_t VAR_4, device_t VAR_5, int VAR_6, int *VAR_7,
     rman_res_t VAR_8, rman_res_t VAR_9, rman_res_t VAR_10, u_int VAR_11)
{



 int VAR_12 = (FUNC_2(VAR_5) != VAR_4);
 int VAR_13 = FUNC_1(VAR_8, VAR_9);
 struct isa_device* VAR_14 = FUNC_0(VAR_5);
 struct resource_list *VAR_15 = &VAR_14->id_resources;
 struct resource_list_entry *VAR_16;

 if (!VAR_12 && !VAR_13) {
  VAR_16 = FUNC_5(VAR_15, VAR_6, *VAR_7);
  if (!VAR_16) {
   if (*VAR_7 < 0)
    return 0;
   switch (VAR_6) {
   case 129:
    if (*VAR_7 >= VAR_1)
     return 0;
    break;
   case 131:
    if (*VAR_7 >= VAR_0)
     return 0;
    break;
   case 128:
    if (*VAR_7 >= VAR_2)
     return 0;
    break;
   case 130:
    if (*VAR_7 >= VAR_3)
     return 0;
    break;
   default:
    return 0;
   }
   FUNC_3(VAR_15, VAR_6, *VAR_7, VAR_8, VAR_9, VAR_10);
  }
 }

 return FUNC_4(VAR_15, VAR_4, VAR_5, VAR_6, VAR_7,
       VAR_8, VAR_9, VAR_10, VAR_11);
}
