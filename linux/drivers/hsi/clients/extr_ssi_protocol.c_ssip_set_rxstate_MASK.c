
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssi_protocol {unsigned int recv_state; int rx_wd; int keep_alive; int tx_usecnt; int send_state; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ssi_protocol *VAR_4, unsigned int VAR_5)
{
 VAR_4->recv_state = VAR_5;
 switch (VAR_5) {
 case 129:
  FUNC_1(&VAR_4->rx_wd);
  if (VAR_4->send_state == VAR_0)
   FUNC_1(&VAR_4->keep_alive);
  break;
 case 128:

  if (FUNC_0(&VAR_4->tx_usecnt))
   break;

 case 130:
  FUNC_2(&VAR_4->keep_alive, VAR_3 +
      FUNC_3(VAR_1));
  FUNC_2(&VAR_4->rx_wd, VAR_3 + FUNC_3(VAR_2));
  break;
 default:
  break;
 }
}
