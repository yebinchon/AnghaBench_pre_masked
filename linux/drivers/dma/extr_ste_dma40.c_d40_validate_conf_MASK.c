
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int data_width; int psize; } ;
struct TYPE_5__ {int data_width; int psize; } ;
struct stedma40_chan_cfg {scalar_t__ mode; scalar_t__ dir; scalar_t__ dev_type; TYPE_3__ dst_info; TYPE_2__ src_info; } ;
struct d40_chan {TYPE_1__* base; } ;
struct TYPE_4__ {scalar_t__ num_log_chans; scalar_t__ num_phy_chans; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct d40_chan*,char*,...) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct d40_chan *VAR_3,
        struct stedma40_chan_cfg *VAR_4)
{
 int VAR_5 = 0;
 bool VAR_6 = VAR_4->mode == VAR_2;

 if (!VAR_4->dir) {
  FUNC_0(VAR_3, "Invalid direction.\n");
  VAR_5 = -VAR_1;
 }

 if ((VAR_6 && VAR_4->dev_type > VAR_3->base->num_log_chans) ||
     (!VAR_6 && VAR_4->dev_type > VAR_3->base->num_phy_chans) ||
     (VAR_4->dev_type < 0)) {
  FUNC_0(VAR_3, "Invalid device type (%d)\n", VAR_4->dev_type);
  VAR_5 = -VAR_1;
 }

 if (VAR_4->dir == VAR_0) {




  FUNC_0(VAR_3, "periph to periph not supported\n");
  VAR_5 = -VAR_1;
 }

 if (FUNC_1(VAR_6, VAR_4->src_info.psize) *
     VAR_4->src_info.data_width !=
     FUNC_1(VAR_6, VAR_4->dst_info.psize) *
     VAR_4->dst_info.data_width) {





  FUNC_0(VAR_3, "src (burst x width) != dst (burst x width)\n");
  VAR_5 = -VAR_1;
 }

 return VAR_5;
}
