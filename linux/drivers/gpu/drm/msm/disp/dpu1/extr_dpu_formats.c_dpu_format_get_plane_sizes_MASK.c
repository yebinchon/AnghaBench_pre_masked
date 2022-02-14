
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct dpu_hw_fmt_layout {int dummy; } ;
struct dpu_format {int dummy; } ;


 scalar_t__ FUNC_0 (struct dpu_format const*) ;
 scalar_t__ FUNC_1 (struct dpu_format const*) ;
 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct dpu_format const*,scalar_t__ const,scalar_t__ const,struct dpu_hw_fmt_layout*,scalar_t__ const*) ;
 int FUNC_4 (struct dpu_format const*,scalar_t__ const,scalar_t__ const,struct dpu_hw_fmt_layout*) ;

__attribute__((used)) static int FUNC_5(
  const struct dpu_format *VAR_4,
  const uint32_t VAR_5,
  const uint32_t VAR_6,
  struct dpu_hw_fmt_layout *VAR_7,
  const uint32_t *VAR_8)
{
 if (!VAR_7 || !VAR_4) {
  FUNC_2("invalid pointer\n");
  return -VAR_2;
 }

 if ((VAR_5 > VAR_1) || (VAR_6 > VAR_0)) {
  FUNC_2("image dimensions outside max range\n");
  return -VAR_3;
 }

 if (FUNC_1(VAR_4) || FUNC_0(VAR_4))
  return FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);

 return FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
