
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 struct resource* FUNC_0 (int ,int ,int,int*,int ,int ,int ,int ) ;
 int FUNC_1 (int,int ,int ,int ) ;
 struct resource* FUNC_2 (int ,int ,int*,int ,int ,int ,int ) ;

struct resource *
FUNC_3(device_t VAR_1, device_t VAR_2, int VAR_3, int *VAR_4,
    rman_res_t VAR_5, rman_res_t VAR_6, rman_res_t VAR_7, u_int VAR_8)
{






 VAR_5 = FUNC_1(VAR_3, VAR_5, VAR_6, VAR_7);
 return (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
     VAR_7, VAR_8));
}
