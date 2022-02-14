
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tx; } ;
struct sdma_desc {size_t buf_tail; size_t buf_ptail; int num_bd; TYPE_2__ vd; int period_len; int chn_real_count; struct sdma_buffer_descriptor* bd; } ;
struct TYPE_6__ {int lock; } ;
struct sdma_channel {int status; TYPE_3__ vc; struct sdma_desc* desc; } ;
struct TYPE_4__ {int status; int count; } ;
struct sdma_buffer_descriptor {TYPE_1__ mode; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sdma_channel *VAR_4)
{
 struct sdma_buffer_descriptor *VAR_5;
 int VAR_6 = 0;
 enum dma_status VAR_7 = VAR_4->status;





 while (VAR_4->desc) {
  struct sdma_desc *VAR_8 = VAR_4->desc;

  VAR_5 = &VAR_8->bd[VAR_8->buf_tail];

  if (VAR_5->mode.status & VAR_0)
   break;

  if (VAR_5->mode.status & VAR_1) {
   VAR_5->mode.status &= ~VAR_1;
   VAR_4->status = VAR_2;
   VAR_6 = -VAR_3;
  }






  VAR_8->chn_real_count = VAR_5->mode.count;
  VAR_5->mode.status |= VAR_0;
  VAR_5->mode.count = VAR_8->period_len;
  VAR_8->buf_ptail = VAR_8->buf_tail;
  VAR_8->buf_tail = (VAR_8->buf_tail + 1) % VAR_8->num_bd;







  FUNC_2(&VAR_4->vc.lock);
  FUNC_0(&VAR_8->vd.tx, ((void*)0));
  FUNC_1(&VAR_4->vc.lock);

  if (VAR_6)
   VAR_4->status = VAR_7;
 }
}
