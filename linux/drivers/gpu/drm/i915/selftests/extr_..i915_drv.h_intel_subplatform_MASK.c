
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_runtime_info {int* platform_mask; } ;
typedef enum intel_platform { ____Placeholder_intel_platform } intel_platform ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct intel_runtime_info const*,int) ;

__attribute__((used)) static inline u32
FUNC_1(const struct intel_runtime_info *VAR_1, enum intel_platform VAR_2)
{
 const unsigned int VAR_3 = FUNC_0(VAR_1, VAR_2);

 return VAR_1->platform_mask[VAR_3] & VAR_0;
}
