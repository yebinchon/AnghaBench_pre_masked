
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_options {char const* a_prefix; char const* b_prefix; } ;



void FUNC_0(struct diff_options *VAR_0, const char *VAR_1, const char *VAR_2)
{
 if (!VAR_0->a_prefix)
  VAR_0->a_prefix = VAR_1;
 if (!VAR_0->b_prefix)
  VAR_0->b_prefix = VAR_2;
}
