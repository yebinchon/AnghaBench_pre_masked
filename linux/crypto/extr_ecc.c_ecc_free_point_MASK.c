
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecc_point {struct ecc_point* y; struct ecc_point* x; } ;


 int FUNC_0 (struct ecc_point*) ;

__attribute__((used)) static void FUNC_1(struct ecc_point *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->x);
 FUNC_0(VAR_0->y);
 FUNC_0(VAR_0);
}
