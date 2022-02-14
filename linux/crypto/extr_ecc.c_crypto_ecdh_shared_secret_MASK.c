
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u64 ;
struct ecc_point {int const* x; int const* y; } ;
struct ecc_curve {int dummy; } ;


 unsigned int FUNC_0 (int const*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ecc_point* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct ecc_point*) ;
 struct ecc_curve* FUNC_3 (unsigned int) ;
 int FUNC_4 (struct ecc_curve const*,struct ecc_point*) ;
 scalar_t__ FUNC_5 (struct ecc_point*) ;
 int FUNC_6 (struct ecc_point*,struct ecc_point*,int const*,int const*,struct ecc_curve const*,unsigned int) ;
 int FUNC_7 (int const*,int const*,unsigned int) ;
 int FUNC_8 (int const*,unsigned int) ;

int FUNC_9(unsigned int VAR_5, unsigned int VAR_6,
         const u64 *VAR_7, const u64 *VAR_8,
         u64 *VAR_9)
{
 int VAR_10 = 0;
 struct ecc_point *VAR_11, *VAR_12;
 u64 VAR_13[VAR_1];
 u64 VAR_14[VAR_1];
 unsigned int VAR_15;
 const struct ecc_curve *VAR_16 = FUNC_3(VAR_5);

 if (!VAR_7 || !VAR_8 || !VAR_16 ||
     VAR_6 > FUNC_0(VAR_13) || VAR_6 > FUNC_0(VAR_14)) {
  VAR_10 = -VAR_3;
  goto out;
 }

 VAR_15 = VAR_6 << VAR_0;

 FUNC_8(VAR_14, VAR_15);

 VAR_12 = FUNC_1(VAR_6);
 if (!VAR_12) {
  VAR_10 = -VAR_4;
  goto out;
 }

 FUNC_7(VAR_8, VAR_12->x, VAR_6);
 FUNC_7(&VAR_8[VAR_6], VAR_12->y, VAR_6);
 VAR_10 = FUNC_4(VAR_16, VAR_12);
 if (VAR_10)
  goto err_alloc_product;

 FUNC_7(VAR_7, VAR_13, VAR_6);

 VAR_11 = FUNC_1(VAR_6);
 if (!VAR_11) {
  VAR_10 = -VAR_4;
  goto err_alloc_product;
 }

 FUNC_6(VAR_11, VAR_12, VAR_13, VAR_14, VAR_16, VAR_6);

 FUNC_7(VAR_11->x, VAR_9, VAR_6);

 if (FUNC_5(VAR_11))
  VAR_10 = -VAR_2;

 FUNC_2(VAR_11);
err_alloc_product:
 FUNC_2(VAR_12);
out:
 return VAR_10;
}
