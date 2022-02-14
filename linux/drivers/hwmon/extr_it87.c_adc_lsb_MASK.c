
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct it87_data {int in_scaled; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct it87_data const*) ;
 scalar_t__ FUNC_2 (struct it87_data const*) ;

__attribute__((used)) static int FUNC_3(const struct it87_data *VAR_0, int VAR_1)
{
 int VAR_2;

 if (FUNC_2(VAR_0))
  VAR_2 = 120;
 else if (FUNC_1(VAR_0))
  VAR_2 = 109;
 else
  VAR_2 = 160;
 if (VAR_0->in_scaled & FUNC_0(VAR_1))
  VAR_2 <<= 1;
 return VAR_2;
}
