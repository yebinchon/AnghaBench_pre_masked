
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* tag_name; struct TYPE_3__* message; int tagger; } ;
typedef TYPE_1__ git_tag ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(void *VAR_0)
{
 git_tag *VAR_1 = VAR_0;
 FUNC_1(VAR_1->tagger);
 FUNC_0(VAR_1->message);
 FUNC_0(VAR_1->tag_name);
 FUNC_0(VAR_1);
}
