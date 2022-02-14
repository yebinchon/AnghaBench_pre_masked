
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t off_t ;


 int VAR_0 ;
 int FUNC_0 (int,size_t,char*) ;
 void* FUNC_1 (int,size_t,size_t,size_t*) ;
 int FUNC_2 (void*,size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static int
FUNC_3(int VAR_3, size_t VAR_4, int VAR_5, off_t VAR_6)
{
 void *VAR_7;
 char *VAR_8;
 size_t VAR_9, VAR_10;
 int VAR_11;
 off_t VAR_12;

 VAR_9 = VAR_2 * VAR_1;

 while (VAR_4 > 0) {
  VAR_10 = (VAR_4 > VAR_9) ? VAR_9 : VAR_4;
  VAR_8 = VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_10, &VAR_12);
  if (VAR_8 == ((void*)0))
   return (VAR_0);
  VAR_8 += VAR_12;
  VAR_11 = FUNC_0(VAR_3, VAR_10, VAR_8);
  FUNC_2(VAR_7, VAR_10);
  if (VAR_11)
   return (VAR_11);
  VAR_4 -= VAR_10;
  VAR_6 += VAR_10;
 }
 return (0);
}
