
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxe_pkt_info {size_t paylen; size_t opcode; } ;
struct TYPE_2__ {size_t* offset; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (struct rxe_pkt_info*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static inline size_t FUNC_1(struct rxe_pkt_info *VAR_3)
{
 return VAR_3->paylen - VAR_2[VAR_3->opcode].offset[VAR_1]
  - FUNC_0(VAR_3) - VAR_0;
}
