
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu7_hwmgr {int static_screen_threshold; int static_screen_threshold_unit; } ;
struct pp_hwmgr {int device; scalar_t__ backend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(
       struct pp_hwmgr *VAR_4)
{
 struct smu7_hwmgr *VAR_5 = (struct smu7_hwmgr *)(VAR_4->backend);


 FUNC_0(VAR_4->device, VAR_0,
   VAR_1, VAR_3,
   VAR_5->static_screen_threshold_unit);

 FUNC_0(VAR_4->device, VAR_0,
   VAR_1, VAR_2,
   VAR_5->static_screen_threshold);

 return 0;
}
