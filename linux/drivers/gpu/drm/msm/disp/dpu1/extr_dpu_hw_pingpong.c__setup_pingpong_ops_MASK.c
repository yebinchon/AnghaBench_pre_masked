
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_pingpong_cfg {int dummy; } ;
struct dpu_hw_pingpong_ops {int get_line_count; int poll_timeout_wr_ptr; int get_vsync_info; int connect_external_te; int enable_tearcheck; int setup_tearcheck; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct dpu_hw_pingpong_ops *VAR_6,
 const struct dpu_pingpong_cfg *VAR_7)
{
 VAR_6->setup_tearcheck = VAR_5;
 VAR_6->enable_tearcheck = VAR_1;
 VAR_6->connect_external_te = VAR_0;
 VAR_6->get_vsync_info = VAR_3;
 VAR_6->poll_timeout_wr_ptr = VAR_4;
 VAR_6->get_line_count = VAR_2;
}
