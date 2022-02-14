
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long long start; unsigned long long size; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 unsigned long long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,unsigned long long*,unsigned long long*) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static void FUNC_2(char *VAR_5)
{
 static int VAR_6;

 if (VAR_6 >= VAR_0)
  return;

 while (VAR_5 && (VAR_6 < VAR_0)) {
  int VAR_7;
  unsigned long long VAR_8, VAR_9;
  char *VAR_10 = FUNC_1(VAR_5, ',');

  if (VAR_10)
   *VAR_10++ = 0;

  VAR_7 = FUNC_0(VAR_5, &VAR_8, &VAR_9);
  if (VAR_7 < 0)
   break;
  VAR_5 = VAR_10;

  if (VAR_8 == 0) {

   if (VAR_9 > 0)
    VAR_3 = VAR_9;

   continue;
  }

  VAR_2[VAR_1 + VAR_6].start = VAR_8;
  VAR_2[VAR_1 + VAR_6].size = VAR_9;
  VAR_6++;
 }


 if ((VAR_6 >= VAR_0) && VAR_5)
  VAR_4 = 1;
}
