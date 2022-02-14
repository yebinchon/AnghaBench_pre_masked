
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_i2c {int num_tokens; int* tokens; } ;



__attribute__((used)) static void FUNC_0(struct meson_i2c *VAR_0, int VAR_1)
{
 if (VAR_0->num_tokens < 8)
  VAR_0->tokens[0] |= (VAR_1 & 0xf) << (VAR_0->num_tokens * 4);
 else
  VAR_0->tokens[1] |= (VAR_1 & 0xf) << ((VAR_0->num_tokens % 8) * 4);

 VAR_0->num_tokens++;
}
