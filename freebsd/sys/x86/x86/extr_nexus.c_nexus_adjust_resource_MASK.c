
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rman {int dummy; } ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct rman* FUNC_0 (int) ;
 int FUNC_1 (struct resource*,int ,int ) ;
 int FUNC_2 (struct resource*,struct rman*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, device_t VAR_3, int VAR_4,
    struct resource *VAR_5, rman_res_t VAR_6, rman_res_t VAR_7)
{
 struct rman *VAR_8;

 VAR_8 = FUNC_0(VAR_4);
 if (VAR_8 == ((void*)0))
  return (VAR_1);
 if (!FUNC_2(VAR_5, VAR_8))
  return (VAR_0);
 return (FUNC_1(VAR_5, VAR_6, VAR_7));
}
