
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pp_hwmgr {int * device; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct pp_hwmgr*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct pp_hwmgr *VAR_2,
  uint32_t VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 int VAR_6;

 if (VAR_2 == ((void*)0) || VAR_2->device == ((void*)0))
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_5);
 if (!VAR_6)
  FUNC_0(VAR_2->device, VAR_1, VAR_4);

 return VAR_6;
}
