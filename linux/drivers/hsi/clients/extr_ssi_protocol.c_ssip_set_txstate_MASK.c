
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssi_protocol {unsigned int send_state; int tx_wd; int keep_alive; int recv_state; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ssi_protocol *VAR_4, unsigned int VAR_5)
{
 VAR_4->send_state = VAR_5;
 switch (VAR_5) {
 case 130:
 case 129:
  FUNC_0(&VAR_4->tx_wd);
  if (VAR_4->recv_state == VAR_0)
   FUNC_0(&VAR_4->keep_alive);
  break;
 case 128:
 case 132:
 case 131:
  FUNC_1(&VAR_4->keep_alive,
    VAR_3 + FUNC_2(VAR_1));
  FUNC_1(&VAR_4->tx_wd, VAR_3 + FUNC_2(VAR_2));
  break;
 default:
  break;
 }
}
