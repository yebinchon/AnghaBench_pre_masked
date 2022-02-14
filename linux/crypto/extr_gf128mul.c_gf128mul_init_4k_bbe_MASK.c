
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gf128mul_4k {int * t; } ;
typedef int be128 ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *) ;
 struct gf128mul_4k* FUNC_2 (int,int ) ;

struct gf128mul_4k *FUNC_3(const be128 *VAR_1)
{
 struct gf128mul_4k *VAR_2;
 int VAR_3, VAR_4;

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  goto out;

 VAR_2->t[1] = *VAR_1;
 for (VAR_3 = 1; VAR_3 <= 64; VAR_3 <<= 1)
  FUNC_1(&VAR_2->t[VAR_3 + VAR_3], &VAR_2->t[VAR_3]);

 for (VAR_3 = 2; VAR_3 < 256; VAR_3 += VAR_3)
  for (VAR_4 = 1; VAR_4 < VAR_3; ++VAR_4)
   FUNC_0(&VAR_2->t[VAR_3 + VAR_4], &VAR_2->t[VAR_3], &VAR_2->t[VAR_4]);

out:
 return VAR_2;
}
