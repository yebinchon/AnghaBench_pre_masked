
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int* VAR_0 ;
 unsigned int FUNC_0 (unsigned int*) ;

__attribute__((used)) static void
FUNC_1(void)
{
 for (unsigned VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++) {
  unsigned VAR_2 = VAR_1;
  for (unsigned VAR_3 = 0; VAR_3 < 8; VAR_3++) {
   if (VAR_2 & 1)
    VAR_2 = 0xEDB88320U ^ (VAR_2 >> 1);
   else
    VAR_2 >>= 1;
  }
  VAR_0[VAR_1] = VAR_2;
      }
}
