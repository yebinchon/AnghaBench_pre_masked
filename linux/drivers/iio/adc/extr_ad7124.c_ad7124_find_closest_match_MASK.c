
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const int *VAR_1,
         unsigned int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 unsigned int VAR_6, VAR_7;

 VAR_7 = VAR_0;
 VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_6 = FUNC_0(VAR_3 - VAR_1[VAR_4]);
  if (VAR_6 < VAR_7) {
   VAR_7 = VAR_6;
   VAR_5 = VAR_4;
  }
 }

 return VAR_5;
}
