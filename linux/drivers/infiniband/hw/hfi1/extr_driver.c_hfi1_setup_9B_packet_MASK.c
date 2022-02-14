
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_7__ {scalar_t__ next_hdr; int version_tclass_flow; } ;
struct TYPE_5__ {TYPE_3__ grh; int oth; } ;
struct TYPE_6__ {TYPE_1__ l; int oth; } ;
struct ib_header {TYPE_2__ u; } ;
struct hfi1_packet {scalar_t__ dlid; int * ohdr; int migrated; int pkey; scalar_t__ extra_byte; int pad; int rhf; int sc; int sl; int slid; int opcode; int ebuf; int payload; TYPE_3__* grh; struct ib_header* hdr; int rcd; } ;
struct TYPE_8__ {int n_pkt_drops; } ;
struct hfi1_ibport {TYPE_4__ rvp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ib_header*,int ) ;
 int FUNC_3 (struct hfi1_packet*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct ib_header*) ;
 scalar_t__ FUNC_9 (struct ib_header*) ;
 int FUNC_10 (struct ib_header*) ;
 int FUNC_11 (struct ib_header*) ;
 scalar_t__ FUNC_12 (int ) ;
 struct hfi1_ibport* FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct hfi1_packet *VAR_9)
{
 struct hfi1_ibport *VAR_10 = FUNC_13(VAR_9->rcd);
 struct ib_header *VAR_11;
 u8 VAR_12;

 FUNC_3(VAR_9);
 VAR_11 = VAR_9->hdr;

 VAR_12 = FUNC_9(VAR_11);
 if (VAR_12 == VAR_1) {
  VAR_9->ohdr = &VAR_11->u.oth;
  VAR_9->grh = ((void*)0);
 } else if (VAR_12 == VAR_2) {
  u32 VAR_13;

  VAR_9->ohdr = &VAR_11->u.l.oth;
  VAR_9->grh = &VAR_11->u.l.grh;
  if (VAR_9->grh->next_hdr != VAR_3)
   goto drop;
  VAR_13 = FUNC_1(VAR_9->grh->version_tclass_flow);
  if ((VAR_13 >> VAR_5) != VAR_4)
   goto drop;
 } else {
  goto drop;
 }


 VAR_9->payload = VAR_9->ebuf;
 VAR_9->opcode = FUNC_4(VAR_9->ohdr);
 VAR_9->slid = FUNC_11(VAR_11);
 VAR_9->dlid = FUNC_8(VAR_11);
 if (FUNC_14((VAR_9->dlid >= FUNC_0(VAR_7)) &&
       (VAR_9->dlid != FUNC_0(VAR_6))))
  VAR_9->dlid += FUNC_12(VAR_8) -
    FUNC_0(VAR_7);
 VAR_9->sl = FUNC_10(VAR_11);
 VAR_9->sc = FUNC_2(VAR_11, VAR_9->rhf);
 VAR_9->pad = FUNC_5(VAR_9->ohdr);
 VAR_9->extra_byte = 0;
 VAR_9->pkey = FUNC_6(VAR_9->ohdr);
 VAR_9->migrated = FUNC_7(VAR_9->ohdr);

 return 0;
drop:
 VAR_10->rvp.n_pkt_drops++;
 return -VAR_0;
}
