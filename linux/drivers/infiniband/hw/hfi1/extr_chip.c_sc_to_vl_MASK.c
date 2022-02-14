
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct send_context_info {scalar_t__ type; struct send_context* sc; } ;
struct send_context {int dummy; } ;
struct hfi1_devdata {TYPE_1__* vld; struct send_context_info* send_contexts; } ;
struct TYPE_2__ {struct send_context* sc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct hfi1_devdata *VAR_3, int VAR_4)
{
 struct send_context_info *VAR_5;
 struct send_context *VAR_6;
 int VAR_7;

 VAR_5 = &VAR_3->send_contexts[VAR_4];


 if ((VAR_5->type != VAR_0) && (VAR_5->type != VAR_1))
  return -1;

 VAR_6 = VAR_5->sc;
 if (!VAR_6)
  return -1;
 if (VAR_3->vld[15].sc == VAR_6)
  return 15;
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  if (VAR_3->vld[VAR_7].sc == VAR_6)
   return VAR_7;

 return -1;
}
