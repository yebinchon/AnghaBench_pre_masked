
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct skx_dimm {unsigned int rowbits; unsigned int colbits; int bank_xor_enable; scalar_t__ fine_grain_bank; scalar_t__ close_pg; } ;
struct decoded_addr {size_t imc; size_t channel; size_t dimm; unsigned int row; int column; void* bank_group; void* bank_address; int addr; int rank_address; TYPE_3__* dev; } ;
struct TYPE_6__ {TYPE_2__* imc; } ;
struct TYPE_5__ {TYPE_1__* chan; } ;
struct TYPE_4__ {struct skx_dimm* dimms; } ;


 int FUNC_0 (int,char*,int ,unsigned int,int,void*,void*) ;
 void* FUNC_1 (int ,int,int,int ,int,int) ;
 void* FUNC_2 (int ,unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_3(struct decoded_addr *VAR_5)
{
 struct skx_dimm *VAR_6 = &VAR_5->dev->imc[VAR_5->imc].chan[VAR_5->channel].dimms[VAR_5->dimm];
 int VAR_7 = VAR_6->fine_grain_bank ? 6 : 13;

 if (VAR_6->close_pg) {
  VAR_5->row = FUNC_2(VAR_5->rank_address, VAR_6->rowbits, VAR_1);
  VAR_5->column = FUNC_2(VAR_5->rank_address, VAR_6->colbits, VAR_0);
  VAR_5->column |= 0x400;
  VAR_5->bank_address = FUNC_1(VAR_5->rank_address, 8, 9, VAR_6->bank_xor_enable, 22, 28);
  VAR_5->bank_group = FUNC_1(VAR_5->rank_address, 6, 7, VAR_6->bank_xor_enable, 20, 21);
 } else {
  VAR_5->row = FUNC_2(VAR_5->rank_address, VAR_6->rowbits, VAR_4);
  if (VAR_6->fine_grain_bank)
   VAR_5->column = FUNC_2(VAR_5->rank_address, VAR_6->colbits, VAR_3);
  else
   VAR_5->column = FUNC_2(VAR_5->rank_address, VAR_6->colbits, VAR_2);
  VAR_5->bank_address = FUNC_1(VAR_5->rank_address, 18, 19, VAR_6->bank_xor_enable, 22, 23);
  VAR_5->bank_group = FUNC_1(VAR_5->rank_address, VAR_7, 17, VAR_6->bank_xor_enable, 20, 21);
 }
 VAR_5->row &= (1u << VAR_6->rowbits) - 1;

 FUNC_0(2, "0x%llx: row=0x%x col=0x%x bank_addr=%d bank_group=%d\n",
   VAR_5->addr, VAR_5->row, VAR_5->column, VAR_5->bank_address,
   VAR_5->bank_group);
 return 1;
}
