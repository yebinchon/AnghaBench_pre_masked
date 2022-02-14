
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (char const*,char**,int ) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, unsigned int *VAR_1,
    unsigned int *VAR_2)
{
 char *VAR_3;
 unsigned long VAR_4;

 VAR_4 = FUNC_0(VAR_0, &VAR_3, 0);
 if (VAR_3 == VAR_0) return -1;
 if (*VAR_3 == 'x' && VAR_3[1]) {
  *VAR_2 = VAR_4;
  *VAR_1 = FUNC_0(VAR_3 + 1, &VAR_3, 0);
 } else {
  *VAR_2 = -1;
  *VAR_1 = VAR_4;
 }
 *VAR_1 <<= 10;
 return *VAR_3;
}
