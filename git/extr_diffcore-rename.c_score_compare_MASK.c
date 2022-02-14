
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_score {scalar_t__ dst; scalar_t__ score; int name_score; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct diff_score *VAR_2 = VAR_0, *VAR_3 = VAR_1;


 if (VAR_2->dst < 0)
  return (0 <= VAR_3->dst);
 else if (VAR_3->dst < 0)
  return -1;

 if (VAR_2->score == VAR_3->score)
  return VAR_3->name_score - VAR_2->name_score;

 return VAR_3->score - VAR_2->score;
}
