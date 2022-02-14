
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

int
FUNC_1(const void *VAR_2, void *VAR_3, size_t VAR_4, size_t *VAR_5)
{
 const char *VAR_6;
 char *VAR_7;
 size_t VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = VAR_3;
 VAR_6 = VAR_2;

 VAR_9 = VAR_1;

 for (VAR_8 = 0; VAR_4-- > 0; VAR_8++) {
  if ((VAR_10 = FUNC_0(VAR_6++)) < 0) {
   VAR_9 = VAR_0;
   break;
  }

  if (!(*VAR_7++ = VAR_10)) {
   VAR_8++;
   VAR_9 = 0;
   break;
  }
 }

 if (VAR_5 != ((void*)0)) {
  *VAR_5 = VAR_8;
 }

 return (VAR_9);
}
