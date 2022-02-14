
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct journal_completion {int ic; } ;


 int VAR_0 ;
 int FUNC_0 (struct journal_completion*) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_1, void *VAR_2)
{
 struct journal_completion *VAR_3 = VAR_2;
 if (FUNC_2(VAR_1 != 0))
  FUNC_1(VAR_3->ic, "writing journal", -VAR_0);
 FUNC_0(VAR_3);
}
