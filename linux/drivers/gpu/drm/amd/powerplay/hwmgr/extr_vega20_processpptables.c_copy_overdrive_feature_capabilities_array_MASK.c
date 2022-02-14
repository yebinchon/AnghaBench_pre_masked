
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int platformCaps; } ;
struct pp_hwmgr {TYPE_1__ platform_descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (int,int ) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(
  struct pp_hwmgr *VAR_3,
  uint8_t **VAR_4,
  const uint8_t *VAR_5,
  uint8_t VAR_6)
{
 uint32_t VAR_7, VAR_8;
 uint8_t *VAR_9;
 bool VAR_10 = 0;

 VAR_7 = sizeof(uint8_t) * VAR_6;
 VAR_9 = FUNC_0(VAR_7, VAR_1);
 if (((void*)0) == VAR_9)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_9[VAR_8] = FUNC_1(VAR_5[VAR_8]);
  if (VAR_9[VAR_8])
   VAR_10 = 1;
 }

 *VAR_4 = VAR_9;

 if (VAR_10)
  FUNC_2(VAR_3->platform_descriptor.platformCaps,
    VAR_2);

 return 0;
}
