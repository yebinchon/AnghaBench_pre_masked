
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct list_objects_filter_options {int sub_nr; struct list_objects_filter_options* sub; int sub_alloc; int filter_spec; int choice; } ;


 int FUNC_0 (struct list_objects_filter_options*,int,int,int ) ;
 struct strbuf VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct list_objects_filter_options*,char const*) ;
 int FUNC_3 (struct list_objects_filter_options*,char const*,struct strbuf*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct list_objects_filter_options*) ;
 int FUNC_6 (char const*) ;

void FUNC_7(
 struct list_objects_filter_options *VAR_1,
 const char *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 int VAR_4;

 if (!VAR_1->choice) {
  FUNC_4(&VAR_1->filter_spec, FUNC_6(VAR_2));

  VAR_4 = FUNC_3(
   VAR_1, VAR_2, &VAR_3);
 } else {




  FUNC_5(VAR_1);

  FUNC_4(&VAR_1->filter_spec, FUNC_6("+"));
  FUNC_2(VAR_1, VAR_2);
  FUNC_0(VAR_1->sub, VAR_1->sub_nr, 1,
         VAR_1->sub_alloc);

  VAR_4 = FUNC_3(
   &VAR_1->sub[VAR_1->sub_nr - 1], VAR_2,
   &VAR_3);
 }
 if (VAR_4)
  FUNC_1("%s", VAR_3.buf);
}
