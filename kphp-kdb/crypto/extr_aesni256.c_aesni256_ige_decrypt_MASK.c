
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aesni256_ctx {int dummy; } ;



__attribute__((used)) static void FUNC_0 (struct aesni256_ctx *VAR_0, const unsigned char *VAR_1, unsigned char *VAR_2, int VAR_3, unsigned char VAR_4[32]) {
  void *VAR_5, *VAR_6;
  if (VAR_3 < 16) {
    return;
  }
  asm volatile (
      "movdqu 0x10(%5), %%xmm1\n\t"
      "movdqu 0x0(%5), %%xmm3\n\t"
      "1:\n\t"
      "subl $0x10, %3\n\t"
      "movdqu (%4), %%xmm2\n\t"

      "addq $0x10, %4\n\t"



      "movaps %%xmm2, %%xmm4\n\t"
      "pxor %%xmm1, %%xmm2\n\t"
      "pxor 0xe0(%6), %%xmm2\n\t"
      "aesdec 0xd0(%6), %%xmm2\n\t"
      "aesdec 0xc0(%6), %%xmm2\n\t"
      "aesdec 0xb0(%6), %%xmm2\n\t"
      "aesdec 0xa0(%6), %%xmm2\n\t"
      "aesdec 0x90(%6), %%xmm2\n\t"
      "aesdec 0x80(%6), %%xmm2\n\t"
      "aesdec 0x70(%6), %%xmm2\n\t"
      "aesdec 0x60(%6), %%xmm2\n\t"
      "aesdec 0x50(%6), %%xmm2\n\t"
      "aesdec 0x40(%6), %%xmm2\n\t"
      "aesdec 0x30(%6), %%xmm2\n\t"
      "aesdec 0x20(%6), %%xmm2\n\t"
      "aesdec 0x10(%6), %%xmm2\n\t"
      "aesdeclast 0x00(%6), %%xmm2\n\t"
      "pxor %%xmm3, %%xmm2\n\t"
      "movaps %%xmm2, %%xmm1\n\t"
      "movaps %%xmm4, %%xmm3\n\t"
      "movdqu %%xmm2, (%7)\n\t"

      "addq $0x10, %7\n\t"



      "cmpl $0x0f, %3\n\t"
      "jg 1b\n\t"
      "movdqu %%xmm1, 0x10(%5)\n\t"
      "movdqu %%xmm3, 0x0(%5)\n\t"
    : "=r" (VAR_3), "=r" (VAR_5), "=r" (VAR_6)
    : "0" (VAR_3), "1r" (VAR_1), "r" (VAR_4), "r" (FUNC_0 (VAR_0)), "2r" (VAR_2)
    : "%xmm1", "%xmm2", "%xmm3", "%xmm4", "memory"
  );
}
