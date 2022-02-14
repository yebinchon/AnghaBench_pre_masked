
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ecc_point {scalar_t__ ndigits; int * x; int * y; } ;
struct TYPE_2__ {scalar_t__ ndigits; } ;
struct ecc_curve {int * p; int * b; int * a; TYPE_1__ g; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ecc_point*) ;
 scalar_t__ FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (int *,int *,int *,int *,scalar_t__) ;
 int FUNC_4 (int *,int *,int *,int *,scalar_t__) ;
 int FUNC_5 (int *,int *,int *,scalar_t__) ;

int FUNC_6(const struct ecc_curve *VAR_2,
    struct ecc_point *VAR_3)
{
 u64 VAR_4[VAR_0], VAR_5[VAR_0], VAR_6[VAR_0];

 if (FUNC_0(VAR_3->ndigits != VAR_2->g.ndigits))
  return -VAR_1;


 if (FUNC_1(VAR_3))
  return -VAR_1;


 if (FUNC_2(VAR_2->p, VAR_3->x, VAR_3->ndigits) != 1)
  return -VAR_1;
 if (FUNC_2(VAR_2->p, VAR_3->y, VAR_3->ndigits) != 1)
  return -VAR_1;


 FUNC_5(VAR_4, VAR_3->y, VAR_2->p, VAR_3->ndigits);
 FUNC_5(VAR_5, VAR_3->x, VAR_2->p, VAR_3->ndigits);
 FUNC_4(VAR_5, VAR_5, VAR_3->x, VAR_2->p, VAR_3->ndigits);
 FUNC_4(VAR_6, VAR_2->a, VAR_3->x, VAR_2->p, VAR_3->ndigits);
 FUNC_3(VAR_6, VAR_6, VAR_2->b, VAR_2->p, VAR_3->ndigits);
 FUNC_3(VAR_6, VAR_6, VAR_5, VAR_2->p, VAR_3->ndigits);
 if (FUNC_2(VAR_4, VAR_6, VAR_3->ndigits) != 0)
  return -VAR_1;

 return 0;
}
