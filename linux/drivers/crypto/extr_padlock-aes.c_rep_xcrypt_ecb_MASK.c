
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cword {int dummy; } ;



__attribute__((used)) static inline void FUNC_0(const u8 *VAR_0, u8 *VAR_1, void *VAR_2,
      struct cword *VAR_3, int VAR_4)
{
 asm volatile (".byte 0xf3,0x0f,0xa7,0xc8"
        : "+S"(VAR_0), "+D"(VAR_1)
        : "d"(VAR_3), "b"(VAR_2), "c"(VAR_4));
}
