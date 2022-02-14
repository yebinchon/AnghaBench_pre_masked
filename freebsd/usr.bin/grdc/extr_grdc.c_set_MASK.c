
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static void
FUNC_0(int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 VAR_7 = 7<<VAR_5;
 for(VAR_6=0; VAR_6<5; VAR_6++) {
  VAR_2[VAR_6] |= ((VAR_0[VAR_4]>>(4-VAR_6)*3)&07)<<VAR_5;
  VAR_1 |= (VAR_2[VAR_6]^VAR_3[VAR_6])&VAR_7;
 }
 if(VAR_1&VAR_7)
  VAR_1 |= VAR_7;
}
