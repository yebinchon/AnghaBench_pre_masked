
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* body; struct TYPE_3__* summary; struct TYPE_3__* message_encoding; struct TYPE_3__* raw_message; struct TYPE_3__* raw_header; int committer; int author; int parent_ids; } ;
typedef TYPE_1__ git_commit ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(void *VAR_0)
{
 git_commit *VAR_1 = VAR_0;

 FUNC_1(VAR_1->parent_ids);

 FUNC_2(VAR_1->author);
 FUNC_2(VAR_1->committer);

 FUNC_0(VAR_1->raw_header);
 FUNC_0(VAR_1->raw_message);
 FUNC_0(VAR_1->message_encoding);
 FUNC_0(VAR_1->summary);
 FUNC_0(VAR_1->body);

 FUNC_0(VAR_1);
}
