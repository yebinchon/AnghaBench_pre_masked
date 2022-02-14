
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_score {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct diff_score*,struct diff_score*) ;

__attribute__((used)) static void FUNC_1(struct diff_score VAR_1[], struct diff_score *VAR_2)
{
 int VAR_3, VAR_4;


 VAR_4 = 0;
 for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++)
  if (FUNC_0(&VAR_1[VAR_3], &VAR_1[VAR_4]) > 0)
   VAR_4 = VAR_3;


 if (FUNC_0(&VAR_1[VAR_4], VAR_2) > 0)
  VAR_1[VAR_4] = *VAR_2;
}
