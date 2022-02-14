
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu7_hwmgr {scalar_t__ ulv_supported; } ;
struct pp_hwmgr {scalar_t__ backend; } ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int ) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_1)
{
 struct smu7_hwmgr *VAR_2 = (struct smu7_hwmgr *)(VAR_1->backend);

 if (VAR_2->ulv_supported)
  return FUNC_0(VAR_1, VAR_0);

 return 0;
}
