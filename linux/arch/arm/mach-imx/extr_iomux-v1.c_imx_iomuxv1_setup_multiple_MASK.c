
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int const) ;

__attribute__((used)) static int FUNC_1(const int *VAR_0, unsigned VAR_1)
{
 size_t VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {
  VAR_3 = FUNC_0(VAR_0[VAR_2]);

  if (VAR_3)
   return VAR_3;
 }

 return VAR_3;
}
