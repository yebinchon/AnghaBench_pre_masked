
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct range {int to; int from; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,int *) ;

__attribute__((used)) static bool
FUNC_4(struct range *VAR_2, struct range *VAR_3)
{
 int VAR_4, VAR_5;
 int VAR_6;
 int VAR_7;

 if (VAR_2->to-VAR_2->from != VAR_3->to-VAR_3->from)
  return (0);
 FUNC_3(0, VAR_2->from, ((void*)0));
 FUNC_3(1, VAR_3->from, ((void*)0));
 VAR_6 = 0;
 for (VAR_7=0; VAR_7 < VAR_2->to - VAR_2->from; VAR_7++) {
  do {
   VAR_4 = FUNC_1(VAR_1[0]);
   VAR_5 = FUNC_1(VAR_1[1]);
   if (VAR_4 == -1 || VAR_5== -1)
    FUNC_0(VAR_0, "logic error");
   VAR_6++;
   if (VAR_4 != VAR_5) {
    FUNC_2(VAR_6);
    return (0);
   }
  } while (VAR_4 != '\n');
 }
 FUNC_2(VAR_6);
 return (1);
}
