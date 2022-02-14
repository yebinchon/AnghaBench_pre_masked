
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ipq {int dummy; } ;
struct TYPE_3__ {scalar_t__ count; int head; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 struct ipq* FUNC_2 (int *,int ) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_1__*,struct ipq*) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void)
{
 struct ipq *VAR_5;
 int VAR_6;






 for (int VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  FUNC_0(VAR_7);
  while (VAR_1[VAR_7].count > VAR_3 &&
      (VAR_5 = FUNC_2(&VAR_1[VAR_7].head, VAR_4)) != ((void*)0))
   FUNC_3(&VAR_1[VAR_7], VAR_5);
  FUNC_1(VAR_7);
 }







 VAR_6 = FUNC_5(VAR_2);
 while (FUNC_4(VAR_2) > VAR_6) {
  for (int VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
   FUNC_0(VAR_8);
   VAR_5 = FUNC_2(&VAR_1[VAR_8].head, VAR_4);
   if (VAR_5 != ((void*)0))
    FUNC_3(&VAR_1[VAR_8], VAR_5);
   FUNC_1(VAR_8);
  }
 }
}
