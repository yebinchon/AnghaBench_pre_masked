
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ecc_point {int * y; int * x; } ;
struct TYPE_2__ {unsigned int ndigits; } ;
struct ecc_curve {int p; TYPE_1__ g; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int ,unsigned int) ;
 int FUNC_1 (int *,int *,int ,unsigned int) ;
 int FUNC_2 (int *,int *,int *,int ,unsigned int) ;
 int FUNC_3 (int *,int *,unsigned int) ;
 int FUNC_4 (int *,int *,int *,int *,int ,unsigned int) ;

__attribute__((used)) static void FUNC_5(const struct ecc_point *VAR_1,
     const struct ecc_point *VAR_2, const struct ecc_point *VAR_3,
     const struct ecc_curve *VAR_4)
{
 u64 VAR_5[VAR_0];
 u64 VAR_6[VAR_0];
 u64 VAR_7[VAR_0];
 unsigned int VAR_8 = VAR_4->g.ndigits;

 FUNC_3(VAR_1->x, VAR_3->x, VAR_8);
 FUNC_3(VAR_1->y, VAR_3->y, VAR_8);
 FUNC_2(VAR_5, VAR_1->x, VAR_2->x, VAR_4->p, VAR_8);
 FUNC_3(VAR_6, VAR_2->x, VAR_8);
 FUNC_3(VAR_7, VAR_2->y, VAR_8);
 FUNC_4(VAR_6, VAR_7, VAR_1->x, VAR_1->y, VAR_4->p, VAR_8);
 FUNC_1(VAR_5, VAR_5, VAR_4->p, VAR_8);
 FUNC_0(VAR_1->x, VAR_1->y, VAR_5, VAR_4->p, VAR_8);
}
