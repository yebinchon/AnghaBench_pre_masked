
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(const char *VAR_6, int VAR_7)
{

 if (!FUNC_0(&VAR_1)) {
  while (VAR_7-- && VAR_3 < VAR_0 && *VAR_6) {
   VAR_2[(VAR_5 + VAR_3++) %
          VAR_0] = *VAR_6++;
  }
  FUNC_1(&VAR_4);
 }
}
