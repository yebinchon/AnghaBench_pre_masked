
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct frame {int flags; TYPE_1__* t; } ;
struct aoedev {int lock; } ;
struct aoe_hdr {int minor; int tag; int major; int dst; int src; } ;
typedef int ebuf ;
struct TYPE_2__ {int nout_probes; int nout; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct aoedev*) ;
 struct aoedev* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct aoedev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct aoedev*,TYPE_1__*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct frame* FUNC_10 (struct aoedev*,int ) ;
 struct frame* FUNC_11 (struct aoedev*,int ) ;
 int VAR_1 ;
 int FUNC_12 (struct frame*,struct sk_buff*) ;
 int FUNC_13 (char*,int,char*,...) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct frame*) ;

struct sk_buff *
FUNC_18(struct sk_buff *VAR_2)
{
 struct aoedev *VAR_3;
 struct aoe_hdr *VAR_4;
 struct frame *VAR_5;
 u32 VAR_6;
 ulong VAR_7;
 char VAR_8[128];
 u16 VAR_9;

 VAR_4 = (struct aoe_hdr *) VAR_2->data;
 VAR_9 = FUNC_4(FUNC_7(&VAR_4->major));
 VAR_3 = FUNC_2(VAR_9, VAR_4->minor, 0);
 if (VAR_3 == ((void*)0)) {
  FUNC_13(VAR_8, sizeof VAR_8, "aoecmd_ata_rsp: ata response "
   "for unknown device %d.%d\n",
   VAR_9, VAR_4->minor);
  FUNC_0(VAR_8);
  return VAR_2;
 }

 FUNC_14(&VAR_3->lock, VAR_7);

 VAR_6 = FUNC_5(FUNC_7(&VAR_4->tag));
 VAR_5 = FUNC_10(VAR_3, VAR_6);
 if (VAR_5) {
  FUNC_6(VAR_3, VAR_5->t, FUNC_17(VAR_5));
  VAR_5->t->nout--;
  if (VAR_5->flags & VAR_0)
   VAR_5->t->nout_probes--;
 } else {
  VAR_5 = FUNC_11(VAR_3, VAR_6);
  if (VAR_5) {
   FUNC_6(VAR_3, ((void*)0), FUNC_17(VAR_5));
  } else {
   FUNC_6(VAR_3, ((void*)0), FUNC_16(VAR_6));
   FUNC_15(&VAR_3->lock, VAR_7);
   FUNC_3(VAR_3);
   FUNC_13(VAR_8, sizeof(VAR_8),
     "%15s e%d.%d    tag=%08x@%08lx s=%pm d=%pm\n",
     "unexpected rsp",
     FUNC_8(&VAR_4->major),
     VAR_4->minor,
     FUNC_9(&VAR_4->tag),
     VAR_1,
     VAR_4->src,
     VAR_4->dst);
   FUNC_0(VAR_8);
   return VAR_2;
  }
 }
 FUNC_1(VAR_3);

 FUNC_15(&VAR_3->lock, VAR_7);

 FUNC_12(VAR_5, VAR_2);





 return ((void*)0);
}
