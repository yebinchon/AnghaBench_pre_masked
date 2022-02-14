
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* caddr_t ;


 int FUNC_0 (void*,void*,size_t) ;
 int FUNC_1 (void*,void*,size_t) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, void *VAR_1, void *VAR_2, size_t VAR_3,
    size_t VAR_4, int (*VAR_5) (const void *, const void *))
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 caddr_t VAR_11;

 if (VAR_3 == 0) {
  FUNC_0(VAR_2, VAR_1, VAR_4);
  return (1);
 }


 VAR_6 = 0;
 VAR_7 = VAR_3 - 1;
 VAR_8 = 0;
 while (VAR_6 <= VAR_7) {
  VAR_8 = (VAR_6 + VAR_7) / 2;
  VAR_10 = VAR_5(VAR_0, (const void *)((caddr_t)VAR_2 + VAR_8 * VAR_4));
  if (VAR_10 == 0)
   return (0);

  if (VAR_10 > 0)
   VAR_6 = VAR_8 + 1;
  else
   VAR_7 = VAR_8 - 1;
 }


 VAR_10 = VAR_5(VAR_0, (const void *)((caddr_t)VAR_2 + VAR_8 * VAR_4));
 if (VAR_10 > 0)
  VAR_9 = VAR_8 + 1;
 else
  VAR_9 = VAR_8;

 VAR_11 = (caddr_t)VAR_2 + VAR_9 * VAR_4;
 if (VAR_3 > VAR_9)
  FUNC_1(VAR_11 + VAR_4, VAR_11, (VAR_3 - VAR_9) * VAR_4);

 FUNC_0(VAR_11, VAR_1, VAR_4);

 return (1);
}
