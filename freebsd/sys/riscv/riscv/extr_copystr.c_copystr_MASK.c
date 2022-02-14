
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

int
FUNC_0(const void * __restrict VAR_1, void * __restrict VAR_2, size_t VAR_3,
    size_t * __restrict VAR_4)
{
 const char *VAR_5;
 size_t VAR_6;
 char *VAR_7;
 int VAR_8;

 VAR_8 = VAR_0;
 VAR_5 = VAR_1;
 VAR_7 = VAR_2;
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_7[VAR_6] = VAR_5[VAR_6];
  if (VAR_5[VAR_6] == '\0') {

   VAR_6++;
   VAR_8 = 0;
   break;
  }
 }

 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_6;

 return (VAR_8);
}
