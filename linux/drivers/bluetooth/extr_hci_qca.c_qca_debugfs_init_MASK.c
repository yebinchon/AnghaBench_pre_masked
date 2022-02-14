
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct qca_data {int tx_idle_delay; int wake_retrans; int vote_off_ms; int vote_on_ms; int votes_off; int votes_on; int rx_votes_off; int rx_votes_on; int rx_vote; int tx_votes_off; int tx_votes_on; int tx_vote; int ibs_recv_wacks; int ibs_recv_wakes; int ibs_recv_slps; int ibs_sent_wacks; int ibs_sent_wakes; int ibs_sent_slps; int rx_ibs_state; int tx_ibs_state; } ;
struct hci_uart {struct qca_data* priv; } ;
struct hci_dev {int debugfs; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,struct dentry*,int *) ;
 struct dentry* FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,struct dentry*,int *) ;
 int FUNC_3 (char*,int,struct dentry*,int *) ;
 int FUNC_4 (char*,int,struct dentry*,int *) ;
 struct hci_uart* FUNC_5 (struct hci_dev*) ;

__attribute__((used)) static void FUNC_6(struct hci_dev *VAR_2)
{
 struct hci_uart *VAR_3 = FUNC_5(VAR_2);
 struct qca_data *VAR_4 = VAR_3->priv;
 struct dentry *VAR_5;
 umode_t VAR_6;

 if (!VAR_2->debugfs)
  return;

 VAR_5 = FUNC_1("ibs", VAR_2->debugfs);


 VAR_6 = VAR_0;
 FUNC_4("tx_ibs_state", VAR_6, VAR_5, &VAR_4->tx_ibs_state);
 FUNC_4("rx_ibs_state", VAR_6, VAR_5, &VAR_4->rx_ibs_state);
 FUNC_3("ibs_sent_sleeps", VAR_6, VAR_5,
      &VAR_4->ibs_sent_slps);
 FUNC_3("ibs_sent_wakes", VAR_6, VAR_5,
      &VAR_4->ibs_sent_wakes);
 FUNC_3("ibs_sent_wake_acks", VAR_6, VAR_5,
      &VAR_4->ibs_sent_wacks);
 FUNC_3("ibs_recv_sleeps", VAR_6, VAR_5,
      &VAR_4->ibs_recv_slps);
 FUNC_3("ibs_recv_wakes", VAR_6, VAR_5,
      &VAR_4->ibs_recv_wakes);
 FUNC_3("ibs_recv_wake_acks", VAR_6, VAR_5,
      &VAR_4->ibs_recv_wacks);
 FUNC_0("tx_vote", VAR_6, VAR_5, &VAR_4->tx_vote);
 FUNC_3("tx_votes_on", VAR_6, VAR_5, &VAR_4->tx_votes_on);
 FUNC_3("tx_votes_off", VAR_6, VAR_5, &VAR_4->tx_votes_off);
 FUNC_0("rx_vote", VAR_6, VAR_5, &VAR_4->rx_vote);
 FUNC_3("rx_votes_on", VAR_6, VAR_5, &VAR_4->rx_votes_on);
 FUNC_3("rx_votes_off", VAR_6, VAR_5, &VAR_4->rx_votes_off);
 FUNC_3("votes_on", VAR_6, VAR_5, &VAR_4->votes_on);
 FUNC_3("votes_off", VAR_6, VAR_5, &VAR_4->votes_off);
 FUNC_2("vote_on_ms", VAR_6, VAR_5, &VAR_4->vote_on_ms);
 FUNC_2("vote_off_ms", VAR_6, VAR_5, &VAR_4->vote_off_ms);


 VAR_6 = VAR_0 | VAR_1;
 FUNC_2("wake_retrans", VAR_6, VAR_5, &VAR_4->wake_retrans);
 FUNC_2("tx_idle_delay", VAR_6, VAR_5,
      &VAR_4->tx_idle_delay);
}
