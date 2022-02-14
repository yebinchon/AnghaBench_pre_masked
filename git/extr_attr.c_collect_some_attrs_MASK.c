
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
struct attr_check {int all_attrs_nr; int all_attrs; int stack; } ;


 int FUNC_0 (int *,struct attr_check*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char const*,int,int,int ,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (struct index_state const*,char const*,int,int *) ;

__attribute__((used)) static void FUNC_4(const struct index_state *VAR_1,
          const char *VAR_2,
          struct attr_check *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 const char *VAR_7, *VAR_8 = ((void*)0);
 int VAR_9;

 for (VAR_7 = VAR_2; *VAR_7; VAR_7++) {
  if (*VAR_7 == '/' && VAR_7[1])
   VAR_8 = VAR_7;
 }
 VAR_4 = VAR_7 - VAR_2;
 if (VAR_8) {
  VAR_9 = VAR_8 + 1 - VAR_2;
  VAR_6 = VAR_8 - VAR_2;
 } else {
  VAR_9 = 0;
  VAR_6 = 0;
 }

 FUNC_3(VAR_1, VAR_2, VAR_6, &VAR_3->stack);
 FUNC_0(&VAR_0, VAR_3);
 FUNC_1(VAR_3->all_attrs, VAR_3->stack);

 VAR_5 = VAR_3->all_attrs_nr;
 FUNC_2(VAR_2, VAR_4, VAR_9, VAR_3->stack, VAR_3->all_attrs, VAR_5);
}
