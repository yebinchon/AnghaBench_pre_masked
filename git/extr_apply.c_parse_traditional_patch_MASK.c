
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {int is_new; int is_delete; char* new_name; char* old_name; } ;
struct apply_state {int p_value_known; int p_value; int linenr; int root; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 char* FUNC_2 (int *,char const*,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct apply_state*,char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct apply_state *VAR_0,
       const char *VAR_1,
       const char *VAR_2,
       struct patch *VAR_3)
{
 char *VAR_4;

 VAR_1 += 4;
 VAR_2 += 4;
 if (!VAR_0->p_value_known) {
  int VAR_5, VAR_6;
  VAR_5 = FUNC_4(VAR_0, VAR_1);
  VAR_6 = FUNC_4(VAR_0, VAR_2);
  if (VAR_5 < 0) VAR_5 = VAR_6;
  if (0 <= VAR_5 && VAR_5 == VAR_6) {
   VAR_0->p_value = VAR_5;
   VAR_0->p_value_known = 1;
  }
 }
 if (FUNC_6(VAR_1)) {
  VAR_3->is_new = 1;
  VAR_3->is_delete = 0;
  VAR_4 = FUNC_2(&VAR_0->root, VAR_2, ((void*)0), VAR_0->p_value);
  VAR_3->new_name = VAR_4;
 } else if (FUNC_6(VAR_2)) {
  VAR_3->is_new = 0;
  VAR_3->is_delete = 1;
  VAR_4 = FUNC_2(&VAR_0->root, VAR_1, ((void*)0), VAR_0->p_value);
  VAR_3->old_name = VAR_4;
 } else {
  char *VAR_7;
  VAR_7 = FUNC_2(&VAR_0->root, VAR_1, ((void*)0), VAR_0->p_value);
  VAR_4 = FUNC_2(&VAR_0->root, VAR_2, VAR_7, VAR_0->p_value);
  FUNC_3(VAR_7);
  if (FUNC_5(VAR_1)) {
   VAR_3->is_new = 1;
   VAR_3->is_delete = 0;
   VAR_3->new_name = VAR_4;
  } else if (FUNC_5(VAR_2)) {
   VAR_3->is_new = 0;
   VAR_3->is_delete = 1;
   VAR_3->old_name = VAR_4;
  } else {
   VAR_3->old_name = VAR_4;
   VAR_3->new_name = FUNC_7(VAR_4);
  }
 }
 if (!VAR_4)
  return FUNC_1(FUNC_0("unable to find filename in patch at line %d"), VAR_0->linenr);

 return 0;
}
