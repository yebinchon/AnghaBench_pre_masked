
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_desc {int contents; scalar_t__ seg_not_present; int seg_32bit; } ;


 scalar_t__ FUNC_0 (struct user_desc const*) ;
 scalar_t__ FUNC_1 (struct user_desc const*) ;

__attribute__((used)) static bool FUNC_2(const struct user_desc *VAR_0)
{
 if (FUNC_0(VAR_0) || FUNC_1(VAR_0))
  return 1;





 if (!VAR_0->seg_32bit)
  return 0;


 if (VAR_0->contents > 1)
  return 0;
 if (VAR_0->seg_not_present)
  return 0;

 return 1;
}
