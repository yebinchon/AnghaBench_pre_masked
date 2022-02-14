
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (void const*,void const*) ;

int FUNC_1(
 void **VAR_1,
 size_t VAR_2,
 const void *VAR_3,
 int (*VAR_4)(const void *, const void *),
 size_t *VAR_5)
{
 size_t VAR_6;
 int VAR_7 = -1;
 void **VAR_8, **VAR_9 = VAR_1;

 for (VAR_6 = VAR_2; VAR_6 != 0; VAR_6 >>= 1) {
  VAR_8 = VAR_9 + (VAR_6 >> 1);
  VAR_7 = (*VAR_4)(VAR_3, *VAR_8);
  if (VAR_7 == 0) {
   VAR_9 = VAR_8;
   break;
  }
  if (VAR_7 > 0) {
   VAR_9 = VAR_8 + 1;
   VAR_6--;
  }
 }

 if (VAR_5)
  *VAR_5 = (VAR_9 - VAR_1);

 return (VAR_7 == 0) ? 0 : VAR_0;
}
