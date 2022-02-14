
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct intel_guc_log {int dummy; } ;
struct TYPE_2__ {scalar_t__ guc_log_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,scalar_t__,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static u32 FUNC_3(struct intel_guc_log *VAR_6)
{

 if (VAR_5.guc_log_level < 0) {
  return (FUNC_2(VAR_0) ||
   FUNC_2(VAR_1)) ?
   VAR_3 : VAR_4;
 }

 if (VAR_5.guc_log_level > VAR_3) {
  FUNC_0("Incompatible option detected: %s=%d, %s!\n",
    "guc_log_level", VAR_5.guc_log_level,
    "verbosity too high");
  return (FUNC_2(VAR_0) ||
   FUNC_2(VAR_1)) ?
   VAR_3 : VAR_2;
 }

 FUNC_1(VAR_5.guc_log_level < VAR_2);
 FUNC_1(VAR_5.guc_log_level > VAR_3);
 return VAR_5.guc_log_level;
}
