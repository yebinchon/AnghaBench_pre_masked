
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct school {int spec; int sch_type; int sch_class; int country; int grad; int finish; int start; int school; int city; } ;
struct lev_school {scalar_t__* spec; int sch_type; int sch_class; int country; int grad; int finish; int start; int school; int city; } ;


 scalar_t__ VAR_0 ;
 struct lev_school* FUNC_0 (scalar_t__,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 int FUNC_3 (struct lev_school*,int) ;
 int FUNC_4 (int ) ;

int FUNC_5 (int VAR_1, struct school *VAR_2) {
  int VAR_3 = VAR_2->spec ? FUNC_4 (VAR_2->spec) : 0;
  if (VAR_3 >= 256 || FUNC_1 (VAR_1) < 0) {
    return 0;
  }
  struct lev_school *VAR_4 = FUNC_0 (VAR_0 + VAR_3, 26 + VAR_3, VAR_1);
  VAR_4->city = VAR_2->city;
  VAR_4->school = VAR_2->school;
  VAR_4->start = VAR_2->start;
  VAR_4->finish = VAR_2->finish;
  VAR_4->grad = VAR_2->grad;
  VAR_4->country = VAR_2->country;
  VAR_4->sch_class = VAR_2->sch_class;
  VAR_4->sch_type = VAR_2->sch_type;
  if (VAR_3) {
    FUNC_2 (VAR_4->spec, VAR_2->spec, VAR_3);
  }
  VAR_4->spec[VAR_3] = 0;
  FUNC_3 (VAR_4, 26+VAR_3);
  return 1;
}
