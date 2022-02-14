
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (void const*,void const*,void*) ;

int FUNC_1(
 void **VAR_1,
 size_t VAR_2,
 const void *VAR_3,
 int (*VAR_4)(const void *, const void *, void *),
 void *VAR_5,
 size_t *VAR_6)
{
 size_t VAR_7;
 int VAR_8 = -1;
 void **VAR_9, **VAR_10 = VAR_1;

 for (VAR_7 = VAR_2; VAR_7 != 0; VAR_7 >>= 1) {
  VAR_9 = VAR_10 + (VAR_7 >> 1);
  VAR_8 = (*VAR_4)(VAR_3, *VAR_9, VAR_5);
  if (VAR_8 == 0) {
   VAR_10 = VAR_9;
   break;
  }
  if (VAR_8 > 0) {
   VAR_10 = VAR_9 + 1;
   VAR_7--;
  }
 }

 if (VAR_6)
  *VAR_6 = (VAR_10 - VAR_1);

 return (VAR_8 == 0) ? 0 : VAR_0;
}
