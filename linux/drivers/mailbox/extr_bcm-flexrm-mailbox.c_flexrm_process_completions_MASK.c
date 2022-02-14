
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef size_t u32 ;
struct mbox_chan {int dummy; } ;
struct flexrm_ring {size_t num; size_t cmpl_read_offset; int msg_cmpl_count; TYPE_2__* mbox; int lock; int requests_bmap; struct brcm_message** requests; scalar_t__ cmpl_base; scalar_t__ regs; } ;
struct brcm_message {int error; } ;
struct TYPE_3__ {struct mbox_chan* chans; } ;
struct TYPE_4__ {int dev; TYPE_1__ controller; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,size_t,int ) ;
 int FUNC_2 (int ,char*,size_t,unsigned long,...) ;
 int FUNC_3 (scalar_t__) ;
 size_t FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,struct brcm_message*) ;
 int FUNC_6 (struct mbox_chan*,struct brcm_message*) ;
 size_t FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct flexrm_ring *VAR_3)
{
 u64 VAR_4;
 int VAR_5, VAR_6 = 0;
 unsigned long VAR_7;
 struct brcm_message *VAR_8 = ((void*)0);
 u32 VAR_9, VAR_10, VAR_11;
 struct mbox_chan *VAR_12 = &VAR_3->mbox->controller.chans[VAR_3->num];

 FUNC_8(&VAR_3->lock, VAR_7);
 VAR_11 = FUNC_7(VAR_3->regs + VAR_1);
 VAR_11 *= VAR_2;
 VAR_10 = VAR_3->cmpl_read_offset;
 VAR_3->cmpl_read_offset = VAR_11;

 FUNC_9(&VAR_3->lock, VAR_7);


 VAR_9 = 0;
 while (VAR_10 != VAR_11) {

  VAR_4 = *((u64 *)(VAR_3->cmpl_base + VAR_10));


  VAR_10 += VAR_2;
  if (VAR_10 == VAR_0)
   VAR_10 = 0;


  VAR_5 = FUNC_3(VAR_4);
  if (VAR_5 < 0) {
   FUNC_2(VAR_3->mbox->dev,
   "ring%d got completion desc=0x%lx with error %d\n",
   VAR_3->num, (unsigned long)VAR_4, VAR_5);
  }


  VAR_9 = FUNC_4(VAR_4);


  VAR_8 = VAR_3->requests[VAR_9];
  if (!VAR_8) {
   FUNC_2(VAR_3->mbox->dev,
   "ring%d null msg pointer for completion desc=0x%lx\n",
   VAR_3->num, (unsigned long)VAR_4);
   continue;
  }


  VAR_3->requests[VAR_9] = ((void*)0);
  FUNC_8(&VAR_3->lock, VAR_7);
  FUNC_1(VAR_3->requests_bmap, VAR_9, 0);
  FUNC_9(&VAR_3->lock, VAR_7);


  FUNC_5(VAR_3->mbox->dev, VAR_8);


  VAR_8->error = VAR_5;
  FUNC_6(VAR_12, VAR_8);


  FUNC_0(&VAR_3->msg_cmpl_count);
  VAR_6++;
 }

 return VAR_6;
}
