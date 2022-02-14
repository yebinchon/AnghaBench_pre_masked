
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int saint_t ;


 int FUNC_0 (unsigned char*,int*,int,int) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int) ;

int FUNC_3(unsigned char *VAR_0, saint_t VAR_1, int VAR_2)
{
 saint_t *VAR_3, VAR_4;
 int VAR_5;
 if ((VAR_3 = FUNC_2(VAR_1 * sizeof(saint_t))) == 0) return -1;
 if ((VAR_5 = FUNC_0(VAR_0, VAR_3, VAR_1, VAR_2)) != 0) return VAR_5;
 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4)
  if (VAR_3[VAR_4]) VAR_3[VAR_4] = VAR_0[VAR_3[VAR_4] - 1];
 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4) VAR_0[VAR_4] = VAR_3[VAR_4];
 FUNC_1(VAR_3);
 return 0;
}
