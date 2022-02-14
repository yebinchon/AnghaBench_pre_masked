
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {long len; scalar_t__ data; int dev; } ;
struct TYPE_6__ {long bi_size; } ;
struct frame {int flags; TYPE_3__ iter; struct buf* buf; int skb; struct sk_buff* r_skb; struct aoetgt* t; } ;
struct TYPE_4__ {scalar_t__ bi_size; } ;
struct buf {scalar_t__ nframesout; TYPE_1__ iter; TYPE_2__* bio; } ;
struct aoetgt {scalar_t__ taint; scalar_t__ nout_probes; struct aoedev* d; } ;
struct aoeif {int lost; } ;
struct aoedev {int lock; int aoeminor; scalar_t__ aoemajor; } ;
struct aoe_hdr {int minor; int major; } ;
struct aoe_atahdr {int cmdstat; int scnt; } ;
struct TYPE_5__ {void* bi_status; } ;







 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aoedev*,struct buf*) ;
 int FUNC_1 (struct frame*) ;
 int FUNC_2 (struct aoedev*) ;
 int FUNC_3 (struct aoedev*,struct aoetgt*,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,TYPE_2__*,TYPE_3__,long) ;
 int FUNC_6 (struct aoedev*,int*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *) ;
 struct aoeif* FUNC_9 (struct aoetgt*,int ) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,char*,long,int ,long,long) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (struct aoetgt*) ;
 int FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void
FUNC_19(struct frame *VAR_2)
{
 struct aoe_hdr *VAR_3, *VAR_4;
 struct aoe_atahdr *VAR_5, *VAR_6;
 struct buf *VAR_7;
 struct sk_buff *VAR_8;
 struct aoetgt *VAR_9;
 struct aoeif *VAR_10;
 struct aoedev *VAR_11;
 long VAR_12;
 int VAR_13;

 if (VAR_2 == ((void*)0))
  return;

 VAR_9 = VAR_2->t;
 VAR_11 = VAR_9->d;
 VAR_8 = VAR_2->r_skb;
 VAR_7 = VAR_2->buf;
 if (VAR_2->flags & VAR_1)
  goto out;
 if (!VAR_8)
  goto noskb;

 VAR_4 = (struct aoe_hdr *) FUNC_15(VAR_2->skb);
 VAR_6 = (struct aoe_atahdr *) (VAR_4+1);

 VAR_3 = (struct aoe_hdr *) VAR_8->data;
 FUNC_16(VAR_8, sizeof(*VAR_3));
 VAR_5 = (struct aoe_atahdr *) VAR_8->data;
 FUNC_16(VAR_8, sizeof(*VAR_5));
 if (VAR_5->cmdstat & 0xa9) {
  FUNC_10("aoe: ata error cmd=%2.2Xh stat=%2.2Xh from e%ld.%d\n",
   VAR_6->cmdstat, VAR_5->cmdstat,
   VAR_11->aoemajor, VAR_11->aoeminor);
noskb: if (VAR_7)
   VAR_7->bio->bi_status = VAR_0;
  goto out;
 }

 VAR_12 = VAR_6->scnt << 9;
 switch (VAR_6->cmdstat) {
 case 131:
 case 130:
  if (VAR_8->len < VAR_12) {
   FUNC_10("%s e%ld.%d.  skb->len=%d need=%ld\n",
    "aoe: runt data size in read from",
    (long) VAR_11->aoemajor, VAR_11->aoeminor,
          VAR_8->len, VAR_12);
   VAR_7->bio->bi_status = VAR_0;
   break;
  }
  if (VAR_12 > VAR_2->iter.bi_size) {
   FUNC_11("%s e%ld.%d.  bytes=%ld need=%u\n",
    "aoe: too-large data size in read from",
    (long) VAR_11->aoemajor, VAR_11->aoeminor,
    VAR_12, VAR_2->iter.bi_size);
   VAR_7->bio->bi_status = VAR_0;
   break;
  }
  FUNC_5(VAR_8, VAR_2->buf->bio, VAR_2->iter, VAR_12);

 case 129:
 case 128:
  FUNC_17(&VAR_11->lock);
  VAR_10 = FUNC_9(VAR_9, VAR_8->dev);
  if (VAR_10)
   VAR_10->lost = 0;
  FUNC_18(&VAR_11->lock);
  break;
 case 132:
  if (VAR_8->len < 512) {
   FUNC_12("%s e%ld.%d.  skb->len=%d need=512\n",
    "aoe: runt data size in ataid from",
    (long) VAR_11->aoemajor, VAR_11->aoeminor,
    VAR_8->len);
   break;
  }
  if (FUNC_14(VAR_8))
   break;
  FUNC_17(&VAR_11->lock);
  FUNC_3(VAR_11, VAR_9, VAR_8->data);
  FUNC_18(&VAR_11->lock);
  break;
 default:
  FUNC_12("aoe: unrecognized ata command %2.2Xh for %d.%d\n",
   VAR_6->cmdstat,
   FUNC_4(FUNC_8(&VAR_3->major)),
   VAR_3->minor);
 }
out:
 FUNC_17(&VAR_11->lock);
 if (VAR_9->taint > 0
 && --VAR_9->taint > 0
 && VAR_9->nout_probes == 0) {
  FUNC_6(VAR_11, &VAR_13);
  if (VAR_13 > 0) {
   FUNC_13(VAR_9);
   VAR_9->nout_probes++;
  }
 }

 FUNC_1(VAR_2);

 if (VAR_7 && --VAR_7->nframesout == 0 && VAR_7->iter.bi_size == 0)
  FUNC_0(VAR_11, VAR_7);

 FUNC_18(&VAR_11->lock);
 FUNC_2(VAR_11);
 FUNC_7(VAR_8);
}
