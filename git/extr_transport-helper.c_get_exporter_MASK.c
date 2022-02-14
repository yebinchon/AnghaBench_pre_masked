
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transport {struct helper_data* data; } ;
struct string_list {int nr; TYPE_1__* items; } ;
struct helper_data {scalar_t__ import_marks; scalar_t__ export_marks; scalar_t__ signed_tags; } ;
struct child_process {int git_cmd; int args; int in; int out; } ;
struct TYPE_2__ {char* string; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (struct child_process*) ;
 int FUNC_3 (int ) ;
 struct child_process* FUNC_4 (struct transport*) ;
 int FUNC_5 (struct child_process*) ;

__attribute__((used)) static int FUNC_6(struct transport *VAR_0,
   struct child_process *VAR_1,
   struct string_list *VAR_2)
{
 struct helper_data *VAR_3 = VAR_0->data;
 struct child_process *VAR_4 = FUNC_4(VAR_0);
 int VAR_5;

 FUNC_2(VAR_1);



 VAR_1->out = FUNC_3(VAR_4->in);
 FUNC_0(&VAR_1->args, "fast-export");
 FUNC_0(&VAR_1->args, "--use-done-feature");
 FUNC_0(&VAR_1->args, VAR_3->signed_tags ?
  "--signed-tags=verbatim" : "--signed-tags=warn-strip");
 if (VAR_3->export_marks)
  FUNC_1(&VAR_1->args, "--export-marks=%s.tmp", VAR_3->export_marks);
 if (VAR_3->import_marks)
  FUNC_1(&VAR_1->args, "--import-marks=%s", VAR_3->import_marks);

 for (VAR_5 = 0; VAR_5 < VAR_2->nr; VAR_5++)
  FUNC_0(&VAR_1->args, VAR_2->items[VAR_5].string);

 VAR_1->git_cmd = 1;
 return FUNC_5(VAR_1);
}
