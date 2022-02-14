
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pp_hwmgr {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct pp_hwmgr*,int ) ;
 int FUNC_5 (struct pp_hwmgr*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct pp_hwmgr *VAR_7, u32 *VAR_8)
{
 int VAR_9;
 u32 VAR_10 = 0;

 if (!VAR_8)
  return -VAR_1;

 FUNC_5(VAR_7, VAR_2, 0);
 VAR_10 = FUNC_1(VAR_7->device, VAR_6);
 *VAR_8 = VAR_10;

 if (VAR_10 != 0)
  return 0;

 FUNC_4(VAR_7, VAR_4);
 FUNC_2(VAR_7->device, VAR_0,
       VAR_5, 0);

 for (VAR_9 = 0; VAR_9 < 10; VAR_9++) {
  FUNC_3(500);
  FUNC_4(VAR_7, VAR_3);
  VAR_10 = FUNC_0(VAR_7->device,
      VAR_0,
      VAR_5);
  if (VAR_10 != 0)
   break;
 }
 *VAR_8 = VAR_10;

 return 0;
}
