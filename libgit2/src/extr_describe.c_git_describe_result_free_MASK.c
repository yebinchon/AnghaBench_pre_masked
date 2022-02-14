
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* tag; struct TYPE_5__* name; struct TYPE_5__* path; } ;
typedef TYPE_1__ git_describe_result ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(git_describe_result *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->name) {
  FUNC_1(VAR_0->name->tag);
  FUNC_0(VAR_0->name->path);
  FUNC_0(VAR_0->name);
 }

 if (VAR_0->tag) {
  FUNC_1(VAR_0->tag->name->tag);
  FUNC_0(VAR_0->tag->name->path);
  FUNC_0(VAR_0->tag->name);
  FUNC_0(VAR_0->tag);
 }

 FUNC_0(VAR_0);
}
