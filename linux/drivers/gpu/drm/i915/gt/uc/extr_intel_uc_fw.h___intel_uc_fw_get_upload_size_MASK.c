
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct uc_css_header {int dummy; } ;
struct intel_uc_fw {scalar_t__ ucode_size; } ;



__attribute__((used)) static inline u32 FUNC_0(struct intel_uc_fw *VAR_0)
{
 return sizeof(struct uc_css_header) + VAR_0->ucode_size;
}
