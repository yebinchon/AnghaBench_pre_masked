
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bpf_jit {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static void FUNC_2(struct bpf_jit *VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4 = VAR_0 + (VAR_2 - 6) * 8;

 if (VAR_2 == VAR_3)

  FUNC_0(0xe300f000 | VAR_2 << 20 | VAR_4, 0x0024);
 else

  FUNC_1(0xeb00f000 | VAR_2 << 20 | VAR_3 << 16, 0x0024, VAR_4);
}
