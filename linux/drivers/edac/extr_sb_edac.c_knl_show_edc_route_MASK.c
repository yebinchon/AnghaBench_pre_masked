
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 char FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(u32 VAR_1, char *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2[VAR_3*2] = FUNC_0(VAR_3, VAR_1) + '0';
  VAR_2[VAR_3*2+1] = '-';
 }

 VAR_2[VAR_0*2 - 1] = '\0';
}
