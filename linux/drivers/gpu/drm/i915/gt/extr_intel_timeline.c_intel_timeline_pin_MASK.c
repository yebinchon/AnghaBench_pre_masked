
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_timeline {int hwsp_ggtt; int hwsp_cacheline; int pin_count; scalar_t__ hwsp_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

int FUNC_8(struct intel_timeline *VAR_2)
{
 int VAR_3;

 if (FUNC_1(&VAR_2->pin_count, 1, 0))
  return 0;

 VAR_3 = FUNC_6(VAR_2->hwsp_ggtt, 0, 0, VAR_0 | VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_2->hwsp_offset =
  FUNC_5(VAR_2->hwsp_ggtt) +
  FUNC_7(VAR_2->hwsp_offset);

 FUNC_3(VAR_2->hwsp_cacheline);
 if (FUNC_2(&VAR_2->pin_count)) {
  FUNC_4(VAR_2->hwsp_cacheline);
  FUNC_0(VAR_2->hwsp_ggtt);
 }

 return 0;
}
