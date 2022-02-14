
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bpf_jit {int seen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static void FUNC_2(struct bpf_jit *VAR_3, u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 u32 VAR_7 = VAR_2 + (VAR_4 - 6) * 8;

 if (VAR_3->seen & VAR_0)
  VAR_7 += VAR_1 + VAR_6;

 if (VAR_4 == VAR_5)

  FUNC_0(0xe300f000 | VAR_4 << 20 | VAR_7, 0x0004);
 else

  FUNC_1(0xeb00f000 | VAR_4 << 20 | VAR_5 << 16, 0x0004, VAR_7);
}
