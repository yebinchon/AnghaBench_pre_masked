
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int strdup_strings; } ;
struct shortlog {int in2; int in1; int wrap; TYPE_1__ list; int common_repo_prefix; int mailmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct shortlog*,int ,int) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct shortlog *VAR_3)
{
 FUNC_0(VAR_3, 0, sizeof(*VAR_3));

 FUNC_1(&VAR_3->mailmap, &VAR_3->common_repo_prefix);

 VAR_3->list.strdup_strings = 1;
 VAR_3->wrap = VAR_2;
 VAR_3->in1 = VAR_0;
 VAR_3->in2 = VAR_1;
}
