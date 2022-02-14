
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {char* name; scalar_t__ start; int flags; } ;
struct drm_i915_private {TYPE_3__ mch_res; TYPE_1__* bridge_dev; } ;
struct TYPE_5__ {int bus; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,TYPE_3__*,scalar_t__,scalar_t__,int ,int ,int ,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,int*) ;
 int FUNC_5 (TYPE_1__*,int,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int
FUNC_8(struct drm_i915_private *VAR_6)
{
 int VAR_7 = FUNC_1(VAR_6) >= 4 ? VAR_2 : VAR_1;
 u32 VAR_8, VAR_9 = 0;
 u64 VAR_10;
 int VAR_11;

 if (FUNC_1(VAR_6) >= 4)
  FUNC_4(VAR_6->bridge_dev, VAR_7 + 4, &VAR_9);
 FUNC_4(VAR_6->bridge_dev, VAR_7, &VAR_8);
 VAR_10 = ((u64)VAR_9 << 32) | VAR_8;
 VAR_6->mch_res.name = "i915 MCHBAR";
 VAR_6->mch_res.flags = VAR_0;
 VAR_11 = FUNC_3(VAR_6->bridge_dev->bus,
         &VAR_6->mch_res,
         VAR_3, VAR_3,
         VAR_4,
         0, VAR_5,
         VAR_6->bridge_dev);
 if (VAR_11) {
  FUNC_0("failed bus alloc: %d\n", VAR_11);
  VAR_6->mch_res.start = 0;
  return VAR_11;
 }

 if (FUNC_1(VAR_6) >= 4)
  FUNC_5(VAR_6->bridge_dev, VAR_7 + 4,
           FUNC_7(VAR_6->mch_res.start));

 FUNC_5(VAR_6->bridge_dev, VAR_7,
          FUNC_2(VAR_6->mch_res.start));
 return 0;
}
