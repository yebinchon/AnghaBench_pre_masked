
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct icc_rpm_smd_req {int value; int nbytes; int key; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int,int,struct icc_rpm_smd_req*,int) ;

int FUNC_2(int VAR_2, int VAR_3, int VAR_4, u32 VAR_5)
{
 struct icc_rpm_smd_req VAR_6 = {
  .key = FUNC_0(VAR_0),
  .nbytes = FUNC_0(sizeof(u32)),
  .value = FUNC_0(VAR_5),
 };

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_6,
      sizeof(VAR_6));
}
