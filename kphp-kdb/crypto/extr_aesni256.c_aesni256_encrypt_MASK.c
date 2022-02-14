
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0 (unsigned char *VAR_0, const unsigned char *VAR_1, unsigned char *VAR_2) {
  void *VAR_3, *VAR_4;
  asm volatile (
      "movdqu (%2), %%xmm1\n\t"
      "pxor (%3), %%xmm1\n\t"
      "aesenc 0x10(%3), %%xmm1\n\t"
      "aesenc 0x20(%3), %%xmm1\n\t"
      "aesenc 0x30(%3), %%xmm1\n\t"
      "aesenc 0x40(%3), %%xmm1\n\t"
      "aesenc 0x50(%3), %%xmm1\n\t"
      "aesenc 0x60(%3), %%xmm1\n\t"
      "aesenc 0x70(%3), %%xmm1\n\t"
      "aesenc 0x80(%3), %%xmm1\n\t"
      "aesenc 0x90(%3), %%xmm1\n\t"
      "aesenc 0xa0(%3), %%xmm1\n\t"
      "aesenc 0xb0(%3), %%xmm1\n\t"
      "aesenc 0xc0(%3), %%xmm1\n\t"
      "aesenc 0xd0(%3), %%xmm1\n\t"
      "aesenclast 0xe0(%3), %%xmm1\n\t"
      "movdqu %%xmm1, (%4)\n\t"
    : "=r" (VAR_3), "=r" (VAR_4)
    : "0r" (VAR_1), "r" (VAR_0), "1r" (VAR_2)
    : "%xmm1", "memory"
  );
}
