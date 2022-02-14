
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef int u_int ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int,int,int,int,int,int) ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_0, u_int16_t VAR_1[], u_int VAR_2)
{
 int VAR_3, VAR_4 = VAR_2/2;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3 += 2)
  FUNC_0(VAR_0, "[%2u] %04x %04x [%2u] %04x %04x\n",
   VAR_3, VAR_1[2*VAR_3 + 1], VAR_1[2*VAR_3],
   VAR_3+1, VAR_1[2*(VAR_3+1) + 1], VAR_1[2*(VAR_3+1)]);
}
