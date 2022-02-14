
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bits; } ;
struct decode_header {TYPE_1__ type_regs; } ;


 int VAR_0 ;
 int* VAR_1 ;

unsigned FUNC_0(const struct decode_header *VAR_2)
{
 unsigned VAR_3 = 0;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < 20; VAR_4 += 4) {
  int VAR_5 = (VAR_2->type_regs.bits >> (VAR_0 + VAR_4)) & 0xf;
  VAR_3 |= VAR_1[VAR_5] << VAR_4;
 }
 return VAR_3;
}
