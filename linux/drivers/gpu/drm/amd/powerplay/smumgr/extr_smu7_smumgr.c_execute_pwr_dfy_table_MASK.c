
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pp_hwmgr {int device; } ;
struct TYPE_3__ {int dfy_size; int * dfy_data; int dfy_addr_lo; int dfy_addr_hi; int dfy_cntl; } ;
typedef TYPE_1__ PWR_DFY_Section ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct pp_hwmgr *VAR_4, const PWR_DFY_Section *VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_4->device, VAR_2, VAR_5->dfy_cntl);
 FUNC_0(VAR_4->device, VAR_0, VAR_5->dfy_addr_hi);
 FUNC_0(VAR_4->device, VAR_1, VAR_5->dfy_addr_lo);
 for (VAR_6 = 0; VAR_6 < VAR_5->dfy_size; VAR_6++)
  FUNC_0(VAR_4->device, VAR_3, VAR_5->dfy_data[VAR_6]);
}
