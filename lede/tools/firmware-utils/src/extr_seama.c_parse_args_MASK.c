
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char**,char*) ;
 void* VAR_2 ;
 void* VAR_3 ;
 void** VAR_4 ;
 int VAR_5 ;
 void** VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(int VAR_11, char * VAR_12[])
{
 int VAR_13;

 while ((VAR_13 = FUNC_0(VAR_11, VAR_12, "hvd:s:i:m:x:")) > 0)
 {
  switch (VAR_13)
  {
  default: FUNC_2(-1); break;
  case 'h': FUNC_2(0); break;
  case 'v': VAR_9++; break;
  case 'd': VAR_2 = VAR_10; break;
  case 's': VAR_8 = VAR_10; break;
  case 'x': VAR_3 = VAR_10; break;
  case 'i':
   if (VAR_5 < VAR_0) VAR_4[VAR_5++] = VAR_10;
   else FUNC_1("Exceed the maximum acceptable image files.!\n");
   break;
  case 'm':
   if (VAR_7 < VAR_1) VAR_6[VAR_7++] = VAR_10;
   else FUNC_1("Exceed the maximum acceptable META data.!\n");
   break;
  }
 }
 return 0;
}
