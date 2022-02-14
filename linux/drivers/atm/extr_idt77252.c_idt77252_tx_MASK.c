
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vc_map {int flags; int index; } ;
struct tsq_entry {int word_2; int word_1; } ;
struct TYPE_2__ {struct tsq_entry* next; struct tsq_entry* base; struct tsq_entry* last; } ;
struct idt77252_dev {int vpibits; int vcibits; TYPE_1__ tsq; int index; int name; struct vc_map** vcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;




 int FUNC_1 (char*,struct tsq_entry*,...) ;
 int VAR_7 ;
 size_t FUNC_2 (struct idt77252_dev*,unsigned int,unsigned int) ;
 int FUNC_3 (char*,int ,int ,int ,struct tsq_entry*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct idt77252_dev*,struct vc_map*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,unsigned int,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (unsigned long,int ) ;

__attribute__((used)) static void
FUNC_11(struct idt77252_dev *VAR_8)
{
 struct tsq_entry *VAR_9;
 unsigned int VAR_10, VAR_11;
 struct vc_map *VAR_12;
 u32 VAR_13, VAR_14;

 if (VAR_8->tsq.next == VAR_8->tsq.last)
  VAR_9 = VAR_8->tsq.base;
 else
  VAR_9 = VAR_8->tsq.next + 1;

 FUNC_1("idt77252_tx: tsq  %p: base %p, next %p, last %p\n", VAR_9,
   VAR_8->tsq.base, VAR_8->tsq.next, VAR_8->tsq.last);
 FUNC_1("idt77252_tx: tsqb %08x, tsqt %08x, tsqh %08x, \n",
   FUNC_8(VAR_0),
   FUNC_8(VAR_2),
   FUNC_8(VAR_1));

 VAR_14 = FUNC_6(VAR_9->word_2);

 if (VAR_14 & VAR_5)
  return;

 do {
  FUNC_1("tsqe: 0x%p [0x%08x 0x%08x]\n", VAR_9,
    FUNC_6(VAR_9->word_1),
    FUNC_6(VAR_9->word_2));

  switch (VAR_14 & VAR_6) {
  case 129:
   FUNC_1("%s: Timer RollOver detected.\n", VAR_8->name);
   break;

  case 131:

   VAR_13 = FUNC_6(VAR_9->word_1);

   if (FUNC_0(VAR_14) == 0x10) {





    break;
   }

   VAR_12 = VAR_8->vcs[VAR_13 & 0x1fff];
   if (!VAR_12) {
    FUNC_7("%s: could not find VC from conn %d\n",
           VAR_8->name, VAR_13 & 0x1fff);
    break;
   }

   FUNC_7("%s: Connection %d IDLE.\n",
          VAR_8->name, VAR_12->index);

   FUNC_9(VAR_7, &VAR_12->flags);
   break;

  case 128:

   VAR_13 = FUNC_6(VAR_9->word_1);

   VAR_12 = VAR_8->vcs[VAR_13 & 0x1fff];
   if (!VAR_12) {
    FUNC_7("%s: no VC at index %d\n",
           VAR_8->name,
           FUNC_6(VAR_9->word_1) & 0x1fff);
    break;
   }

   FUNC_5(VAR_8, VAR_12);
   break;

  case 130:

   VAR_13 = FUNC_6(VAR_9->word_1);

   VAR_10 = (VAR_13 >> VAR_4) & 0x00ff;
   VAR_11 = (VAR_13 >> VAR_3) & 0xffff;

   if (VAR_10 >= (1 << VAR_8->vpibits) ||
       VAR_11 >= (1 << VAR_8->vcibits)) {
    FUNC_7("%s: TBD complete: "
           "out of range VPI.VCI %u.%u\n",
           VAR_8->name, VAR_10, VAR_11);
    break;
   }

   VAR_12 = VAR_8->vcs[FUNC_2(VAR_8, VAR_10, VAR_11)];
   if (!VAR_12) {
    FUNC_7("%s: TBD complete: "
           "no VC at VPI.VCI %u.%u\n",
           VAR_8->name, VAR_10, VAR_11);
    break;
   }

   FUNC_5(VAR_8, VAR_12);
   break;
  }

  VAR_9->word_2 = FUNC_4(VAR_5);

  VAR_8->tsq.next = VAR_9;
  if (VAR_8->tsq.next == VAR_8->tsq.last)
   VAR_9 = VAR_8->tsq.base;
  else
   VAR_9 = VAR_8->tsq.next + 1;

  FUNC_1("tsqe: %p: base %p, next %p, last %p\n", VAR_9,
    VAR_8->tsq.base, VAR_8->tsq.next, VAR_8->tsq.last);

  VAR_14 = FUNC_6(VAR_9->word_2);

 } while (!(VAR_14 & VAR_5));

 FUNC_10((unsigned long)VAR_8->tsq.next - (unsigned long)VAR_8->tsq.base,
        VAR_1);

 FUNC_3("idt77252_tx-after writel%d: TSQ head = 0x%x, tail = 0x%x, next = 0x%p.\n",
  VAR_8->index, FUNC_8(VAR_1),
  FUNC_8(VAR_2), VAR_8->tsq.next);
}
