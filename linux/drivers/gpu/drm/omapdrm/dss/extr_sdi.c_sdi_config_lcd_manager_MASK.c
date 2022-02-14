
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stallmode; int fifohandcheck; int video_port_width; int lcden_sig_polarity; int io_pad_mode; } ;
struct sdi_device {TYPE_1__ mgr_config; int output; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct sdi_device *VAR_1)
{
 VAR_1->mgr_config.io_pad_mode = VAR_0;

 VAR_1->mgr_config.stallmode = 0;
 VAR_1->mgr_config.fifohandcheck = 0;

 VAR_1->mgr_config.video_port_width = 24;
 VAR_1->mgr_config.lcden_sig_polarity = 1;

 FUNC_0(&VAR_1->output, &VAR_1->mgr_config);
}
