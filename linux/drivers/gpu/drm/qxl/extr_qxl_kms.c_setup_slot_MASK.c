
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct qxl_memslot {unsigned int index; char const* name; unsigned long start_phys_addr; unsigned long size; int generation; int high_bits; scalar_t__ gpu_offset; } ;
struct qxl_device {TYPE_1__* rom; } ;
struct TYPE_2__ {int slot_generation; int slots_start; int slot_gen_bits; int slot_id_bits; } ;


 int FUNC_0 (char*,int,char const*,unsigned long,unsigned long,unsigned long) ;
 int FUNC_1 (struct qxl_device*,struct qxl_memslot*) ;

__attribute__((used)) static void FUNC_2(struct qxl_device *VAR_0,
         struct qxl_memslot *VAR_1,
         unsigned int VAR_2,
         const char *VAR_3,
         unsigned long VAR_4,
         unsigned long VAR_5)
{
 uint64_t VAR_6;

 VAR_1->index = VAR_2;
 VAR_1->name = VAR_3;
 VAR_1->start_phys_addr = VAR_4;
 VAR_1->size = VAR_5;

 FUNC_1(VAR_0, VAR_1);

 VAR_1->generation = VAR_0->rom->slot_generation;
 VAR_6 = (VAR_0->rom->slots_start + VAR_1->index)
  << VAR_0->rom->slot_gen_bits;
 VAR_6 |= VAR_1->generation;
 VAR_6 <<= (64 - (VAR_0->rom->slot_gen_bits + VAR_0->rom->slot_id_bits));
 VAR_1->high_bits = VAR_6;

 FUNC_0("slot %d (%s): base 0x%08lx, size 0x%08lx, gpu_offset 0x%lx\n",
   VAR_1->index, VAR_1->name,
   (unsigned long)VAR_1->start_phys_addr,
   (unsigned long)VAR_1->size,
   (unsigned long)VAR_1->gpu_offset);
}
