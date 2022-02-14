
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*,int) ;
 int FUNC_1 (char const*,unsigned long*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, int VAR_1, int VAR_2, const char *VAR_3,
         unsigned long *VAR_4, unsigned long *VAR_5)
{
 int VAR_6, VAR_7;

 if (VAR_2 < 0 || VAR_2 >= VAR_1)
  return -1;
 VAR_0 += VAR_2;
 VAR_1 -= VAR_2;

 VAR_6 = FUNC_1(VAR_0, VAR_4);
 if (!VAR_6)
  return -1;

 VAR_2 += VAR_6;
 VAR_0 += VAR_6;
 VAR_1 -= VAR_6;

 *VAR_5 = 1;
 if (*VAR_0 == ',') {
  VAR_6 = FUNC_1(VAR_0+1, VAR_5);
  if (!VAR_6)
   return -1;

  VAR_2 += VAR_6+1;
  VAR_0 += VAR_6+1;
  VAR_1 -= VAR_6+1;
 }

 VAR_7 = FUNC_2(VAR_3);
 if (VAR_7 > VAR_1)
  return -1;
 if (FUNC_0(VAR_0, VAR_3, VAR_7))
  return -1;

 return VAR_2 + VAR_7;
}
