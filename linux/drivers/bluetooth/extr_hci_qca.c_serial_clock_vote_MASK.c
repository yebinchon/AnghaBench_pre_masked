
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qca_data {int tx_vote; int rx_vote; unsigned int vote_off_ms; unsigned int vote_on_ms; scalar_t__ vote_last_jif; int votes_off; int votes_on; int rx_votes_off; int tx_votes_off; int rx_votes_on; int tx_votes_on; } ;
struct hci_uart {int tty; struct qca_data* priv; } ;


 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (char*) ;





 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_1, struct hci_uart *VAR_2)
{
 struct qca_data *VAR_3 = VAR_2->priv;
 unsigned int VAR_4;

 bool VAR_5 = (VAR_3->tx_vote | VAR_3->rx_vote);
 bool VAR_6;

 switch (VAR_1) {
 case 128:
  VAR_4 = FUNC_4(VAR_0 - VAR_3->vote_last_jif);

  if (VAR_5)
   VAR_3->vote_off_ms += VAR_4;
  else
   VAR_3->vote_on_ms += VAR_4;
  return;

 case 129:
  VAR_3->tx_vote = 1;
  VAR_3->tx_votes_on++;
  VAR_6 = 1;
  break;

 case 131:
  VAR_3->rx_vote = 1;
  VAR_3->rx_votes_on++;
  VAR_6 = 1;
  break;

 case 130:
  VAR_3->tx_vote = 0;
  VAR_3->tx_votes_off++;
  VAR_6 = VAR_3->rx_vote | VAR_3->tx_vote;
  break;

 case 132:
  VAR_3->rx_vote = 0;
  VAR_3->rx_votes_off++;
  VAR_6 = VAR_3->rx_vote | VAR_3->tx_vote;
  break;

 default:
  FUNC_1("Voting irregularity");
  return;
 }

 if (VAR_6 != VAR_5) {
  if (VAR_6)
   FUNC_3(VAR_2->tty);
  else
   FUNC_2(VAR_2->tty);

  FUNC_0("Vote serial clock %s(%s)", VAR_6 ? "true" : "false",
         VAR_1 ? "true" : "false");

  VAR_4 = FUNC_4(VAR_0 - VAR_3->vote_last_jif);

  if (VAR_6) {
   VAR_3->votes_on++;
   VAR_3->vote_off_ms += VAR_4;
  } else {
   VAR_3->votes_off++;
   VAR_3->vote_on_ms += VAR_4;
  }
  VAR_3->vote_last_jif = VAR_0;
 }
}
