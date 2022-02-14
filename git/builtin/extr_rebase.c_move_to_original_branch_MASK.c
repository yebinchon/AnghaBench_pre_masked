
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct rebase_options {int head_name; TYPE_2__* onto; } ;
struct TYPE_3__ {int oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ,int ,int ,int ) ;
 int FUNC_3 (struct strbuf*,char*,int ,...) ;
 int FUNC_4 (struct strbuf*) ;

__attribute__((used)) static int FUNC_5(struct rebase_options *VAR_2)
{
 struct strbuf VAR_3 = VAR_1, VAR_4 = VAR_1;
 int VAR_5;

 if (!VAR_2->head_name)
  return 0;

 if (!VAR_2->onto)
  FUNC_0("move_to_original_branch without onto");

 FUNC_3(&VAR_3, "rebase finished: %s onto %s",
      VAR_2->head_name, FUNC_1(&VAR_2->onto->object.oid));
 FUNC_3(&VAR_4, "rebase finished: returning to %s",
      VAR_2->head_name);
 VAR_5 = FUNC_2(((void*)0), "", VAR_2->head_name, VAR_0,
    VAR_3.buf, VAR_4.buf);

 FUNC_4(&VAR_3);
 FUNC_4(&VAR_4);
 return VAR_5;
}
