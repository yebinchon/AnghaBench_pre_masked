
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_objects_filter_options {scalar_t__ choice; int sub_alloc; int sub_nr; int filter_spec; struct list_objects_filter_options* sub; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct list_objects_filter_options*,int ) ;
 int FUNC_2 (struct list_objects_filter_options*) ;
 int FUNC_3 (struct list_objects_filter_options*,int ,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 struct list_objects_filter_options* FUNC_6 (int const,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(
 struct list_objects_filter_options *VAR_1)
{
 FUNC_0(VAR_1->choice);
 if (VAR_1->choice == VAR_0)
  return;
 {
  const int VAR_2 = 2;
  struct list_objects_filter_options *VAR_3 =
   FUNC_6(VAR_2, sizeof(*VAR_3));
  VAR_3[0] = *VAR_1;
  FUNC_3(VAR_1, 0, sizeof(*VAR_1));
  VAR_1->sub = VAR_3;
  VAR_1->sub_alloc = VAR_2;
 }
 VAR_1->sub_nr = 1;
 VAR_1->choice = VAR_0;
 FUNC_4(&VAR_1->filter_spec, FUNC_7("combine:"));
 FUNC_1(
  VAR_1,
  FUNC_2(&VAR_1->sub[0]));




 FUNC_5(&VAR_1->sub[0].filter_spec, 0);
}
