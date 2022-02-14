
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void uint32_t ;
struct paint_info {int pool_count; int end; unsigned int free; unsigned int* pools; int nr_bits; } ;


 int FUNC_0 (char*,unsigned int) ;
 unsigned int FUNC_1 (int ,int) ;
 unsigned int VAR_0 ;
 int FUNC_2 (unsigned int*,int) ;
 unsigned int FUNC_3 (unsigned int) ;

__attribute__((used)) static uint32_t *FUNC_4(struct paint_info *VAR_1)
{
 unsigned VAR_2 = FUNC_1(VAR_1->nr_bits, 32);
 unsigned VAR_3 = VAR_2 * sizeof(uint32_t);
 void *VAR_4;
 if (!VAR_1->pool_count || VAR_3 > VAR_1->end - VAR_1->free) {
  if (VAR_3 > VAR_0)
   FUNC_0("pool size too small for %d in paint_alloc()",
       VAR_3);
  VAR_1->pool_count++;
  FUNC_2(VAR_1->pools, VAR_1->pool_count);
  VAR_1->free = FUNC_3(VAR_0);
  VAR_1->pools[VAR_1->pool_count - 1] = VAR_1->free;
  VAR_1->end = VAR_1->free + VAR_0;
 }
 VAR_4 = VAR_1->free;
 VAR_1->free += VAR_3;
 return VAR_4;
}
