
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int device; } ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*,int ,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct pp_hwmgr*) ;
 int FUNC_3 (struct pp_hwmgr*) ;
 int VAR_7 ;
 int FUNC_4 (char*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_5(struct pp_hwmgr *VAR_10)
{
 if (FUNC_2(VAR_10)) {
  FUNC_4("smc is running, no need to load smc firmware\n");
  return 0;
 }
 FUNC_0(VAR_10, VAR_2, VAR_1,
   VAR_6, 1);
 FUNC_1(VAR_10->device, VAR_0, VAR_4,
   VAR_8, 1);

 FUNC_1(VAR_10->device, VAR_0, VAR_3, VAR_7, 1);
 FUNC_1(VAR_10->device, VAR_0, VAR_5, VAR_9, 1);
 return FUNC_3(VAR_10);
}
