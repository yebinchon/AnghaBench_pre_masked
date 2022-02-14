
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int off_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,char*,int ,int ) ;
 int FUNC_2 (int,char*,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_3, int VAR_4, off_t VAR_5, char * VAR_6, int * VAR_7,
    int * VAR_8)
{
 ssize_t VAR_9;

 while (VAR_5) {

  VAR_9 = *VAR_7 - *VAR_8;
  if (VAR_5 < VAR_9)
   VAR_9 = VAR_5;
  if (VAR_9 > 0) {
   if (VAR_4 != -1)
    VAR_9 = FUNC_2(VAR_4, VAR_6 + *VAR_8, VAR_9);
   if (VAR_9 == -1)
    FUNC_0(1, "write");
   *VAR_8 += VAR_9;
   VAR_5 -= VAR_9;
   continue;
  }


  VAR_9 = FUNC_1(VAR_3, VAR_6, VAR_0, 0);
  if (VAR_9 == -1) {
   if (VAR_2 == VAR_1)
    continue;
   return -1;
  } else if (VAR_9 == 0) {
   return -2;
  } else {
   *VAR_7 = VAR_9;
   *VAR_8 = 0;
  }
 }

 return 0;
}
