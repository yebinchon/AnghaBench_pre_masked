
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;

char *FUNC_3(int VAR_1, int VAR_2)
{
 char *VAR_3;
 int VAR_4;
 long VAR_5;
 FUNC_2(11);
 VAR_3 = FUNC_1(VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4)
  VAR_3[VAR_4] = (int)(VAR_2 * FUNC_0()) + '!';
 VAR_3[VAR_0 - 1] = 0;
 return VAR_3;
}
