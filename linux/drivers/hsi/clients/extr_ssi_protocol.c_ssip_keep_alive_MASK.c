
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ssi_protocol {scalar_t__ recv_state; int send_state; int lock; int keep_alive; int tx_usecnt; int main_state; struct hsi_client* cl; } ;
struct hsi_client {int device; } ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ,scalar_t__,int) ;
 struct ssi_protocol* FUNC_2 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct ssi_protocol* VAR_4 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_5)
{
 struct ssi_protocol *VAR_6 = FUNC_2(VAR_6, VAR_5, VAR_3);
 struct hsi_client *VAR_7 = VAR_6->cl;

 FUNC_1(&VAR_7->device, "Keep alive kick in: m(%d) r(%d) s(%d)\n",
  VAR_6->main_state, VAR_6->recv_state, VAR_6->send_state);

 FUNC_5(&VAR_6->lock);
 if (VAR_6->recv_state == VAR_0)
  switch (VAR_6->send_state) {
  case 128:
   if (FUNC_0(&VAR_6->tx_usecnt) == 0)
    break;





  case 129:
   FUNC_6(&VAR_6->lock);
   return;
  }
 FUNC_3(&VAR_6->keep_alive, VAR_2 + FUNC_4(VAR_1));
 FUNC_6(&VAR_6->lock);
}
