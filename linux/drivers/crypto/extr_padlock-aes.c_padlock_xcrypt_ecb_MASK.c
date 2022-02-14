
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int const*,int *,void*,void*,int) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(const u8 *VAR_1, u8 *VAR_2, void *VAR_3,
          void *VAR_4, u32 VAR_5)
{
 u32 VAR_6 = VAR_5 & (VAR_0 - 1);

 if (VAR_5 < VAR_0) {
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
  return;
 }

 VAR_5 -= VAR_6;

 if (VAR_6)
  asm volatile (".byte 0xf3,0x0f,0xa7,0xc8"
         : "+S"(VAR_1), "+D"(VAR_2)
         : "d"(VAR_4), "b"(VAR_3), "c"(VAR_6));

 asm volatile (".byte 0xf3,0x0f,0xa7,0xc8"
        : "+S"(VAR_1), "+D"(VAR_2)
        : "d"(VAR_4), "b"(VAR_3), "c"(VAR_5));
}
