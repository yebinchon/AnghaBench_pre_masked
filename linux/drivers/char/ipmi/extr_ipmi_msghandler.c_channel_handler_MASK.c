
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ipmi_smi {unsigned int curr_working_cset; int channels_ready; int curr_channel; int waitq; TYPE_3__* wchannels; TYPE_3__* channel_list; int si_dev; } ;
struct TYPE_5__ {scalar_t__ netfn; scalar_t__ cmd; int* data; int data_len; } ;
struct TYPE_4__ {scalar_t__ addr_type; } ;
struct ipmi_recv_msg {TYPE_2__ msg; TYPE_1__ addr; } ;
struct ipmi_channel {int medium; int protocol; } ;
struct TYPE_6__ {struct ipmi_channel* c; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct ipmi_smi*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct ipmi_smi *VAR_7, struct ipmi_recv_msg *VAR_8)
{
 int VAR_9 = 0;
 int VAR_10;
 unsigned int VAR_11 = VAR_7->curr_working_cset;
 struct ipmi_channel *VAR_12;

 if ((VAR_8->addr.addr_type == VAR_6)
     && (VAR_8->msg.netfn == VAR_5)
     && (VAR_8->msg.cmd == VAR_2)) {

  if (VAR_8->msg.data[0] != 0) {


   if (VAR_8->msg.data[0] == VAR_3) {






    VAR_7->wchannels[VAR_11].c[0].medium
     = VAR_0;
    VAR_7->wchannels[VAR_11].c[0].protocol
     = VAR_1;

    VAR_7->channel_list = VAR_7->wchannels + VAR_11;
    VAR_7->channels_ready = 1;
    FUNC_2(&VAR_7->waitq);
    goto out;
   }
   goto next_channel;
  }
  if (VAR_8->msg.data_len < 4) {

   goto next_channel;
  }
  VAR_10 = VAR_7->curr_channel;
  VAR_12 = VAR_7->wchannels[VAR_11].c;
  VAR_12[VAR_10].medium = VAR_8->msg.data[2] & 0x7f;
  VAR_12[VAR_10].protocol = VAR_8->msg.data[3] & 0x1f;

 next_channel:
  VAR_7->curr_channel++;
  if (VAR_7->curr_channel >= VAR_4) {
   VAR_7->channel_list = VAR_7->wchannels + VAR_11;
   VAR_7->channels_ready = 1;
   FUNC_2(&VAR_7->waitq);
  } else {
   VAR_7->channel_list = VAR_7->wchannels + VAR_11;
   VAR_7->channels_ready = 1;
   VAR_9 = FUNC_1(VAR_7, VAR_7->curr_channel);
  }

  if (VAR_9) {

   FUNC_0(VAR_7->si_dev,
     "Error sending channel information for channel %d: %d\n",
     VAR_7->curr_channel, VAR_9);

   VAR_7->channel_list = VAR_7->wchannels + VAR_11;
   VAR_7->channels_ready = 1;
   FUNC_2(&VAR_7->waitq);
  }
 }
 out:
 return;
}
