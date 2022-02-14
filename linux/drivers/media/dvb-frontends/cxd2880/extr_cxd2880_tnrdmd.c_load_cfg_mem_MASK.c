
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct cxd2880_tnrdmd {size_t cfg_mem_last_entry; TYPE_1__* cfg_mem; TYPE_2__* io; } ;
struct TYPE_5__ {int (* write_reg ) (TYPE_2__*,int ,int,int ) ;} ;
struct TYPE_4__ {int bit_mask; int value; int address; int tgt; int bank; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct cxd2880_tnrdmd *VAR_1)
{
 int VAR_2;
 u8 VAR_3;

 if (!VAR_1)
  return -VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_1->cfg_mem_last_entry; VAR_3++) {
  VAR_2 = VAR_1->io->write_reg(VAR_1->io,
          VAR_1->cfg_mem[VAR_3].tgt,
          0x00, VAR_1->cfg_mem[VAR_3].bank);
  if (VAR_2)
   return VAR_2;

  VAR_2 = FUNC_0(VAR_1->io,
           VAR_1->cfg_mem[VAR_3].tgt,
           VAR_1->cfg_mem[VAR_3].address,
           VAR_1->cfg_mem[VAR_3].value,
           VAR_1->cfg_mem[VAR_3].bit_mask);
  if (VAR_2)
   return VAR_2;
 }

 return 0;
}
