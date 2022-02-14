
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uc_fw {scalar_t__ status; } ;
typedef enum intel_uc_fw_status { ____Placeholder_intel_uc_fw_status } intel_uc_fw_status ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline enum intel_uc_fw_status
FUNC_1(struct intel_uc_fw *VAR_1)
{

 FUNC_0(VAR_1->status == VAR_0);
 return VAR_1->status;
}
