
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kimage {unsigned long nr_segments; TYPE_1__* segment; int head; int start; int type; } ;
struct TYPE_2__ {int mem; int memsz; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const char *VAR_1, int VAR_2,
 const struct kimage *VAR_3)
{
 unsigned long VAR_4;

 FUNC_0("%s:%d:\n", VAR_1, VAR_2);
 FUNC_0("  kexec kimage info:\n");
 FUNC_0("    type:        %d\n", VAR_3->type);
 FUNC_0("    start:       %lx\n", VAR_3->start);
 FUNC_0("    head:        %lx\n", VAR_3->head);
 FUNC_0("    nr_segments: %lu\n", VAR_3->nr_segments);

 for (VAR_4 = 0; VAR_4 < VAR_3->nr_segments; VAR_4++) {
  FUNC_0("      segment[%lu]: %016lx - %016lx, 0x%lx bytes, %lu pages\n",
   VAR_4,
   VAR_3->segment[VAR_4].mem,
   VAR_3->segment[VAR_4].mem + VAR_3->segment[VAR_4].memsz,
   VAR_3->segment[VAR_4].memsz,
   VAR_3->segment[VAR_4].memsz / VAR_0);
 }
}
