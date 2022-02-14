
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxe_pkt_info {size_t opcode; scalar_t__ offset; scalar_t__ hdr; } ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__* offset; } ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static inline __be32 FUNC_1(struct rxe_pkt_info *VAR_2)
{
 return FUNC_0(VAR_2->hdr + VAR_2->offset
  + VAR_1[VAR_2->opcode].offset[VAR_0]);
}
