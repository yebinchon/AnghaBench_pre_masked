
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {struct helper_data* data; } ;
struct helper_data {scalar_t__ bidi_import; } ;
struct child_process {int git_cmd; int args; void* in; void* out; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct child_process*) ;
 scalar_t__ VAR_0 ;
 struct child_process* FUNC_3 (struct transport*) ;
 int FUNC_4 (struct child_process*) ;
 void* FUNC_5 (void*) ;

__attribute__((used)) static int FUNC_6(struct transport *VAR_1, struct child_process *VAR_2)
{
 struct child_process *VAR_3 = FUNC_3(VAR_1);
 struct helper_data *VAR_4 = VAR_1->data;
 int VAR_5, VAR_6;
 FUNC_2(VAR_2);
 VAR_2->in = FUNC_5(VAR_3->out);
 FUNC_0(&VAR_2->args, "fast-import");
 FUNC_0(&VAR_2->args, VAR_0 ? "--stats" : "--quiet");

 if (VAR_4->bidi_import) {
  VAR_5 = FUNC_5(VAR_3->in);
  FUNC_1(&VAR_2->args, "--cat-blob-fd=%d", VAR_5);
 }
 VAR_2->git_cmd = 1;

 VAR_6 = FUNC_4(VAR_2);
 return VAR_6;
}
