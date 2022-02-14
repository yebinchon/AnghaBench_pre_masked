
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ldc_channel {int snd_nxt; int rcv_nxt; int tx_num_entries; int tx_tail; int tx_head; int rx_num_entries; int rx_tail; int rx_head; int hs_state; int chan_state; int state; int flags; int id; } ;


 int FUNC_0 (char*,char const*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct ldc_channel *VAR_0, const char *VAR_1)
{
 FUNC_0("%s: id=0x%lx flags=0x%x state=%s cstate=0x%lx hsstate=0x%x\n"
  "\trx_h=0x%lx rx_t=0x%lx rx_n=%ld\n"
  "\ttx_h=0x%lx tx_t=0x%lx tx_n=%ld\n"
  "\trcv_nxt=%u snd_nxt=%u\n",
  VAR_1, VAR_0->id, VAR_0->flags, FUNC_1(VAR_0->state),
  VAR_0->chan_state, VAR_0->hs_state,
  VAR_0->rx_head, VAR_0->rx_tail, VAR_0->rx_num_entries,
  VAR_0->tx_head, VAR_0->tx_tail, VAR_0->tx_num_entries,
  VAR_0->rcv_nxt, VAR_0->snd_nxt);
}
