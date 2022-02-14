
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum dpu_chroma_samp_type { ____Placeholder_dpu_chroma_samp_type } dpu_chroma_samp_type ;






__attribute__((used)) static void FUNC_0(
 enum dpu_chroma_samp_type VAR_0,
 uint32_t *VAR_1,
 uint32_t *VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return;

 switch (VAR_0) {
 case 128:
  *VAR_1 = 1;
  *VAR_2 = 2;
  break;
 case 129:
  *VAR_1 = 2;
  *VAR_2 = 1;
  break;
 case 130:
  *VAR_1 = 2;
  *VAR_2 = 2;
  break;
 default:
  *VAR_1 = 1;
  *VAR_2 = 1;
  break;
 }
}
