
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {int not_vf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*,int,int,int,int*) ;

__attribute__((used)) static bool FUNC_1(struct pp_hwmgr *VAR_2)
{

 uint32_t VAR_3 = 0;
 uint32_t VAR_4 = (1 << ((VAR_1 - VAR_0) + 1)) - 1;

 if (!VAR_2->not_vf)
  return 0;

 if (!FUNC_0(VAR_2, VAR_0, VAR_1,
   VAR_4, &VAR_3)) {
  if (VAR_3)
   return 1;
 }
 return 0;
}
