
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pic {int dummy; } ;
struct atpic {int dummy; } ;


 size_t VAR_0 ;
 struct atpic* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct atpic*,int) ;

__attribute__((used)) static void
FUNC_2(struct pic *VAR_3, bool VAR_4)
{
 struct atpic *VAR_5 = (struct atpic *)VAR_3;

 FUNC_1(VAR_5, VAR_5 == &VAR_1[VAR_0]);
 if (VAR_5 == &VAR_1[VAR_0] && VAR_2)
  FUNC_0();
}
