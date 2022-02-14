
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct lg216x_state {int dummy; } ;


 int FUNC_0 (struct lg216x_state*,int ,int*) ;
 int FUNC_1 (struct lg216x_state*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct lg216x_state *VAR_0,
         u16 VAR_1, int VAR_2, int VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 FUNC_3("reg: 0x%04x, bit: %d, level: %d\n", VAR_1, VAR_2, VAR_3);

 VAR_5 = FUNC_0(VAR_0, VAR_1, &VAR_4);
 if (FUNC_2(VAR_5))
  goto fail;

 VAR_4 &= ~(1 << VAR_2);
 VAR_4 |= (VAR_3 & 1) << VAR_2;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_4);
 FUNC_2(VAR_5);
fail:
 return VAR_5;
}
