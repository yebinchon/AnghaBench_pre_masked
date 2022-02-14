
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_sock {int dummy; } ;
typedef void* __be32 ;
struct TYPE_2__ {void* ir_rmt_addr; void* ir_loc_addr; } ;


 TYPE_1__* FUNC_0 (struct request_sock*) ;

__attribute__((used)) static inline void FUNC_1(struct request_sock *VAR_0,
          __be32 VAR_1, __be32 VAR_2)
{
 FUNC_0(VAR_0)->ir_loc_addr = VAR_1;
 FUNC_0(VAR_0)->ir_rmt_addr = VAR_2;
}
