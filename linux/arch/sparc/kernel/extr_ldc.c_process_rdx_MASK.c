
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ackid; } ;
struct TYPE_4__ {TYPE_1__ r; } ;
struct ldc_packet {scalar_t__ stype; int seqid; TYPE_2__ u; int env; } ;
struct ldc_channel {int hs_state; int rcv_nxt; } ;


 int VAR_0 ;
 int FUNC_0 (struct ldc_channel*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ldc_channel*,int ) ;
 int FUNC_2 (int ,char*,scalar_t__,int ,int ,int ) ;
 int FUNC_3 (struct ldc_channel*,int ) ;

__attribute__((used)) static int FUNC_4(struct ldc_channel *VAR_5,
         struct ldc_packet *VAR_6)
{
 FUNC_2(VAR_0, "GOT RDX stype[%x] seqid[%x] env[%x] ackid[%x]\n",
        VAR_6->stype, VAR_6->seqid, VAR_6->env, VAR_6->u.r.ackid);

 if (VAR_6->stype != VAR_3 ||
     !(FUNC_3(VAR_5, VAR_6->seqid)))
  return FUNC_0(VAR_5);

 VAR_5->rcv_nxt = VAR_6->seqid;

 VAR_5->hs_state = VAR_2;
 FUNC_1(VAR_5, VAR_4);

 return VAR_1;
}
