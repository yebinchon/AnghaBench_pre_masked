
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static void FUNC_2(u16 VAR_1, char *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_4 += FUNC_1(VAR_2 + VAR_4, "%x", FUNC_0(VAR_1, VAR_3));

 VAR_2[VAR_4] = '\0';
}
