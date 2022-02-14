
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpg_data {int dummy; } ;


 unsigned int FUNC_0 (struct tpg_data const*) ;

__attribute__((used)) static int FUNC_1(const struct tpg_data *VAR_0,
      unsigned VAR_1, unsigned VAR_2)
{
 unsigned VAR_3 = FUNC_0(VAR_0);

 if (VAR_1 == (VAR_2 + 1) % VAR_3)
  return VAR_2;
 if (VAR_2 == (VAR_1 + 1) % VAR_3)
  return VAR_1;
 return -1;
}
