
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ecc_point {int const* y; int const* x; } ;
struct ecc_curve {int g; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ecc_point* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct ecc_point*) ;
 struct ecc_curve* FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (struct ecc_point*) ;
 int FUNC_5 (struct ecc_point*,int *,int *,int *,struct ecc_curve const*,unsigned int) ;
 int FUNC_6 (int const*,int *,unsigned int) ;

int FUNC_7(unsigned int VAR_4, unsigned int VAR_5,
       const u64 *VAR_6, u64 *VAR_7)
{
 int VAR_8 = 0;
 struct ecc_point *VAR_9;
 u64 VAR_10[VAR_1];
 const struct ecc_curve *VAR_11 = FUNC_3(VAR_4);

 if (!VAR_6 || !VAR_11 || VAR_5 > FUNC_0(VAR_10)) {
  VAR_8 = -VAR_2;
  goto out;
 }

 FUNC_6(VAR_6, VAR_10, VAR_5);

 VAR_9 = FUNC_1(VAR_5);
 if (!VAR_9) {
  VAR_8 = -VAR_3;
  goto out;
 }

 FUNC_5(VAR_9, &VAR_11->g, VAR_10, ((void*)0), VAR_11, VAR_5);
 if (FUNC_4(VAR_9)) {
  VAR_8 = -VAR_0;
  goto err_free_point;
 }

 FUNC_6(VAR_9->x, VAR_7, VAR_5);
 FUNC_6(VAR_9->y, &VAR_7[VAR_5], VAR_5);

err_free_point:
 FUNC_2(VAR_9);
out:
 return VAR_8;
}
