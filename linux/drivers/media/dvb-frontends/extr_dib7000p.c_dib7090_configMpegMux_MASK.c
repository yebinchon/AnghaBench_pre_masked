
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dib7000p_state {int input_mode_mpeg; } ;


 int FUNC_0 (struct dib7000p_state*,int,int) ;
 int FUNC_1 (struct dib7000p_state*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct dib7000p_state *VAR_0,
  u16 VAR_1, u16 VAR_2, u16 VAR_3)
{
 FUNC_2("Enable Mpeg mux\n");

 FUNC_1(VAR_0, 0);


 if ((VAR_2 == 1) && (VAR_0->input_mode_mpeg == 1))
  VAR_3 = 0;

 FUNC_0(VAR_0, 1287, ((VAR_1 & 0x1f) << 2)
   | ((VAR_2 & 0x1) << 1)
   | (VAR_3 & 0x1));

 FUNC_1(VAR_0, 1);
}
