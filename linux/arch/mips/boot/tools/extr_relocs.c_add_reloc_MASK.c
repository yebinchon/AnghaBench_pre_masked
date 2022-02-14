
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct relocs {int count; int size; int* offset; } ;


 int FUNC_0 (char*) ;
 void* FUNC_1 (int*,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct relocs *VAR_0, uint32_t VAR_1, unsigned VAR_2)
{




 VAR_1 >>= 2;
 if (VAR_1 > 0x00FFFFFF)
  FUNC_0("Kernel image exceeds maximum size for relocation!\n");

 VAR_1 = (VAR_1 & 0x00FFFFFF) | ((VAR_2 & 0xFF) << 24);

 if (VAR_0->count == VAR_0->size) {
  unsigned long VAR_3 = VAR_0->size + 50000;
  void *VAR_4 = FUNC_1(VAR_0->offset, VAR_3 * sizeof(VAR_0->offset[0]));

  if (!VAR_4)
   FUNC_0("realloc failed\n");

  VAR_0->offset = VAR_4;
  VAR_0->size = VAR_3;
 }
 VAR_0->offset[VAR_0->count++] = VAR_1;
}
