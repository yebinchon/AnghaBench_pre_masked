
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct TYPE_5__ {int * r_data; } ;
struct TYPE_6__ {TYPE_2__ r; int * u_data; } ;
struct ldc_packet {int env; void* seqid; scalar_t__ ctrl; int stype; int type; TYPE_3__ u; } ;
struct TYPE_4__ {scalar_t__ mode; } ;
struct ldc_channel {unsigned long tx_tail; scalar_t__ chan_state; int mss; void* snd_nxt; TYPE_1__ cfg; struct ldc_packet* tx_base; int tx_head; int id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ldc_channel*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,char*,int ,int ,scalar_t__,int,void*) ;
 int FUNC_3 (int *,void const*,int) ;
 int FUNC_4 (struct ldc_channel*,unsigned long) ;
 unsigned long FUNC_5 (int ,int *,unsigned long*,scalar_t__*) ;
 unsigned long FUNC_6 (struct ldc_channel*,unsigned long) ;
 int FUNC_7 (struct ldc_channel*,unsigned int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct ldc_channel *VAR_11, const void *VAR_12,
   unsigned int VAR_13)
{
 unsigned long VAR_14, VAR_15;
 unsigned int VAR_16;
 u32 VAR_17;
 int VAR_18;

 VAR_14 = FUNC_5(VAR_11->id, &VAR_11->tx_head, &VAR_11->tx_tail,
     &VAR_11->chan_state);
 if (FUNC_8(VAR_14))
  return -VAR_2;

 if (FUNC_8(VAR_11->chan_state != VAR_3))
  return FUNC_1(VAR_11);

 if (!FUNC_7(VAR_11, VAR_13))
  return -VAR_1;

 VAR_17 = VAR_11->snd_nxt;
 VAR_16 = 0;
 VAR_15 = VAR_11->tx_tail;
 while (VAR_16 < VAR_13) {
  struct ldc_packet *VAR_19 = VAR_11->tx_base + (VAR_15 / VAR_8);
  u8 *VAR_20 = ((VAR_11->cfg.mode == VAR_7) ?
       VAR_19->u.u_data :
       VAR_19->u.r.r_data);
  int VAR_21;

  VAR_19->type = VAR_4;
  VAR_19->stype = VAR_5;
  VAR_19->ctrl = 0;

  VAR_21 = VAR_13 - VAR_16;
  if (VAR_21 > VAR_11->mss)
   VAR_21 = VAR_11->mss;

  FUNC_0(VAR_21 > VAR_6);

  VAR_19->env = (VAR_21 |
     (VAR_16 == 0 ? VAR_9 : 0) |
     (VAR_21 == VAR_13 - VAR_16 ? VAR_10 : 0));

  VAR_19->seqid = ++VAR_17;

  FUNC_2(VAR_0, "SENT DATA [%02x:%02x:%02x:%02x:%08x]\n",
         VAR_19->type,
         VAR_19->stype,
         VAR_19->ctrl,
         VAR_19->env,
         VAR_19->seqid);

  FUNC_3(VAR_20, VAR_12, VAR_21);
  VAR_12 += VAR_21;
  VAR_16 += VAR_21;

  VAR_15 = FUNC_6(VAR_11, VAR_15);
 }

 VAR_18 = FUNC_4(VAR_11, VAR_15);
 if (!VAR_18) {
  VAR_11->snd_nxt = VAR_17;
  VAR_18 = VAR_13;
 }

 return VAR_18;
}
