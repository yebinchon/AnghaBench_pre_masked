
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cand {scalar_t__ y; int pred; int x; } ;


 int* VAR_0 ;
 struct cand* VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_0(int VAR_5)
{
 struct cand *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 <= VAR_2[0]; VAR_7++)
  VAR_0[VAR_7] = VAR_7 <= VAR_3 ? VAR_7 :
      VAR_7 > VAR_2[0] - VAR_4 ? VAR_7 + VAR_2[1] - VAR_2[0] : 0;
 for (VAR_6 = VAR_1 + VAR_5; VAR_6->y != 0; VAR_6 = VAR_1 + VAR_6->pred)
  VAR_0[VAR_6->x + VAR_3] = VAR_6->y + VAR_3;
}
