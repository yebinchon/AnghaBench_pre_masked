
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_sg_division {scalar_t__ proportion_of_total; scalar_t__ flush_type; scalar_t__ nosimd; } ;
typedef int divs ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int * FUNC_0 (struct test_sg_division const*,int ,unsigned int) ;

__attribute__((used)) static bool FUNC_1(const struct test_sg_division *VAR_4,
          unsigned int VAR_5, int *VAR_6)
{
 unsigned int VAR_7 = 0;
 unsigned int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_5 && VAR_7 != VAR_3; VAR_8++) {
  if (VAR_4[VAR_8].proportion_of_total <= 0 ||
      VAR_4[VAR_8].proportion_of_total > VAR_3 - VAR_7)
   return 0;
  VAR_7 += VAR_4[VAR_8].proportion_of_total;
  if (VAR_4[VAR_8].flush_type != VAR_0)
   *VAR_6 |= VAR_1;
  if (VAR_4[VAR_8].nosimd)
   *VAR_6 |= VAR_2;
 }
 return VAR_7 == VAR_3 &&
  FUNC_0(&VAR_4[VAR_8], 0, (VAR_5 - VAR_8) * sizeof(VAR_4[0])) == ((void*)0);
}
