
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kimage {unsigned long nr_segments; TYPE_1__* segment; int head; int start; int type; } ;
struct TYPE_2__ {scalar_t__ memsz; scalar_t__ mem; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const struct kimage *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0("kexec kimage info:\n");
 FUNC_0("  type:        %d\n", VAR_1->type);
 FUNC_0("  start:       %lx\n", VAR_1->start);
 FUNC_0("  head:        %lx\n", VAR_1->head);
 FUNC_0("  nr_segments: %lu\n", VAR_1->nr_segments);

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_segments; VAR_2++) {
  FUNC_0("    segment[%lu]: %016lx - %016lx, 0x%lx bytes, %lu pages\n",
   VAR_2,
   VAR_1->segment[VAR_2].mem,
   VAR_1->segment[VAR_2].mem + VAR_1->segment[VAR_2].memsz,
   (unsigned long)VAR_1->segment[VAR_2].memsz,
   (unsigned long)VAR_1->segment[VAR_2].memsz / VAR_0);
 }
}
