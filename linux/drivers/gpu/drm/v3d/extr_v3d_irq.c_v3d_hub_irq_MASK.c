
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct v3d_fence {int base; int seqno; } ;
struct v3d_dev {int va_width; int ver; int dev; int drm; TYPE_2__* tfu_job; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int irq_fence; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 int FUNC_0 (char const* const*) ;
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
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,char const*,int,long long,char*,char*,char*) ;
 int FUNC_4 (int *) ;
 struct v3d_fence* FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static irqreturn_t
FUNC_7(int VAR_14, void *VAR_15)
{
 struct v3d_dev *VAR_16 = VAR_15;
 u32 VAR_17;
 irqreturn_t VAR_18 = VAR_1;

 VAR_17 = FUNC_1(VAR_6);


 FUNC_2(VAR_2, VAR_17);

 if (VAR_17 & VAR_7) {
  struct v3d_fence *VAR_19 =
   FUNC_5(VAR_16->tfu_job->base.irq_fence);

  FUNC_6(&VAR_16->drm, VAR_19->seqno);
  FUNC_4(&VAR_19->base);
  VAR_18 = VAR_0;
 }

 if (VAR_17 & (VAR_5 |
        VAR_4 |
        VAR_3)) {
  u32 VAR_20 = FUNC_1(VAR_13);
  u64 VAR_21 = ((u64)FUNC_1(VAR_12) <<
    (VAR_16->va_width - 32));
  static const char *const VAR_22[] = {
   "L2T",
   "PTB",
   "PSE",
   "TLB",
   "CLE",
   "TFU",
   "MMU",
   "GMP",
  };
  const char *VAR_23 = "?";

  FUNC_2(VAR_8,
     FUNC_1(VAR_8) & (VAR_9 |
         VAR_10 |
         VAR_11));

  if (VAR_16->ver >= 41) {
   VAR_20 = VAR_20 >> 5;
   if (VAR_20 < FUNC_0(VAR_22))
    VAR_23 = VAR_22[VAR_20];
  }

  FUNC_3(VAR_16->dev, "MMU error from client %s (%d) at 0x%llx%s%s%s\n",
   VAR_23, VAR_20, (long long)VAR_21,
   ((VAR_17 & VAR_5) ?
    ", write violation" : ""),
   ((VAR_17 & VAR_4) ?
    ", pte invalid" : ""),
   ((VAR_17 & VAR_3) ?
    ", cap exceeded" : ""));
  VAR_18 = VAR_0;
 }

 return VAR_18;
}
