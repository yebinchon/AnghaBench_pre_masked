
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct dib8000_state {int dummy; } ;


 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int,int) ;

__attribute__((used)) static void FUNC_2(struct dib8000_state *VAR_0, u8 VAR_1)
{
 u16 VAR_2;

 VAR_2 = FUNC_0(VAR_0, 771);
 if (VAR_1)
  FUNC_1(VAR_0, 771, VAR_2 & 0xfffd);
 else
  FUNC_1(VAR_0, 771, VAR_2 | (1<<1));
}
