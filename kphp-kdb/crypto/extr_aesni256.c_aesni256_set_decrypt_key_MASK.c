
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aesni256_ctx {int * a; } ;


 int FUNC_0 (struct aesni256_ctx*,unsigned char*) ;
 unsigned char* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2 (struct aesni256_ctx *VAR_0, unsigned char VAR_1[32]) {
  int VAR_2;
  FUNC_0 (VAR_0, VAR_1);
  unsigned char *VAR_3 = FUNC_1 (&VAR_0->a[0]);
  for (VAR_2 = 1; VAR_2 <= 13; VAR_2++) {
    asm volatile (
      "aesimc (%0), %%xmm1\n\t"
      "movdqa %%xmm1, (%0)\n\t"
    :
    : "r" (&VAR_3[VAR_2 * 16])
    : "%xmm1", "memory"
    );
  }
}
