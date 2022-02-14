
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int from; int to; } ;
struct TYPE_3__ {int from; int to; } ;
struct diff {TYPE_2__ new; TYPE_1__ old; } ;
typedef int FILE ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,char*) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (char**) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_6(int VAR_1, struct diff **VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 size_t VAR_7;
 char VAR_8, *VAR_9;
 FILE *VAR_10;

 VAR_10 = FUNC_2(VAR_1, "r");
 if (VAR_10 == ((void*)0))
  FUNC_0(2, "fdopen");
 for (VAR_7=0; (VAR_9 = FUNC_3(VAR_10)); VAR_7++) {
  if (VAR_7 >= VAR_0 - 1)
   FUNC_4();
  VAR_3 = VAR_4 = FUNC_5(&VAR_9);
  if (*VAR_9 == ',') {
   VAR_9++;
   VAR_4 = FUNC_5(&VAR_9);
  }
  VAR_8 = *VAR_9++;
  VAR_5 = VAR_6 = FUNC_5(&VAR_9);
  if (*VAR_9==',') {
   VAR_9++;
   VAR_6 = FUNC_5(&VAR_9);
  }
  if (VAR_8 == 'a')
   VAR_3++;
  if (VAR_8 == 'd')
   VAR_5++;
  VAR_4++;
  VAR_6++;
  (*VAR_2)[VAR_7].old.from = VAR_3;
  (*VAR_2)[VAR_7].old.to = VAR_4;
  (*VAR_2)[VAR_7].new.from = VAR_5;
  (*VAR_2)[VAR_7].new.to = VAR_6;
 }
 if (VAR_7) {
  (*VAR_2)[VAR_7].old.from = (*VAR_2)[VAR_7-1].old.to;
  (*VAR_2)[VAR_7].new.from = (*VAR_2)[VAR_7-1].new.to;
 }
 FUNC_1(VAR_10);
 return (VAR_7);
}
