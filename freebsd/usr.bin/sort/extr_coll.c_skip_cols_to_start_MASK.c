
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwstring {int dummy; } ;


 size_t FUNC_0 (struct bwstring const*) ;
 int FUNC_1 (struct bwstring const*,size_t) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static size_t
FUNC_3(const struct bwstring *VAR_0, size_t VAR_1, size_t VAR_2,
    bool VAR_3, bool *VAR_4)
{
 if (VAR_1 < 1)
  return (FUNC_0(VAR_0) + 1);

 if (VAR_3)
  while (VAR_2 < FUNC_0(VAR_0) && FUNC_2(FUNC_1(VAR_0,VAR_2)))
   ++VAR_2;

 while (VAR_2 < FUNC_0(VAR_0) && VAR_1 > 1) {
  --VAR_1;
  ++VAR_2;
 }

 if (VAR_2 >= FUNC_0(VAR_0))
  *VAR_4 = 1;

 return (VAR_2);
}
