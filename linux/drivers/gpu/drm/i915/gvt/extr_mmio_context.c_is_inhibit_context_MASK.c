
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u32 ;
struct intel_context {int* lrc_reg_state; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

bool FUNC_1(struct intel_context *VAR_2)
{
 const u32 *VAR_3 = VAR_2->lrc_reg_state;
 u32 VAR_4 =
  FUNC_0(VAR_1);

 return VAR_4 ==
  (VAR_3[VAR_0] & VAR_4);
}
