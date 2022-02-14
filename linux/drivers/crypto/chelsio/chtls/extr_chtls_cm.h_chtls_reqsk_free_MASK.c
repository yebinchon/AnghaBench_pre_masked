
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_sock {TYPE_1__* rsk_ops; scalar_t__ rsk_listener; } ;
struct TYPE_2__ {int slab; } ;


 int FUNC_0 (int ,struct request_sock*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct request_sock *VAR_0)
{
 if (VAR_0->rsk_listener)
  FUNC_1(VAR_0->rsk_listener);
 FUNC_0(VAR_0->rsk_ops->slab, VAR_0);
}
