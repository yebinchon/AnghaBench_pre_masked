
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sev_issue_cmd {int error; } ;
struct TYPE_2__ {scalar_t__ sev_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int *,int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2(int VAR_2, struct sev_issue_cmd *VAR_3)
{
 int VAR_4;

 if (VAR_1->sev_state == VAR_0) {
  VAR_4 = FUNC_1(&VAR_3->error);
  if (VAR_4)
   return VAR_4;
 }

 return FUNC_0(VAR_2, ((void*)0), &VAR_3->error);
}
