
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct saa7146_dev* dev; int timeout; int queue; } ;
struct saa7146_vv {int current_hps_sync; int current_hps_source; int * standard; TYPE_2__ video_dmaq; } ;
struct saa7146_dev {TYPE_1__* ext_vv_data; } ;
struct TYPE_3__ {int * stds; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct saa7146_dev *VAR_3, struct saa7146_vv *VAR_4)
{
 FUNC_0(&VAR_4->video_dmaq.queue);

 FUNC_1(&VAR_4->video_dmaq.timeout, VAR_2, 0);
 VAR_4->video_dmaq.dev = VAR_3;


 VAR_4->standard = &VAR_3->ext_vv_data->stds[0];


 VAR_4->current_hps_source = VAR_0;
 VAR_4->current_hps_sync = VAR_1;
}
