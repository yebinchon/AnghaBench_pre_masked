
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef char u32 ;
typedef int u16 ;
struct dib9000_state {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dib9000_state*,int,int*,int) ;
 int FUNC_1 (struct dib9000_state*,int,int) ;
 int FUNC_2 (char*,char) ;

__attribute__((used)) static int FUNC_3(struct dib9000_state *VAR_1, u8 VAR_2, u16 VAR_3, const u8 * VAR_4, u32 VAR_5)
{
 u16 VAR_6;

 if (VAR_2 == 1)
  VAR_6 = 16;
 else
  VAR_6 = 0;


 FUNC_1(VAR_1, 1024 + VAR_6, 0x000f);
 FUNC_1(VAR_1, 1025 + VAR_6, 0);
 FUNC_1(VAR_1, 1031 + VAR_6, VAR_3);

 FUNC_2("going to download %dB of microcode\n", VAR_5);
 if (FUNC_0(VAR_1, 1026 + VAR_6, (u8 *) VAR_4, (u16) VAR_5) != 0) {
  FUNC_2("error while downloading microcode for RISC %c\n", 'A' + VAR_2);
  return -VAR_0;
 }

 FUNC_2("Microcode for RISC %c loaded\n", 'A' + VAR_2);

 return 0;
}
