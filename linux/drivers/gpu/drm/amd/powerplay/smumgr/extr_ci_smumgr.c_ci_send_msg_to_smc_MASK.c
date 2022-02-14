
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pp_hwmgr {int device; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct pp_hwmgr *VAR_4, uint16_t VAR_5)
{
 int VAR_6;

 FUNC_2(VAR_4->device, VAR_3, 0);
 FUNC_2(VAR_4->device, VAR_2, VAR_5);

 FUNC_1(VAR_4, VAR_1, VAR_0, 0);

 VAR_6 = FUNC_0(VAR_4->device, VAR_1, VAR_0);

 if (VAR_6 != 1)
  FUNC_3("\n failed to send message %x ret is %d\n", VAR_5, VAR_6);

 return 0;
}
