
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int iia; int iis; int ica; int iua; int ioa; int ios; int* coef; int icfg; } ;
struct TYPE_4__ {scalar_t__ irq_fence; struct v3d_dev* v3d; } ;
struct v3d_tfu_job {TYPE_2__ args; TYPE_1__ base; } ;
struct drm_device {int dummy; } ;
struct v3d_dev {struct v3d_tfu_job* tfu_job; struct drm_device drm; } ;
struct drm_sched_job {int dummy; } ;
struct dma_fence {int dummy; } ;
struct TYPE_6__ {int seqno; } ;


 scalar_t__ FUNC_0 (struct dma_fence*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (struct dma_fence*) ;
 int FUNC_3 (scalar_t__) ;
 struct v3d_tfu_job* FUNC_4 (struct drm_sched_job*) ;
 TYPE_3__* FUNC_5 (struct dma_fence*) ;
 int FUNC_6 (struct drm_device*,int ) ;
 struct dma_fence* FUNC_7 (struct v3d_dev*,int ) ;

__attribute__((used)) static struct dma_fence *
FUNC_8(struct drm_sched_job *VAR_14)
{
 struct v3d_tfu_job *VAR_15 = FUNC_4(VAR_14);
 struct v3d_dev *VAR_16 = VAR_15->base.v3d;
 struct drm_device *VAR_17 = &VAR_16->drm;
 struct dma_fence *VAR_18;

 VAR_18 = FUNC_7(VAR_16, VAR_0);
 if (FUNC_0(VAR_18))
  return ((void*)0);

 VAR_16->tfu_job = VAR_15;
 if (VAR_15->base.irq_fence)
  FUNC_3(VAR_15->base.irq_fence);
 VAR_15->base.irq_fence = FUNC_2(VAR_18);

 FUNC_6(VAR_17, FUNC_5(VAR_18)->seqno);

 FUNC_1(VAR_9, VAR_15->args.iia);
 FUNC_1(VAR_10, VAR_15->args.iis);
 FUNC_1(VAR_6, VAR_15->args.ica);
 FUNC_1(VAR_13, VAR_15->args.iua);
 FUNC_1(VAR_11, VAR_15->args.ioa);
 FUNC_1(VAR_12, VAR_15->args.ios);
 FUNC_1(VAR_1, VAR_15->args.coef[0]);
 if (VAR_15->args.coef[0] & VAR_2) {
  FUNC_1(VAR_3, VAR_15->args.coef[1]);
  FUNC_1(VAR_4, VAR_15->args.coef[2]);
  FUNC_1(VAR_5, VAR_15->args.coef[3]);
 }

 FUNC_1(VAR_7, VAR_15->args.icfg | VAR_8);

 return VAR_18;
}
