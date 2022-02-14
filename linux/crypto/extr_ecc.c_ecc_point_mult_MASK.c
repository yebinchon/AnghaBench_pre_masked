
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u64 ;
struct ecc_point {int const* y; int const* x; int ndigits; } ;
struct ecc_curve {int n; int const* p; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,int const*,int const*,int const*,unsigned int) ;
 int FUNC_1 (int const*,int const*,int ,unsigned int) ;
 int FUNC_2 (int const*,int const*,int const*,int ) ;
 int FUNC_3 (int const*,int const*,int const*,int const*,unsigned int) ;
 int FUNC_4 (int const*,int const*,int const*,int const*,unsigned int) ;
 int FUNC_5 (int const*,int const*,unsigned int) ;
 int FUNC_6 (int const*,int) ;
 int FUNC_7 (int const*,int const*,int const*,int const*,int const*,unsigned int) ;
 int FUNC_8 (int const*,int const*,int const*,int const*,int const*,unsigned int) ;
 int FUNC_9 (int const*,int const*,int const*,int const*,int const*,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_10(struct ecc_point *VAR_1,
      const struct ecc_point *VAR_2, const u64 *VAR_3,
      u64 *VAR_4, const struct ecc_curve *VAR_5,
      unsigned int VAR_6)
{

 u64 VAR_7[2][VAR_0];
 u64 VAR_8[2][VAR_0];
 u64 VAR_9[VAR_0];
 u64 VAR_10[2][VAR_0];
 u64 *VAR_11 = VAR_5->p;
 int VAR_12, VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_15 = FUNC_1(VAR_10[0], VAR_3, VAR_5->n, VAR_6);
 FUNC_1(VAR_10[1], VAR_10[0], VAR_5->n, VAR_6);
 VAR_3 = VAR_10[!VAR_15];
 VAR_14 = sizeof(u64) * VAR_6 * 8 + 1;

 FUNC_5(VAR_7[1], VAR_2->x, VAR_6);
 FUNC_5(VAR_8[1], VAR_2->y, VAR_6);

 FUNC_9(VAR_7[1], VAR_8[1], VAR_7[0], VAR_8[0], VAR_4, VAR_11,
       VAR_6);

 for (VAR_12 = VAR_14 - 2; VAR_12 > 0; VAR_12--) {
  VAR_13 = !FUNC_6(VAR_3, VAR_12);
  FUNC_8(VAR_7[1 - VAR_13], VAR_8[1 - VAR_13], VAR_7[VAR_13], VAR_8[VAR_13], VAR_11,
      VAR_6);
  FUNC_7(VAR_7[VAR_13], VAR_8[VAR_13], VAR_7[1 - VAR_13], VAR_8[1 - VAR_13], VAR_11,
    VAR_6);
 }

 VAR_13 = !FUNC_6(VAR_3, 0);
 FUNC_8(VAR_7[1 - VAR_13], VAR_8[1 - VAR_13], VAR_7[VAR_13], VAR_8[VAR_13], VAR_11,
     VAR_6);



 FUNC_4(VAR_9, VAR_7[1], VAR_7[0], VAR_11, VAR_6);

 FUNC_3(VAR_9, VAR_9, VAR_8[1 - VAR_13], VAR_11, VAR_6);

 FUNC_3(VAR_9, VAR_9, VAR_2->x, VAR_11, VAR_6);


 FUNC_2(VAR_9, VAR_9, VAR_11, VAR_2->ndigits);


 FUNC_3(VAR_9, VAR_9, VAR_2->y, VAR_11, VAR_6);

 FUNC_3(VAR_9, VAR_9, VAR_7[1 - VAR_13], VAR_11, VAR_6);


 FUNC_7(VAR_7[VAR_13], VAR_8[VAR_13], VAR_7[1 - VAR_13], VAR_8[1 - VAR_13], VAR_11, VAR_6);

 FUNC_0(VAR_7[0], VAR_8[0], VAR_9, VAR_11, VAR_6);

 FUNC_5(VAR_1->x, VAR_7[0], VAR_6);
 FUNC_5(VAR_1->y, VAR_8[0], VAR_6);
}
