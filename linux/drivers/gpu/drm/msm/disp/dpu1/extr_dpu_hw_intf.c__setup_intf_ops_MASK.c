
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_hw_intf_ops {int get_line_count; int enable_timing; int get_status; int setup_prg_fetch; int setup_timing_gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct dpu_hw_intf_ops *VAR_5,
  unsigned long VAR_6)
{
 VAR_5->setup_timing_gen = VAR_4;
 VAR_5->setup_prg_fetch = VAR_3;
 VAR_5->get_status = VAR_2;
 VAR_5->enable_timing = VAR_0;
 VAR_5->get_line_count = VAR_1;
}
