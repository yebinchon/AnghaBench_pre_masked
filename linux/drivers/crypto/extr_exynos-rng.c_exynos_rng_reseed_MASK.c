
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct exynos_rng_dev {unsigned long last_seeding; scalar_t__ bytes_seeding; int lock; } ;
typedef int seed ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct exynos_rng_dev*,int *,int,unsigned int*) ;
 int FUNC_1 (struct exynos_rng_dev*,int *,unsigned int) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct exynos_rng_dev *VAR_4)
{
 unsigned long VAR_5 = VAR_4->last_seeding + FUNC_2(VAR_1);

 unsigned long VAR_6 = VAR_3;
 unsigned int VAR_7 = 0;
 u8 VAR_8[VAR_2];

 if (FUNC_5(VAR_6, VAR_5) &&
     VAR_4->bytes_seeding < VAR_0)
  return;

 if (FUNC_0(VAR_4, VAR_8, sizeof(VAR_8), &VAR_7))
  return;

 FUNC_1(VAR_4, VAR_8, VAR_7);


 FUNC_4(&VAR_4->lock);
 FUNC_3(&VAR_4->lock);
}
