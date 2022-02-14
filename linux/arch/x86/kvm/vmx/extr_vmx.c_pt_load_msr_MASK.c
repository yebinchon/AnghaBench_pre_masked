
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_ctx {int * addr_b; int * addr_a; int cr3_match; int output_mask; int output_base; int status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_1(struct pt_ctx *VAR_6, u32 VAR_7)
{
 u32 VAR_8;

 FUNC_0(VAR_5, VAR_6->status);
 FUNC_0(VAR_3, VAR_6->output_base);
 FUNC_0(VAR_4, VAR_6->output_mask);
 FUNC_0(VAR_2, VAR_6->cr3_match);
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  FUNC_0(VAR_0 + VAR_8 * 2, VAR_6->addr_a[VAR_8]);
  FUNC_0(VAR_1 + VAR_8 * 2, VAR_6->addr_b[VAR_8]);
 }
}
