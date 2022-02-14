
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stallmode; int fifohandcheck; scalar_t__ lcden_sig_polarity; int video_port_width; int io_pad_mode; } ;
struct dpi_data {TYPE_1__ mgr_config; int output; int data_lines; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct dpi_data *VAR_1)
{
 VAR_1->mgr_config.io_pad_mode = VAR_0;

 VAR_1->mgr_config.stallmode = 0;
 VAR_1->mgr_config.fifohandcheck = 0;

 VAR_1->mgr_config.video_port_width = VAR_1->data_lines;

 VAR_1->mgr_config.lcden_sig_polarity = 0;

 FUNC_0(&VAR_1->output, &VAR_1->mgr_config);
}
