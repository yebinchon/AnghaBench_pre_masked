
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct intel_ring {unsigned int effective_size; unsigned int emit; int size; unsigned int space; int * vaddr; } ;
struct i915_request {unsigned int const reserved_space; int timeline; struct intel_ring* ring; } ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,int) ;
 int VAR_0 ;
 int FUNC_4 (int *,int ,unsigned int const) ;
 int FUNC_5 (int *,int ,unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 int FUNC_7 (struct intel_ring*,int ,unsigned int) ;

u32 *FUNC_8(struct i915_request *VAR_1, unsigned int VAR_2)
{
 struct intel_ring *VAR_3 = VAR_1->ring;
 const unsigned int VAR_4 = VAR_3->effective_size - VAR_3->emit;
 const unsigned int VAR_5 = VAR_2 * sizeof(u32);
 unsigned int VAR_6 = 0;
 unsigned int VAR_7;
 u32 *VAR_8;


 FUNC_1(VAR_2 & 1);

 VAR_7 = VAR_5 + VAR_1->reserved_space;
 FUNC_1(VAR_7 > VAR_3->effective_size);

 if (FUNC_6(VAR_7 > VAR_4)) {
  const int VAR_9 = VAR_3->size - VAR_3->emit;

  if (VAR_5 > VAR_4) {





   VAR_7 += VAR_9;
   VAR_6 = VAR_9 | 1;
  } else {






   VAR_7 = VAR_1->reserved_space + VAR_9;
  }
 }

 if (FUNC_6(VAR_7 > VAR_3->space)) {
  int VAR_10;
  FUNC_1(!VAR_1->reserved_space);

  VAR_10 = FUNC_7(VAR_3, VAR_1->timeline, VAR_7);
  if (FUNC_6(VAR_10))
   return FUNC_0(VAR_10);
 }

 if (FUNC_6(VAR_6)) {
  VAR_6 &= ~1;
  FUNC_1(VAR_6 > VAR_3->space);
  FUNC_1(VAR_3->emit + VAR_6 > VAR_3->size);
  FUNC_1(!FUNC_3(VAR_6, sizeof(u64)));


  FUNC_5(VAR_3->vaddr + VAR_3->emit, 0, VAR_6 / sizeof(u64));
  VAR_3->space -= VAR_6;
  VAR_3->emit = 0;
 }

 FUNC_1(VAR_3->emit > VAR_3->size - VAR_5);
 FUNC_1(VAR_3->space < VAR_5);
 VAR_8 = VAR_3->vaddr + VAR_3->emit;
 FUNC_2(FUNC_4(VAR_8, VAR_0, VAR_5 / sizeof(*VAR_8)));
 VAR_3->emit += VAR_5;
 VAR_3->space -= VAR_5;

 return VAR_8;
}
