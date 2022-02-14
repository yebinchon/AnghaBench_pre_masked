
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {scalar_t__ psr2_enabled; } ;
struct drm_i915_private {TYPE_1__ psr; } ;


 size_t FUNC_0 (char const* const*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,char*,char const*,size_t) ;

__attribute__((used)) static void
FUNC_3(struct drm_i915_private *VAR_6, struct seq_file *VAR_7)
{
 u32 VAR_8, VAR_9;
 const char *VAR_10 = "unknown";

 if (VAR_6->psr.psr2_enabled) {
  static const char * const VAR_11[] = {
   "IDLE",
   "CAPTURE",
   "CAPTURE_FS",
   "SLEEP",
   "BUFON_FW",
   "ML_UP",
   "SU_STANDBY",
   "FAST_SLEEP",
   "DEEP_SLEEP",
   "BUF_ON",
   "TG_ON"
  };
  VAR_8 = FUNC_1(VAR_0);
  VAR_9 = (VAR_8 & VAR_1) >>
         VAR_2;
  if (VAR_9 < FUNC_0(VAR_11))
   VAR_10 = VAR_11[VAR_9];
 } else {
  static const char * const VAR_12[] = {
   "IDLE",
   "SRDONACK",
   "SRDENT",
   "BUFOFF",
   "BUFON",
   "AUXACK",
   "SRDOFFACK",
   "SRDENT_ON",
  };
  VAR_8 = FUNC_1(VAR_3);
  VAR_9 = (VAR_8 & VAR_4) >>
         VAR_5;
  if (VAR_9 < FUNC_0(VAR_12))
   VAR_10 = VAR_12[VAR_9];
 }

 FUNC_2(VAR_7, "Source PSR status: %s [0x%08x]\n", VAR_10, VAR_8);
}
