
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int (* rndfun_t ) () ;
struct TYPE_2__ {int (* rndfun ) () ;int * name; } ;


 int FUNC_0 (char*,unsigned int,int,int,int,int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_1 (int *,char*) ;

int
FUNC_2(int VAR_1, char *VAR_2[])
{
 uint64_t VAR_3[4] = {};
 uint64_t VAR_4;
 unsigned int VAR_5;
 rndfun_t VAR_6;

 if (VAR_1 == 1)
  VAR_6 = VAR_0[0].rndfun;
 else {
  for (VAR_5 = 0; VAR_0[VAR_5].name != ((void*)0); VAR_5++) {
   if (FUNC_1(VAR_0[VAR_5].name, VAR_2[1]) == 0)
    break;
  }
  if (VAR_0[VAR_5].name == ((void*)0))
   return 1;
  VAR_6 = VAR_0[VAR_5].rndfun;
 }

 for (;;) {
  VAR_3[VAR_6() % 4]++;
  if (((VAR_5++) % (4*1024*1024)) == 0) {
   VAR_4 = VAR_3[0] + VAR_3[1] + VAR_3[2] + VAR_3[3];
   VAR_4 /= 4;
   FUNC_0("%d: %ld %ld %ld %ld\n", VAR_5, VAR_3[0] - VAR_4, VAR_3[1] - VAR_4, VAR_3[2] - VAR_4, VAR_3[3] - VAR_4);
  }
 }
 return 0;
}
