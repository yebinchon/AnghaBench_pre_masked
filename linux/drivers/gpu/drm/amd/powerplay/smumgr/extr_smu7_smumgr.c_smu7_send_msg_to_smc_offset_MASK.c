
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int device; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*) ;

int FUNC_4(struct pp_hwmgr *VAR_5)
{
 FUNC_2(VAR_5->device, VAR_4, 0x20000);

 FUNC_2(VAR_5->device, VAR_3, VAR_0);

 FUNC_1(VAR_5, VAR_2, VAR_1, 0);

 if (1 != FUNC_0(VAR_5->device, VAR_2, VAR_1))
  FUNC_3("Failed to send Message.\n");

 return 0;
}
