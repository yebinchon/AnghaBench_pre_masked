
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ force; scalar_t__ num_lines; int * target; int * tag_name; int * pattern; int * message; } ;
typedef TYPE_1__ tag_options ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(tag_options *VAR_0)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->message = ((void*)0);
 VAR_0->pattern = ((void*)0);
 VAR_0->tag_name = ((void*)0);
 VAR_0->target = ((void*)0);
 VAR_0->num_lines = 0;
 VAR_0->force = 0;
}
