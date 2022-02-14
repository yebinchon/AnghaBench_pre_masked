
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qxl_memslot {scalar_t__ index; scalar_t__ size; scalar_t__ start_phys_addr; } ;
struct qxl_device {TYPE_3__* rom; TYPE_2__* ram_header; } ;
struct TYPE_6__ {scalar_t__ slots_start; } ;
struct TYPE_4__ {scalar_t__ mem_end; scalar_t__ mem_start; } ;
struct TYPE_5__ {TYPE_1__ mem_slot; } ;


 int FUNC_0 (struct qxl_device*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct qxl_device *VAR_0, struct qxl_memslot *VAR_1)
{
 VAR_0->ram_header->mem_slot.mem_start = VAR_1->start_phys_addr;
 VAR_0->ram_header->mem_slot.mem_end = VAR_1->start_phys_addr + VAR_1->size;
 FUNC_0(VAR_0, VAR_0->rom->slots_start + VAR_1->index);
}
