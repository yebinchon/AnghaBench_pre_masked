
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_sock {int dummy; } ;
typedef int __be16 ;
struct TYPE_2__ {int ir_num; int ir_rmt_port; } ;


 TYPE_1__* FUNC_0 (struct request_sock*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct request_sock *VAR_0,
          __be16 VAR_1, __be16 VAR_2)
{
 FUNC_0(VAR_0)->ir_rmt_port = VAR_1;
 FUNC_0(VAR_0)->ir_num = FUNC_1(VAR_2);
}
