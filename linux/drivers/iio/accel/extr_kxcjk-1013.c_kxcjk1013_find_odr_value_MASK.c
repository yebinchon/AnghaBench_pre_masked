
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kx_odr_map {int val; int val2; } ;


 int VAR_0 ;
 struct kx_odr_map const* FUNC_0 (int ) ;

__attribute__((used)) static const struct kx_odr_map *FUNC_1(
 const struct kx_odr_map *VAR_1, size_t VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  if (VAR_1[VAR_5].val == VAR_3 && VAR_1[VAR_5].val2 == VAR_4)
   return &VAR_1[VAR_5];
 }

 return FUNC_0(-VAR_0);
}
