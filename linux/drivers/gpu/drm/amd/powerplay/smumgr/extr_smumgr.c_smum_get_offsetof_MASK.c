
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct pp_hwmgr {TYPE_1__* smumgr_funcs; } ;
struct TYPE_2__ {int (* get_offsetof ) (int ,int ) ;} ;


 int FUNC_0 (int ,int ) ;

uint32_t FUNC_1(struct pp_hwmgr *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 if (((void*)0) != VAR_0->smumgr_funcs->get_offsetof)
  return VAR_0->smumgr_funcs->get_offsetof(VAR_1, VAR_2);

 return 0;
}
