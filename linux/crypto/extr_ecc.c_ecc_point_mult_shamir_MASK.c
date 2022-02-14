
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ecc_point {int* x; int* y; } ;
struct TYPE_2__ {unsigned int ndigits; } ;
struct ecc_curve {int p; TYPE_1__ g; } ;


 int VAR_0 ;
 struct ecc_point FUNC_0 (int*,int*,unsigned int) ;
 int FUNC_1 (int*,int*,int*,int ,unsigned int) ;
 int FUNC_2 (struct ecc_point*,struct ecc_point const*,struct ecc_point const*,struct ecc_curve const*) ;
 int FUNC_3 (int*,int*,int*,int ,unsigned int) ;
 unsigned int FUNC_4 (int ,int ) ;
 int FUNC_5 (int*,unsigned int) ;
 int FUNC_6 (int*,int*,int ,unsigned int) ;
 int FUNC_7 (int*,int*,int*,int ,unsigned int) ;
 int FUNC_8 (int*,int*,int*,int ,unsigned int) ;
 int FUNC_9 (int const*,unsigned int) ;
 int FUNC_10 (int*,int*,unsigned int) ;
 int FUNC_11 (int const*,int) ;
 int FUNC_12 (int*,int*,int*,int*,int ,unsigned int) ;

void FUNC_13(const struct ecc_point *VAR_1,
      const u64 *VAR_2, const struct ecc_point *VAR_3,
      const u64 *VAR_4, const struct ecc_point *VAR_5,
      const struct ecc_curve *VAR_6)
{
 u64 VAR_7[VAR_0];
 u64 VAR_8[2][VAR_0];
 u64 *VAR_9 = VAR_1->x;
 u64 *VAR_10 = VAR_1->y;
 unsigned int VAR_11 = VAR_6->g.ndigits;
 unsigned int VAR_12;
 struct ecc_point VAR_13 = FUNC_0(VAR_8[0], VAR_8[1], VAR_11);
 const struct ecc_point *VAR_14[4];
 const struct ecc_point *VAR_15;
 unsigned int VAR_16;
 int VAR_17;

 FUNC_2(&VAR_13, VAR_3, VAR_5, VAR_6);
 VAR_14[0] = ((void*)0);
 VAR_14[1] = VAR_3;
 VAR_14[2] = VAR_5;
 VAR_14[3] = &VAR_13;

 VAR_12 = FUNC_4(FUNC_9(VAR_2, VAR_11),
         FUNC_9(VAR_4, VAR_11));
 VAR_17 = VAR_12 - 1;
 VAR_16 = (!!FUNC_11(VAR_2, VAR_17)) | ((!!FUNC_11(VAR_4, VAR_17)) << 1);
 VAR_15 = VAR_14[VAR_16];

 FUNC_10(VAR_9, VAR_15->x, VAR_11);
 FUNC_10(VAR_10, VAR_15->y, VAR_11);
 FUNC_5(VAR_7 + 1, VAR_11 - 1);
 VAR_7[0] = 1;

 for (--VAR_17; VAR_17 >= 0; VAR_17--) {
  FUNC_3(VAR_9, VAR_10, VAR_7, VAR_6->p, VAR_11);
  VAR_16 = (!!FUNC_11(VAR_2, VAR_17)) | ((!!FUNC_11(VAR_4, VAR_17)) << 1);
  VAR_15 = VAR_14[VAR_16];
  if (VAR_15) {
   u64 VAR_18[VAR_0];
   u64 VAR_19[VAR_0];
   u64 VAR_20[VAR_0];

   FUNC_10(VAR_18, VAR_15->x, VAR_11);
   FUNC_10(VAR_19, VAR_15->y, VAR_11);
   FUNC_1(VAR_18, VAR_19, VAR_7, VAR_6->p, VAR_11);
   FUNC_8(VAR_20, VAR_9, VAR_18, VAR_6->p, VAR_11);
   FUNC_12(VAR_18, VAR_19, VAR_9, VAR_10, VAR_6->p, VAR_11);
   FUNC_7(VAR_7, VAR_7, VAR_20, VAR_6->p, VAR_11);
  }
 }
 FUNC_6(VAR_7, VAR_7, VAR_6->p, VAR_11);
 FUNC_1(VAR_9, VAR_10, VAR_7, VAR_6->p, VAR_11);
}
