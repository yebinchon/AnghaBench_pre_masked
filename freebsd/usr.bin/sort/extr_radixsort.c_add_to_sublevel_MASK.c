
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sort_list_item {int dummy; } ;
struct sort_level {int tosort_num; int tosort_sz; struct sort_list_item** tosort; int real_sln; struct sort_level** sublevels; scalar_t__ level; } ;


 int FUNC_0 (struct sort_level*,int ,int) ;
 struct sort_level* FUNC_1 (int) ;
 struct sort_list_item** FUNC_2 (struct sort_list_item**,int) ;

__attribute__((used)) static void
FUNC_3(struct sort_level *VAR_0, struct sort_list_item *VAR_1, size_t VAR_2)
{
 struct sort_level *VAR_3;

 VAR_3 = VAR_0->sublevels[VAR_2];

 if (VAR_3 == ((void*)0)) {
  VAR_3 = FUNC_1(sizeof(struct sort_level));
  FUNC_0(VAR_3, 0, sizeof(struct sort_level));

  VAR_3->level = VAR_0->level + 1;
  VAR_0->sublevels[VAR_2] = VAR_3;

  ++(VAR_0->real_sln);
 }

 if (++(VAR_3->tosort_num) > VAR_3->tosort_sz) {
  VAR_3->tosort_sz = VAR_3->tosort_num + 128;
  VAR_3->tosort = FUNC_2(VAR_3->tosort,
      sizeof(struct sort_list_item*) * (VAR_3->tosort_sz));
 }

 VAR_3->tosort[VAR_3->tosort_num - 1] = VAR_1;
}
