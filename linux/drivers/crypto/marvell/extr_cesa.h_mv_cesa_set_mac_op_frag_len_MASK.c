
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mac_digest; } ;
struct mv_cesa_op_ctx {TYPE_1__ desc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(struct mv_cesa_op_ctx *VAR_1,
            int VAR_2)
{
 VAR_1->desc.mac_digest &= ~VAR_0;
 VAR_1->desc.mac_digest |= FUNC_0(VAR_2);
}
