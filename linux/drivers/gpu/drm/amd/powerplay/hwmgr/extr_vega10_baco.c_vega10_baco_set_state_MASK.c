
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int dummy; } ;
typedef enum BACO_STATE { ____Placeholder_BACO_STATE } BACO_STATE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (struct pp_hwmgr*,int*) ;
 scalar_t__ FUNC_3 (struct pp_hwmgr*,int ) ;
 scalar_t__ FUNC_4 (struct pp_hwmgr*,int ,int ) ;

int FUNC_5(struct pp_hwmgr *VAR_8, enum BACO_STATE VAR_9)
{
 enum BACO_STATE VAR_10;

 FUNC_2(VAR_8, &VAR_10);

 if (VAR_10 == VAR_9)

  return 0;

 if (VAR_9 == VAR_0) {
  if (FUNC_4(VAR_8, VAR_7,
          FUNC_0(VAR_7))) {
   if (FUNC_3(VAR_8, VAR_3))
    return -VAR_2;

   if (FUNC_4(VAR_8, VAR_5,
         FUNC_0(VAR_5)))
    return 0;
  }
 } else if (VAR_9 == VAR_1) {

  FUNC_1(20);

  if (FUNC_4(VAR_8, VAR_6,
          FUNC_0(VAR_6))) {
   if (FUNC_4(VAR_8, VAR_4,
           FUNC_0(VAR_4)))
    return 0;
  }
 }

 return -VAR_2;
}
