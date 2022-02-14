
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
typedef int u_int ;
struct resource_list_entry {int start; int end; } ;
struct resource_list {int dummy; } ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;


 struct resource_list* FUNC_0 (int ,int ) ;
 int FUNC_1 (int,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;




 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (struct resource_list*,int,int,int ,int ,int ) ;
 struct resource* FUNC_5 (struct resource_list*,int ,int ,int,int*,int ,int ,int ,int ) ;
 struct resource_list_entry* FUNC_6 (struct resource_list*,int,int) ;

struct resource *
FUNC_7(device_t VAR_8, device_t VAR_9, int VAR_10, int *VAR_11,
    rman_res_t VAR_12, rman_res_t VAR_13, rman_res_t VAR_14, u_int VAR_15)
{



 int VAR_16 = (FUNC_3(VAR_9) != VAR_8);
 int VAR_17 = FUNC_2(VAR_12, VAR_13);
 struct resource_list *VAR_18;
 struct resource_list_entry *VAR_19;
 u_long VAR_20, VAR_21;

 VAR_18 = FUNC_0(VAR_8, VAR_9);
 if (!VAR_16 && !VAR_17) {
  VAR_19 = FUNC_6(VAR_18, VAR_10, *VAR_11);
  if (!VAR_19) {
   if (*VAR_11 < 0)
    return (((void*)0));
   switch (VAR_10) {
   case 129:
    if (*VAR_11 >= VAR_1)
     return (((void*)0));
    break;
   case 131:
    if (*VAR_11 >= VAR_0)
     return (((void*)0));
    break;
   case 128:
    if (*VAR_11 >= VAR_2)
     return (((void*)0));
    break;
   case 130:
    if (*VAR_11 >= VAR_3)
     return (((void*)0));
    break;
   default:
    return (((void*)0));
   }
   FUNC_4(VAR_18, VAR_10, *VAR_11, VAR_12, VAR_13, VAR_14);
  }
 }






 if (!VAR_16) {
  if ((VAR_19 = FUNC_6(VAR_18, VAR_10, *VAR_11)) == ((void*)0))
   return (((void*)0));
  VAR_20 = VAR_21 = 0;
  switch (VAR_10) {
  case 128:
   VAR_20 = VAR_6;
   VAR_21 = VAR_20 + VAR_7;
   break;
  case 130:
   VAR_20 = VAR_4;
   VAR_21 = VAR_20 + VAR_5;
   break;
  case 129:
   if (VAR_19->start != VAR_19->end || VAR_19->start <= 7)
    return (((void*)0));
   break;
  case 131:
   break;
  default:
   return (((void*)0));
  }
  if (VAR_10 == 128 || VAR_10 == 130) {
   if (!FUNC_1(VAR_19->start, VAR_20, VAR_21) ||
       !FUNC_1(VAR_19->end, VAR_20, VAR_21))
    return (((void*)0));
  }
 }

 return (FUNC_5(VAR_18, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
     VAR_14, VAR_15));
}
