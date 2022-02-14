
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int * ptr; } ;
struct radeon_cs_parser {TYPE_1__ ib; } ;
struct radeon_cs_packet {unsigned int idx; int count; } ;


 int FUNC_0 (char*,unsigned int,int volatile) ;

void FUNC_1(struct radeon_cs_parser *VAR_0,
      struct radeon_cs_packet *VAR_1)
{
 volatile uint32_t *VAR_2;
 unsigned VAR_3;
 unsigned VAR_4;

 VAR_2 = VAR_0->ib.ptr;
 VAR_4 = VAR_1->idx;
 for (VAR_3 = 0; VAR_3 <= (VAR_1->count + 1); VAR_3++, VAR_4++)
  FUNC_0("ib[%d]=0x%08X\n", VAR_4, VAR_2[VAR_4]);
}
