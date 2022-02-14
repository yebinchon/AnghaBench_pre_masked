
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_smd_rpm_req {int value; int nbytes; int key; } ;
struct clk_smd_rpm {int rpm_key; int rpm_clk_id; int rpm_res_type; int rpm; int branch; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,struct clk_smd_rpm_req*,int) ;

__attribute__((used)) static int FUNC_2(struct clk_smd_rpm *VAR_3)
{
 int VAR_4;
 struct clk_smd_rpm_req VAR_5 = {
  .key = FUNC_0(VAR_3->rpm_key),
  .nbytes = FUNC_0(sizeof(u32)),
  .value = FUNC_0(VAR_3->branch ? 1 : VAR_0),
 };

 VAR_4 = FUNC_1(VAR_3->rpm, VAR_1,
     VAR_3->rpm_res_type, VAR_3->rpm_clk_id, &VAR_5,
     sizeof(VAR_5));
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_1(VAR_3->rpm, VAR_2,
     VAR_3->rpm_res_type, VAR_3->rpm_clk_id, &VAR_5,
     sizeof(VAR_5));
 if (VAR_4)
  return VAR_4;

 return 0;
}
