
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct relocs {int count; int size; int * offset; } ;


 int FUNC_0 (char*,unsigned long) ;
 void* FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct relocs *VAR_0, uint32_t VAR_1)
{
 if (VAR_0->count == VAR_0->size) {
  unsigned long VAR_2 = VAR_0->size + 50000;
  void *VAR_3 = FUNC_1(VAR_0->offset, VAR_2 * sizeof(VAR_0->offset[0]));

  if (!VAR_3)
   FUNC_0("realloc of %ld entries for relocs failed\n",
                                VAR_2);
  VAR_0->offset = VAR_3;
  VAR_0->size = VAR_2;
 }
 VAR_0->offset[VAR_0->count++] = VAR_1;
}
