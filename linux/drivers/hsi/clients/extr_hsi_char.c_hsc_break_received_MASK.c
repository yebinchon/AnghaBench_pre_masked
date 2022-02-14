
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsi_msg {int cl; int status; } ;
struct hsc_client_data {struct hsc_channel* channels; } ;
struct hsc_channel {int rx_wait; int rx_msgs_queue; int flags; int free_msgs_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct hsc_channel*,struct hsi_msg*,int *) ;
 int FUNC_2 (struct hsi_msg*) ;
 struct hsi_msg* FUNC_3 (struct hsc_channel*,int *) ;
 int FUNC_4 (struct hsi_msg*,int ) ;
 int FUNC_5 (int ,struct hsi_msg*) ;
 struct hsc_client_data* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct hsi_msg *VAR_3)
{
 struct hsc_client_data *VAR_4 = FUNC_6(VAR_3->cl);
 struct hsc_channel *VAR_5 = VAR_4->channels;
 int VAR_6, VAR_7;


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++, VAR_5++) {
  struct hsi_msg *VAR_8;

  if (!FUNC_8(VAR_0, &VAR_5->flags))
   continue;
  VAR_8 = FUNC_3(VAR_5, &VAR_5->free_msgs_list);
  if (!VAR_8)
   continue;
  FUNC_0(VAR_0, &VAR_5->flags);
  FUNC_4(VAR_8, 0);
  VAR_8->status = VAR_2;
  FUNC_1(VAR_5, VAR_8, &VAR_5->rx_msgs_queue);
  FUNC_9(&VAR_5->rx_wait);
 }
 FUNC_7(VAR_3->cl);
 VAR_7 = FUNC_5(VAR_3->cl, VAR_3);
 if (VAR_7 < 0)
  FUNC_2(VAR_3);
}
