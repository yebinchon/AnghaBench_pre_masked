
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxe_pkt_info {size_t offset; size_t opcode; } ;
struct TYPE_2__ {size_t length; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline size_t FUNC_0(struct rxe_pkt_info *VAR_1)
{
 return VAR_1->offset + VAR_0[VAR_1->opcode].length;
}
