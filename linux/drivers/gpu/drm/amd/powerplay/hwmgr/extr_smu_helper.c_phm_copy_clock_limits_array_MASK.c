
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (int,int ) ;
 int FUNC_1 (int const) ;

int FUNC_2(
 struct pp_hwmgr *VAR_2,
 uint32_t **VAR_3,
 const uint32_t *VAR_4,
 uint32_t VAR_5)
{
 uint32_t VAR_6, VAR_7;
 uint32_t *VAR_8;

 VAR_6 = sizeof(uint32_t) * VAR_5;
 VAR_8 = FUNC_0(VAR_6, VAR_1);
 if (((void*)0) == VAR_8)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
  VAR_8[VAR_7] = FUNC_1(VAR_4[VAR_7]);

 *VAR_3 = VAR_8;

 return 0;
}
