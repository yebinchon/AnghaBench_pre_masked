
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecc_point {int ndigits; int y; int x; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(const struct ecc_point *VAR_0)
{
 return (FUNC_0(VAR_0->x, VAR_0->ndigits) &&
  FUNC_0(VAR_0->y, VAR_0->ndigits));
}
