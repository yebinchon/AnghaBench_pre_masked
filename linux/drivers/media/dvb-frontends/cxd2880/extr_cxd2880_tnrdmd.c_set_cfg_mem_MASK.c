
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct cxd2880_tnrdmd {size_t cfg_mem_last_entry; TYPE_1__* cfg_mem; } ;
typedef enum cxd2880_io_tgt { ____Placeholder_cxd2880_io_tgt } cxd2880_io_tgt ;
struct TYPE_2__ {int tgt; size_t bank; size_t address; size_t value; size_t bit_mask; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct cxd2880_tnrdmd *VAR_3,
         enum cxd2880_io_tgt VAR_4,
         u8 VAR_5, u8 VAR_6, u8 VAR_7, u8 VAR_8)
{
 u8 VAR_9;
 u8 VAR_10 = 0;

 if (!VAR_3)
  return -VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_3->cfg_mem_last_entry; VAR_9++) {
  if (VAR_10 == 0 &&
      VAR_3->cfg_mem[VAR_9].tgt == VAR_4 &&
      VAR_3->cfg_mem[VAR_9].bank == VAR_5 &&
      VAR_3->cfg_mem[VAR_9].address == VAR_6) {
   VAR_3->cfg_mem[VAR_9].value &= ~VAR_8;
   VAR_3->cfg_mem[VAR_9].value |= (VAR_7 & VAR_8);

   VAR_3->cfg_mem[VAR_9].bit_mask |= VAR_8;

   VAR_10 = 1;
  }
 }

 if (VAR_10)
  return 0;

 if (VAR_3->cfg_mem_last_entry < VAR_0) {
  VAR_3->cfg_mem[VAR_3->cfg_mem_last_entry].tgt = VAR_4;
  VAR_3->cfg_mem[VAR_3->cfg_mem_last_entry].bank = VAR_5;
  VAR_3->cfg_mem[VAR_3->cfg_mem_last_entry].address = VAR_6;
  VAR_3->cfg_mem[VAR_3->cfg_mem_last_entry].value = (VAR_7 & VAR_8);
  VAR_3->cfg_mem[VAR_3->cfg_mem_last_entry].bit_mask = VAR_8;
  VAR_3->cfg_mem_last_entry++;
 } else {
  return -VAR_2;
 }

 return 0;
}
