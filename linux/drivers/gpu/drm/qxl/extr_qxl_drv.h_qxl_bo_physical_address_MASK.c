
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long uint64_t ;
struct qxl_memslot {int gpu_offset; unsigned long high_bits; } ;
struct qxl_device {struct qxl_memslot surfaces_slot; struct qxl_memslot main_slot; } ;
struct TYPE_3__ {scalar_t__ mem_type; } ;
struct TYPE_4__ {int offset; TYPE_1__ mem; } ;
struct qxl_bo {TYPE_2__ tbo; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline uint64_t
FUNC_1(struct qxl_device *VAR_1, struct qxl_bo *VAR_2,
   unsigned long VAR_3)
{
 struct qxl_memslot *VAR_4 =
  (VAR_2->tbo.mem.mem_type == VAR_0)
  ? &VAR_1->main_slot : &VAR_1->surfaces_slot;

 FUNC_0((VAR_2->tbo.offset & VAR_4->gpu_offset) != VAR_4->gpu_offset);


 return VAR_4->high_bits | (VAR_2->tbo.offset - VAR_4->gpu_offset + VAR_3);
}
