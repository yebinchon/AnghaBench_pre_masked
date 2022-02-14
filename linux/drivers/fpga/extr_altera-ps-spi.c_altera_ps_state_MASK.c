
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpga_manager {struct altera_ps_conf* priv; } ;
struct altera_ps_conf {int status; } ;
typedef enum fpga_mgr_states { ____Placeholder_fpga_mgr_states } fpga_mgr_states ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static enum fpga_mgr_states FUNC_1(struct fpga_manager *VAR_2)
{
 struct altera_ps_conf *VAR_3 = VAR_2->priv;

 if (FUNC_0(VAR_3->status))
  return VAR_0;

 return VAR_1;
}
