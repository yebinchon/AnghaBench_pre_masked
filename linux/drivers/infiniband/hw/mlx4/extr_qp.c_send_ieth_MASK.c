
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int invalidate_rkey; int imm_data; } ;
struct ib_send_wr {int opcode; TYPE_1__ ex; } ;
typedef int __be32 ;





 int FUNC_0 (int ) ;

__attribute__((used)) static __be32 FUNC_1(const struct ib_send_wr *VAR_0)
{
 switch (VAR_0->opcode) {
 case 129:
 case 130:
  return VAR_0->ex.imm_data;

 case 128:
  return FUNC_0(VAR_0->ex.invalidate_rkey);

 default:
  return 0;
 }
}
