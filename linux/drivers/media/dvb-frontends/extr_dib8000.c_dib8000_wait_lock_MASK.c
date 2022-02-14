
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dib8000_state {int revision; } ;


 int FUNC_0 (struct dib8000_state*,int,int) ;

__attribute__((used)) static u32 FUNC_1(struct dib8000_state *VAR_0, u32 VAR_1,
        u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5 = 0;
 u16 VAR_6 = 11;

 for (VAR_6 = 11; VAR_6 < 16; VAR_6 += 2) {
  if (VAR_6 == 11) {
   if (VAR_0->revision == 0x8090)
    VAR_5 = VAR_1 * VAR_3;
   else
    VAR_5 = VAR_1 * VAR_2;
  } else if (VAR_6 == 13)
   VAR_5 = VAR_1 * VAR_3;
  else if (VAR_6 == 15)
   VAR_5 = VAR_1 * VAR_4;
  FUNC_0(VAR_0, VAR_6, (u16)((VAR_5 >> 16) & 0xffff));
  FUNC_0(VAR_0, (VAR_6 + 1), (u16)(VAR_5 & 0xffff));
 }
 return VAR_5;
}
