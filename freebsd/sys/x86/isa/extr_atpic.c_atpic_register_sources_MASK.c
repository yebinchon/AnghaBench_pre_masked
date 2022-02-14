
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pic {int dummy; } ;
struct atpic_intsrc {int at_intsrc; } ;
struct atpic {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct atpic_intsrc* VAR_3 ;
 struct atpic* VAR_4 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct pic *VAR_5)
{
 struct atpic *VAR_6 = (struct atpic *)VAR_5;
 struct atpic_intsrc *VAR_7;
 int VAR_8;
 if (VAR_6 != &VAR_4[VAR_1])
  return;
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  if (FUNC_0(VAR_8) != ((void*)0))
   return;


 for (VAR_8 = 0, VAR_7 = VAR_3; VAR_8 < VAR_2; VAR_8++, VAR_7++) {
  if (VAR_8 == VAR_0)
   continue;
  FUNC_1(&VAR_7->at_intsrc);
 }
}
