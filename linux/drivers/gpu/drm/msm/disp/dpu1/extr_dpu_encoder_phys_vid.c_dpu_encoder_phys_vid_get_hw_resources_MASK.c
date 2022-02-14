
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_encoder_phys {size_t intf_idx; } ;
struct dpu_encoder_hw_resources {int * intfs; } ;


 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(
  struct dpu_encoder_phys *VAR_2,
  struct dpu_encoder_hw_resources *VAR_3)
{
 VAR_3->intfs[VAR_2->intf_idx - VAR_0] = VAR_1;
}
