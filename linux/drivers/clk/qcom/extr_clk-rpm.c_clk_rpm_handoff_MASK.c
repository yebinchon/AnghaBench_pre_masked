
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_rpm {scalar_t__ rpm_clk_id; int rpm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,scalar_t__,int *,int) ;

__attribute__((used)) static int FUNC_1(struct clk_rpm *VAR_5)
{
 int VAR_6;
 u32 VAR_7 = VAR_0;





 if (VAR_5->rpm_clk_id == VAR_3 ||
  VAR_5->rpm_clk_id == VAR_2)
  return 0;

 VAR_6 = FUNC_0(VAR_5->rpm, VAR_1,
        VAR_5->rpm_clk_id, &VAR_7, 1);
 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_0(VAR_5->rpm, VAR_4,
        VAR_5->rpm_clk_id, &VAR_7, 1);
 if (VAR_6)
  return VAR_6;

 return 0;
}
