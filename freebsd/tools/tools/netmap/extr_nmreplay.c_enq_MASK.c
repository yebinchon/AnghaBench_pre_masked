
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q_pkt {int pt_qout; int pt_tx; scalar_t__ next; int pktlen; } ;
struct _qs {int qt_qout; int qt_tx; int tx; scalar_t__ prod_tail; int cur_len; int cur_caplen; int cur_pkt; } ;


 int FUNC_0 (char*,int ,int,scalar_t__,int,int) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct q_pkt* FUNC_3 (struct _qs*,scalar_t__) ;

__attribute__((used)) static inline int
FUNC_4(struct _qs *VAR_0)
{
    struct q_pkt *VAR_1 = FUNC_3(VAR_0, VAR_0->prod_tail);


    FUNC_1(VAR_0->cur_pkt, (char *)(VAR_1+1), VAR_0->cur_caplen);
    VAR_1->pktlen = VAR_0->cur_len;
    VAR_1->pt_qout = VAR_0->qt_qout;
    VAR_1->pt_tx = VAR_0->qt_tx;
    VAR_1->next = VAR_0->prod_tail + FUNC_2(VAR_0->cur_len) + sizeof(struct q_pkt);
    FUNC_0("enqueue len %d at %d new tail %ld qout %.6f tx %.6f",
        VAR_0->cur_len, (int)VAR_0->prod_tail, VAR_1->next,
        1e-9*VAR_1->pt_qout, 1e-9*VAR_1->pt_tx);
    VAR_0->prod_tail = VAR_1->next;
    VAR_0->tx++;
    return 0;
}
