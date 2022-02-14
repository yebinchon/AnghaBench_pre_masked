
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(const unsigned char *VAR_3, int VAR_4)
{
 int VAR_5 = VAR_2;

 if (VAR_3 == ((void*)0)) {
  FUNC_0();
  return VAR_5;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_2 >= VAR_0) {

   VAR_1[VAR_2++] = '\\';
   FUNC_0();
  }

  switch (VAR_3[VAR_5]) {
  case '\r':
   FUNC_0();
   if ((VAR_5 + 1) < VAR_4 && VAR_3[VAR_5 + 1] == '\n')
    VAR_5++;
   break;
  case '\n':
   FUNC_0();
   break;
  default:
   VAR_1[VAR_2++] = VAR_3[VAR_5];
   break;
  }
 }

 return VAR_4;
}
