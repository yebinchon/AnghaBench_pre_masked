
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kimage {TYPE_1__* segment; } ;
struct TYPE_2__ {scalar_t__ memsz; scalar_t__ mem; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (char*,unsigned long,scalar_t__,scalar_t__,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_1(const struct kimage *VAR_1,
        unsigned long VAR_2)
{
 FUNC_0("    segment[%lu]: %016lx - %016lx, 0x%lx bytes, %lu pages\n",
   VAR_2,
   VAR_1->segment[VAR_2].mem,
   VAR_1->segment[VAR_2].mem + VAR_1->segment[VAR_2].memsz,
   (unsigned long)VAR_1->segment[VAR_2].memsz,
   (unsigned long)VAR_1->segment[VAR_2].memsz / VAR_0);
}
