
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_ptr {int eptr; void* len; void* len1; int ptr; } ;
typedef int dma_addr_t ;


 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct talitos_ptr *VAR_0, dma_addr_t VAR_1,
      unsigned int VAR_2, bool VAR_3)
{
 VAR_0->ptr = FUNC_1(FUNC_2(VAR_1));
 if (VAR_3) {
  VAR_0->len1 = FUNC_0(VAR_2);
 } else {
  VAR_0->len = FUNC_0(VAR_2);
  VAR_0->eptr = FUNC_3(VAR_1);
 }
}
