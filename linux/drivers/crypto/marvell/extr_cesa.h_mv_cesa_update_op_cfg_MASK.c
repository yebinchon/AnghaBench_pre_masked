
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int config; } ;
struct mv_cesa_op_ctx {TYPE_1__ desc; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct mv_cesa_op_ctx *VAR_0,
      u32 VAR_1, u32 VAR_2)
{
 VAR_0->desc.config &= FUNC_0(~VAR_2);
 VAR_0->desc.config |= FUNC_0(VAR_1);
}
