
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lg216x_state {int dummy; } ;


 int FUNC_0 (struct lg216x_state*,int,int*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct lg216x_state *VAR_0, u8 *VAR_1)
{
 u8 VAR_2;
 int VAR_3;

 *VAR_1 = 0xff;

 VAR_3 = FUNC_0(VAR_0, 0x0124, &VAR_2);
 if (FUNC_1(VAR_3))
  goto fail;

 *VAR_1 = ((VAR_2 >> 4) & 0x07) + 1;
fail:
 return VAR_3;
}
