
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_int ;
struct resource_list {int dummy; } ;
struct resource {int dummy; } ;
struct isa_device {struct resource_list id_resources; } ;
typedef int device_t ;


 struct isa_device* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;



 int FUNC_2 (int ) ;
 int FUNC_3 (struct resource_list*,int,int,int ,int ,int ) ;
 struct resource* FUNC_4 (struct resource_list*,int ,int ,int,int*,int ,int ,int ,int ) ;
 int * FUNC_5 (struct resource_list*,int,int) ;

struct resource *
FUNC_6(device_t VAR_3, device_t VAR_4, int VAR_5, int *VAR_6,
    u_long VAR_7, u_long VAR_8, u_long VAR_9, u_int VAR_10)
{
 struct isa_device* VAR_11 = FUNC_0(VAR_4);
 struct resource_list *VAR_12 = &VAR_11->id_resources;
 int VAR_13, VAR_14, VAR_15;

 VAR_13 = FUNC_1(VAR_7, VAR_8) ? 1 : 0;
 VAR_14 = (FUNC_2(VAR_4) != VAR_3) ? 1 : 0;

 if (!VAR_14 && !VAR_13 &&
     FUNC_5(VAR_12, VAR_5, *VAR_6) == ((void*)0)) {
  switch (VAR_5) {
  case 130: VAR_15 = VAR_2; break;
  case 129: VAR_15 = VAR_0; break;
  case 128: VAR_15 = VAR_1; break;
  default: VAR_15 = 0; break;
  }
  if (*VAR_6 < 0 || *VAR_6 >= VAR_15)
   return (((void*)0));

  FUNC_3(VAR_12, VAR_5, *VAR_6, VAR_7, VAR_8, VAR_9);
 }

 return (FUNC_4(VAR_12, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
     VAR_9, VAR_10));
}
