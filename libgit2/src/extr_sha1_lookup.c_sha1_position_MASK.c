
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const*,unsigned char const*) ;

int FUNC_1(const void *VAR_0,
   size_t VAR_1,
   unsigned VAR_2, unsigned VAR_3,
   const unsigned char *VAR_4)
{
 const unsigned char *VAR_5 = VAR_0;

 while (VAR_2 < VAR_3) {
  unsigned VAR_6 = (VAR_2 + VAR_3) / 2;
  int VAR_7 = FUNC_0(VAR_5 + VAR_6 * VAR_1, VAR_4);

  if (!VAR_7)
   return VAR_6;

  if (VAR_7 > 0)
   VAR_3 = VAR_6;
  else
   VAR_2 = VAR_6+1;
 }

 return -((int)VAR_2)-1;
}
