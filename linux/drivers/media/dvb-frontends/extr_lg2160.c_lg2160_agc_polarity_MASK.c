
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lg216x_state {int dummy; } ;


 int FUNC_0 (struct lg216x_state*,int,int*) ;
 int FUNC_1 (struct lg216x_state*,int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct lg216x_state *VAR_0,
          int VAR_1, int VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, 0x0100, &VAR_3);
 if (FUNC_2(VAR_4))
  goto fail;

 VAR_3 &= 0xfc;
 VAR_3 |= (VAR_1) ? 0x02 : 0x00;
 VAR_3 |= (VAR_2) ? 0x01 : 0x00;

 VAR_4 = FUNC_1(VAR_0, 0x0100, VAR_3);
 FUNC_2(VAR_4);
fail:
 return VAR_4;
}
