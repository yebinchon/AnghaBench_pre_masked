
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_hw_vbif_ops {int set_write_gather_en; int clear_errors; int set_mem_type; int set_qos_remap; int get_halt_ctrl; int set_halt_ctrl; int get_limit_conf; int set_limit_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,unsigned long*) ;

__attribute__((used)) static void FUNC_1(struct dpu_hw_vbif_ops *VAR_9,
  unsigned long VAR_10)
{
 VAR_9->set_limit_conf = VAR_5;
 VAR_9->get_limit_conf = VAR_3;
 VAR_9->set_halt_ctrl = VAR_4;
 VAR_9->get_halt_ctrl = VAR_2;
 if (FUNC_0(VAR_0, &VAR_10))
  VAR_9->set_qos_remap = VAR_7;
 VAR_9->set_mem_type = VAR_6;
 VAR_9->clear_errors = VAR_1;
 VAR_9->set_write_gather_en = VAR_8;
}
