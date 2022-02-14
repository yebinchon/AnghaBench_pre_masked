
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct v3d_fence {int base; int seqno; } ;
struct v3d_dev {scalar_t__ single_irq_line; int dev; int drm; TYPE_6__* csd_job; TYPE_4__* render_job; TYPE_2__* bin_job; int overflow_mem_work; } ;
typedef scalar_t__ irqreturn_t ;
struct TYPE_11__ {int irq_fence; } ;
struct TYPE_12__ {TYPE_5__ base; } ;
struct TYPE_9__ {int irq_fence; } ;
struct TYPE_10__ {TYPE_3__ base; } ;
struct TYPE_7__ {int irq_fence; } ;
struct TYPE_8__ {TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct v3d_fence* FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int,void*) ;

__attribute__((used)) static irqreturn_t
FUNC_10(int VAR_9, void *VAR_10)
{
 struct v3d_dev *VAR_11 = VAR_10;
 u32 VAR_12;
 irqreturn_t VAR_13 = VAR_1;

 VAR_12 = FUNC_0(0, VAR_3);


 FUNC_1(0, VAR_2, VAR_12);

 if (VAR_12 & VAR_8) {





  FUNC_4(&VAR_11->overflow_mem_work);
  VAR_13 = VAR_0;
 }

 if (VAR_12 & VAR_5) {
  struct v3d_fence *VAR_14 =
   FUNC_5(VAR_11->bin_job->base.irq_fence);

  FUNC_6(&VAR_11->drm, VAR_14->seqno);
  FUNC_3(&VAR_14->base);
  VAR_13 = VAR_0;
 }

 if (VAR_12 & VAR_6) {
  struct v3d_fence *VAR_15 =
   FUNC_5(VAR_11->render_job->base.irq_fence);

  FUNC_8(&VAR_11->drm, VAR_15->seqno);
  FUNC_3(&VAR_15->base);
  VAR_13 = VAR_0;
 }

 if (VAR_12 & VAR_4) {
  struct v3d_fence *VAR_16 =
   FUNC_5(VAR_11->csd_job->base.irq_fence);

  FUNC_7(&VAR_11->drm, VAR_16->seqno);
  FUNC_3(&VAR_16->base);
  VAR_13 = VAR_0;
 }




 if (VAR_12 & VAR_7)
  FUNC_2(VAR_11->dev, "GMP violation\n");




 if (VAR_11->single_irq_line && VAR_13 == VAR_1)
  return FUNC_9(VAR_9, VAR_10);

 return VAR_13;
}
