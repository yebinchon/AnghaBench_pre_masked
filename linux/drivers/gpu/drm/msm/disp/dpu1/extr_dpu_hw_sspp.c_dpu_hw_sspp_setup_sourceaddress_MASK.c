
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int * plane_addr; } ;
struct dpu_hw_pipe_cfg {TYPE_1__ layout; } ;
struct dpu_hw_pipe {int hw; } ;
typedef enum dpu_sspp_multirect_index { ____Placeholder_dpu_sspp_multirect_index } dpu_sspp_multirect_index ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (struct dpu_hw_pipe*,int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(struct dpu_hw_pipe *VAR_7,
  struct dpu_hw_pipe_cfg *VAR_8,
  enum dpu_sspp_multirect_index VAR_9)
{
 int VAR_10;
 u32 VAR_11;

 if (FUNC_2(VAR_7, VAR_2, &VAR_11))
  return;

 if (VAR_9 == VAR_1) {
  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_8->layout.plane_addr); VAR_10++)
   FUNC_1(&VAR_7->hw, VAR_3 + VAR_11 + VAR_10 * 0x4,
     VAR_8->layout.plane_addr[VAR_10]);
 } else if (VAR_9 == VAR_0) {
  FUNC_1(&VAR_7->hw, VAR_3 + VAR_11,
    VAR_8->layout.plane_addr[0]);
  FUNC_1(&VAR_7->hw, VAR_5 + VAR_11,
    VAR_8->layout.plane_addr[2]);
 } else {
  FUNC_1(&VAR_7->hw, VAR_4 + VAR_11,
    VAR_8->layout.plane_addr[0]);
  FUNC_1(&VAR_7->hw, VAR_6 + VAR_11,
    VAR_8->layout.plane_addr[2]);
 }
}
