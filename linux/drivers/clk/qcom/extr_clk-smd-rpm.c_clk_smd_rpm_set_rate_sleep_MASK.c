
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_smd_rpm_req {int value; int nbytes; int key; } ;
struct clk_smd_rpm {int rpm_key; int rpm_clk_id; int rpm_res_type; int rpm; } ;
typedef int req ;


 int FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,int ,struct clk_smd_rpm_req*,int) ;

__attribute__((used)) static int FUNC_3(struct clk_smd_rpm *VAR_1,
          unsigned long VAR_2)
{
 struct clk_smd_rpm_req VAR_3 = {
  .key = FUNC_1(VAR_1->rpm_key),
  .nbytes = FUNC_1(sizeof(u32)),
  .value = FUNC_1(FUNC_0(VAR_2, 1000)),
 };

 return FUNC_2(VAR_1->rpm, VAR_0,
      VAR_1->rpm_res_type, VAR_1->rpm_clk_id, &VAR_3,
      sizeof(VAR_3));
}
