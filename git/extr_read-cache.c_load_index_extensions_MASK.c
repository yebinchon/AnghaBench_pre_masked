
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct load_index_extensions {unsigned long src_offset; int mmap_size; scalar_t__ mmap; int istate; } ;
struct TYPE_2__ {int rawsz; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (void*,int) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void *FUNC_5(void *VAR_1)
{
 struct load_index_extensions *VAR_2 = VAR_1;
 unsigned long VAR_3 = VAR_2->src_offset;

 while (VAR_3 <= VAR_2->mmap_size - VAR_0->rawsz - 8) {






  uint32_t VAR_4 = FUNC_2(VAR_2->mmap + VAR_3 + 4);
  if (FUNC_4(VAR_2->istate,
      VAR_2->mmap + VAR_3,
      VAR_2->mmap + VAR_3 + 8,
      VAR_4) < 0) {
   FUNC_3((void *)VAR_2->mmap, VAR_2->mmap_size);
   FUNC_1(FUNC_0("index file corrupt"));
  }
  VAR_3 += 8;
  VAR_3 += VAR_4;
 }

 return ((void*)0);
}
