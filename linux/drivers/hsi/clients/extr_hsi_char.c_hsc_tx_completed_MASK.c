
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsi_msg {int channel; int cl; } ;
struct hsc_client_data {struct hsc_channel* channels; } ;
struct hsc_channel {int free_msgs_list; int tx_wait; int tx_msgs_queue; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct hsc_channel*,struct hsi_msg*,int *) ;
 struct hsc_client_data* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct hsi_msg *VAR_1)
{
 struct hsc_client_data *VAR_2 = FUNC_1(VAR_1->cl);
 struct hsc_channel *VAR_3 = VAR_2->channels + VAR_1->channel;

 if (FUNC_2(VAR_0, &VAR_3->flags)) {
  FUNC_0(VAR_3, VAR_1, &VAR_3->tx_msgs_queue);
  FUNC_3(&VAR_3->tx_wait);
 } else {
  FUNC_0(VAR_3, VAR_1, &VAR_3->free_msgs_list);
 }
}
