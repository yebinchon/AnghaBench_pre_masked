
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int buf ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void
FUNC_2(uintmax_t VAR_0, size_t VAR_1)
{
 char VAR_2[VAR_1 * 2];
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  FUNC_1(VAR_0, VAR_2 + (VAR_1 - VAR_3 - 1) * 2);
  VAR_0 >>= 8;
 }
 FUNC_0(VAR_2, sizeof(VAR_2));
}
