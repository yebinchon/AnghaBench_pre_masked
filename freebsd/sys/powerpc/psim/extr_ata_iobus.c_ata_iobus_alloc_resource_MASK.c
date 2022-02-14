
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;




 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 struct resource* FUNC_0 (int ,int ,int,int*,int,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int* FUNC_2 (int ) ;

struct resource *
FUNC_3(device_t VAR_6, device_t VAR_7, int VAR_8, int *VAR_9,
    rman_res_t VAR_10, rman_res_t VAR_11, rman_res_t VAR_12,
    u_int VAR_13)
{
 struct resource *VAR_14 = ((void*)0);
 int VAR_15;
 u_int *VAR_16;

 VAR_16 = FUNC_2(VAR_6);
 if (VAR_8 == VAR_3) {
  switch (*VAR_9) {
  case 128:
   VAR_15 = 0;
   VAR_10 = VAR_16[4];
   VAR_11 = VAR_10 + VAR_1 - 1;
   VAR_12 = VAR_1;
   VAR_14 = FUNC_0(FUNC_1(VAR_6), VAR_7,
       VAR_5, &VAR_15,
       VAR_10, VAR_11, VAR_12, VAR_13);
   break;

  case 129:
   VAR_15 = 0;
   VAR_10 = VAR_16[10];
   VAR_11 = VAR_10 + VAR_0 - 1;
   VAR_12 = VAR_0;
   VAR_14 = FUNC_0(FUNC_1(VAR_6), VAR_7,
       VAR_5, &VAR_15,
       VAR_10, VAR_11, VAR_12, VAR_13);
   break;

  case 130:

   break;
  }
  return (VAR_14);

 } else if (VAR_8 == VAR_4 && *VAR_9 == VAR_2) {



  return (FUNC_0(FUNC_1(VAR_6), VAR_6,
        VAR_4, VAR_9, 0, ~0, 1, VAR_13));

 } else {
  return (((void*)0));
 }
}
