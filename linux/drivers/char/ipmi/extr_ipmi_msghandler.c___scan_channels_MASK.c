
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipmi_smi {unsigned int curr_working_cset; int channels_ready; TYPE_2__* wchannels; TYPE_2__* channel_list; int * null_user_handler; int waitq; int si_dev; scalar_t__ curr_channel; } ;
struct ipmi_device_id {int dummy; } ;
struct ipmi_channel_set {int dummy; } ;
struct TYPE_4__ {TYPE_1__* c; } ;
struct TYPE_3__ {int protocol; int medium; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct ipmi_device_id*) ;
 int FUNC_2 (struct ipmi_device_id*) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (struct ipmi_smi*,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct ipmi_smi *VAR_4, struct ipmi_device_id *VAR_5)
{
 int VAR_6;

 if (FUNC_1(VAR_5) > 1
   || (FUNC_1(VAR_5) == 1
       && FUNC_2(VAR_5) >= 5)) {
  unsigned int VAR_7;





  VAR_7 = !VAR_4->curr_working_cset;
  VAR_4->curr_working_cset = VAR_7;
  FUNC_3(&VAR_4->wchannels[VAR_7], 0,
         sizeof(struct ipmi_channel_set));

  VAR_4->null_user_handler = VAR_3;
  VAR_4->curr_channel = 0;
  VAR_6 = FUNC_4(VAR_4, 0);
  if (VAR_6) {
   FUNC_0(VAR_4->si_dev,
     "Error sending channel information for channel 0, %d\n",
     VAR_6);
   return -VAR_0;
  }


  FUNC_5(VAR_4->waitq, VAR_4->channels_ready);
  VAR_4->null_user_handler = ((void*)0);
 } else {
  unsigned int VAR_8 = VAR_4->curr_working_cset;


  VAR_4->wchannels[VAR_8].c[0].medium = VAR_1;
  VAR_4->wchannels[VAR_8].c[0].protocol = VAR_2;
  VAR_4->channel_list = VAR_4->wchannels + VAR_8;
  VAR_4->channels_ready = 1;
 }

 return 0;
}
