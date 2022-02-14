
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynqmp_eemi_ops {int (* fpga_get_status ) (int*) ;} ;
struct fpga_manager {int dummy; } ;
typedef enum fpga_mgr_states { ____Placeholder_fpga_mgr_states } fpga_mgr_states ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct zynqmp_eemi_ops const*) ;
 int VAR_2 ;
 int FUNC_1 (int*) ;
 struct zynqmp_eemi_ops* FUNC_2 () ;

__attribute__((used)) static enum fpga_mgr_states FUNC_3(struct fpga_manager *VAR_3)
{
 const struct zynqmp_eemi_ops *VAR_4 = FUNC_2();
 u32 VAR_5;

 if (FUNC_0(VAR_4) || !VAR_4->fpga_get_status)
  return VAR_1;

 VAR_4->fpga_get_status(&VAR_5);
 if (VAR_5 & VAR_2)
  return VAR_0;

 return VAR_1;
}
