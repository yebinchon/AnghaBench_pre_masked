
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct pp_hwmgr*,int ,int ,int ,int) ;
 int FUNC_2 (struct pp_hwmgr*,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (char*) ;
 int VAR_16 ;
 int FUNC_6 (struct pp_hwmgr*) ;
 int FUNC_7 (struct pp_hwmgr*) ;

__attribute__((used)) static int FUNC_8(struct pp_hwmgr *VAR_17)
{
 int VAR_18;


 FUNC_3(VAR_17->device, VAR_1,
  VAR_8, VAR_16, 1);

 VAR_18 = FUNC_7(VAR_17);
 if (VAR_18)
  return VAR_18;


 FUNC_4(VAR_17->device, VAR_1,
  VAR_15, 0);


 FUNC_3(VAR_17->device, VAR_1,
  VAR_7, VAR_13, 0);


 FUNC_3(VAR_17->device, VAR_1,
  VAR_8, VAR_16, 0);


 FUNC_3(VAR_17->device, VAR_1,
  VAR_10, VAR_0, 1);


 FUNC_4(VAR_17->device, VAR_1,
  VAR_14, 0);

 FUNC_1(VAR_17, VAR_6,
  VAR_5, VAR_4, 1);




 FUNC_6(VAR_17);


 FUNC_2(VAR_17, VAR_6,
  VAR_12, VAR_9, 0);


 if (1 != FUNC_0(VAR_17->device,
    VAR_1, VAR_12, VAR_11)) {
  FUNC_5("SMU Firmware start failed\n");
  return -VAR_2;
 }


 FUNC_1(VAR_17, VAR_6,
  VAR_3, VAR_4, 1);

 return 0;
}
