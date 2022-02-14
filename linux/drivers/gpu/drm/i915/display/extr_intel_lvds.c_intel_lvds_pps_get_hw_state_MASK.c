
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_lvds_pps {int powerdown_on_reset; int t1_t2; int t5; int t3; int tx; int t4; void* port; void* divider; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,int,int,int,int,int,void*,void*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 void* FUNC_8 (int ,int) ;

__attribute__((used)) static void FUNC_9(struct drm_i915_private *VAR_8,
     struct intel_lvds_pps *VAR_9)
{
 u32 VAR_10;

 VAR_9->powerdown_on_reset = FUNC_2(FUNC_4(0)) & VAR_5;

 VAR_10 = FUNC_2(FUNC_7(0));
 VAR_9->port = FUNC_8(VAR_2, VAR_10);
 VAR_9->t1_t2 = FUNC_8(VAR_6, VAR_10);
 VAR_9->t5 = FUNC_8(VAR_1, VAR_10);

 VAR_10 = FUNC_2(FUNC_6(0));
 VAR_9->t3 = FUNC_8(VAR_4, VAR_10);
 VAR_9->tx = FUNC_8(VAR_0, VAR_10);

 VAR_10 = FUNC_2(FUNC_5(0));
 VAR_9->divider = FUNC_8(VAR_7, VAR_10);
 VAR_10 = FUNC_8(VAR_3, VAR_10);





 if (VAR_10)
  VAR_10--;

 VAR_9->t4 = VAR_10 * 1000;

 if (FUNC_3(VAR_8) <= 4 &&
     VAR_9->t1_t2 == 0 && VAR_9->t5 == 0 && VAR_9->t3 == 0 && VAR_9->tx == 0) {
  FUNC_1("Panel power timings uninitialized, "
         "setting defaults\n");

  VAR_9->t1_t2 = 40 * 10;
  VAR_9->t5 = 200 * 10;

  VAR_9->t3 = 35 * 10;
  VAR_9->tx = 200 * 10;
 }

 FUNC_0("LVDS PPS:t1+t2 %d t3 %d t4 %d t5 %d tx %d "
    "divider %d port %d powerdown_on_reset %d\n",
    VAR_9->t1_t2, VAR_9->t3, VAR_9->t4, VAR_9->t5, VAR_9->tx,
    VAR_9->divider, VAR_9->port, VAR_9->powerdown_on_reset);
}
