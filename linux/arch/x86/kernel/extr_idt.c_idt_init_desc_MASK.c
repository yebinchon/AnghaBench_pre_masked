
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef void* u16 ;
struct idt_data {int bits; scalar_t__ segment; scalar_t__ addr; } ;
struct TYPE_3__ {scalar_t__ reserved; scalar_t__ offset_high; void* offset_middle; int bits; void* segment; void* offset_low; } ;
typedef TYPE_1__ gate_desc ;



__attribute__((used)) static inline void FUNC_0(gate_desc *VAR_0, const struct idt_data *VAR_1)
{
 unsigned long VAR_2 = (unsigned long) VAR_1->addr;

 VAR_0->offset_low = (u16) VAR_2;
 VAR_0->segment = (u16) VAR_1->segment;
 VAR_0->bits = VAR_1->bits;
 VAR_0->offset_middle = (u16) (VAR_2 >> 16);




}
