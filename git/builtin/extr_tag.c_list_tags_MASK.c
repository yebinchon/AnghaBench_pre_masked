
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_sorting {int dummy; } ;
struct ref_format {char* format; } ;
struct ref_filter {int lines; int with_commit_tag_algo; } ;
struct ref_array {int nr; int * items; } ;
typedef int array ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ref_array*,struct ref_filter*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct ref_array*,int ,int) ;
 int FUNC_5 (struct ref_array*) ;
 int FUNC_6 (struct ref_sorting*,struct ref_array*) ;
 int FUNC_7 (int ,struct ref_format*) ;
 scalar_t__ FUNC_8 (struct ref_format*) ;
 char* FUNC_9 (char*,char*,int) ;

__attribute__((used)) static int FUNC_10(struct ref_filter *VAR_1, struct ref_sorting *VAR_2,
       struct ref_format *VAR_3)
{
 struct ref_array VAR_4;
 char *VAR_5 = ((void*)0);
 int VAR_6;

 FUNC_4(&VAR_4, 0, sizeof(VAR_4));

 if (VAR_1->lines == -1)
  VAR_1->lines = 0;

 if (!VAR_3->format) {
  if (VAR_1->lines) {
   VAR_5 = FUNC_9("%s %%(contents:lines=%d)",
       "%(align:15)%(refname:lstrip=2)%(end)",
       VAR_1->lines);
   VAR_3->format = VAR_5;
  } else
   VAR_3->format = "%(refname:lstrip=2)";
 }

 if (FUNC_8(VAR_3))
  FUNC_1(FUNC_0("unable to parse format string"));
 VAR_1->with_commit_tag_algo = 1;
 FUNC_2(&VAR_4, VAR_1, VAR_0);
 FUNC_6(VAR_2, &VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_4.nr; VAR_6++)
  FUNC_7(VAR_4.items[VAR_6], VAR_3);
 FUNC_5(&VAR_4);
 FUNC_3(VAR_5);

 return 0;
}
