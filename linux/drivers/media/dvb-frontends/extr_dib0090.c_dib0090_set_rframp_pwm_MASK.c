
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct dib0090_state {scalar_t__ const* rf_ramp; } ;


 int FUNC_0 (struct dib0090_state*,int) ;
 int FUNC_1 (struct dib0090_state*,int,int) ;
 int FUNC_2 (struct dib0090_state*,int,scalar_t__ const*,int) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct dib0090_state *VAR_0, const u16 * VAR_1)
{
 VAR_0->rf_ramp = VAR_1;

 FUNC_1(VAR_0, 0x2a, 0xffff);

 FUNC_3("total RF gain: %ddB, step: %d\n", (u32) VAR_1[0], FUNC_0(VAR_0, 0x2a));

 FUNC_2(VAR_0, 0x2c, VAR_1 + 3, 6);
 FUNC_2(VAR_0, 0x3e, VAR_1 + 9, 2);
}
