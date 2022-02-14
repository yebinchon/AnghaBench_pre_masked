
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2,
  uint32_t *VAR_3)
{
 uint32_t VAR_4;

 if (!VAR_3)
  return -VAR_0;

 FUNC_1(VAR_2, VAR_1);
 VAR_4 = FUNC_0(VAR_2);


 *VAR_3 = VAR_4 << 8;

 return 0;
}
