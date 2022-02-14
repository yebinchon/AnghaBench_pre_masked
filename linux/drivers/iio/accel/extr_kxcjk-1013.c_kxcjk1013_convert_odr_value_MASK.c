
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kx_odr_map {int odr_bits; int val; int val2; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct kx_odr_map *VAR_2,
           size_t VAR_3, int VAR_4,
           int *VAR_5, int *VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7) {
  if (VAR_2[VAR_7].odr_bits == VAR_4) {
   *VAR_5 = VAR_2[VAR_7].val;
   *VAR_6 = VAR_2[VAR_7].val2;
   return VAR_1;
  }
 }

 return -VAR_0;
}
