
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int saint_t ;


 int FUNC_0 (unsigned char const*,int*,int ,int,int,int) ;

int FUNC_1(const unsigned char *VAR_0, saint_t *VAR_1, saint_t VAR_2, int VAR_3)
{
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_0[VAR_2 - 1] != '\0' || VAR_2 <= 0) return -1;
 if (VAR_3 < 0 || VAR_3 > 256) VAR_3 = 256;
 return FUNC_0(VAR_0, VAR_1, 0, VAR_2, (saint_t)VAR_3, 1);
}
