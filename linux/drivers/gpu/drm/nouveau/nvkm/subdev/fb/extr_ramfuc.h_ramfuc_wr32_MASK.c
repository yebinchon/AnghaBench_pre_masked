
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ramfuc_reg {unsigned int mask; scalar_t__ stride; int data; scalar_t__ addr; int sequence; } ;
struct ramfuc {int memx; int sequence; } ;


 int FUNC_0 (int ,scalar_t__,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct ramfuc *VAR_0, struct ramfuc_reg *VAR_1, u32 VAR_2)
{
 unsigned int VAR_3, VAR_4 = 0;

 VAR_1->sequence = VAR_0->sequence;
 VAR_1->data = VAR_2;

 for (VAR_3 = VAR_1->mask; VAR_3 > 0; VAR_3 = (VAR_3 & ~1) >> 1) {
  if (VAR_3 & 1)
   FUNC_0(VAR_0->memx, VAR_1->addr+VAR_4, VAR_1->data);
  VAR_4 += VAR_1->stride;
 }
}
