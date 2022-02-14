
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib8000_state {int dummy; } ;


 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (struct dib8000_state*,int,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct dib8000_state *VAR_0)
{
 u16 VAR_1 = 0;
 FUNC_2("init sdram\n");

 VAR_1 = FUNC_0(VAR_0, 274) & 0xfff0;
 FUNC_1(VAR_0, 274, VAR_1 | 0x7);

 FUNC_1(VAR_0, 1803, (7 << 2));

 VAR_1 = FUNC_0(VAR_0, 1280);
 FUNC_1(VAR_0, 1280, VAR_1 | (1 << 2));
 FUNC_1(VAR_0, 1280, VAR_1);

 return 0;
}
