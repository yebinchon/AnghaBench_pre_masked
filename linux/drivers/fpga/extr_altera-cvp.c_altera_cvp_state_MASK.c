
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fpga_manager {struct altera_cvp_conf* priv; } ;
struct altera_cvp_conf {int dummy; } ;
typedef enum fpga_mgr_states { ____Placeholder_fpga_mgr_states } fpga_mgr_states ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct altera_cvp_conf*,int ,int*) ;

__attribute__((used)) static enum fpga_mgr_states FUNC_1(struct fpga_manager *VAR_6)
{
 struct altera_cvp_conf *VAR_7 = VAR_6->priv;
 u32 VAR_8;

 FUNC_0(VAR_7, VAR_3, &VAR_8);

 if (VAR_8 & VAR_4)
  return VAR_0;

 if (VAR_8 & VAR_5)
  return VAR_1;

 return VAR_2;
}
