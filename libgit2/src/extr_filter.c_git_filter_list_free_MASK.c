
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {int filters; } ;
typedef TYPE_1__ git_filter_list ;
struct TYPE_8__ {int payload; TYPE_3__* filter; } ;
typedef TYPE_2__ git_filter_entry ;
struct TYPE_9__ {int (* cleanup ) (TYPE_3__*,int ) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int ) ;

void FUNC_5(git_filter_list *VAR_0)
{
 uint32_t VAR_1;

 if (!VAR_0)
  return;

 for (VAR_1 = 0; VAR_1 < FUNC_3(VAR_0->filters); ++VAR_1) {
  git_filter_entry *VAR_2 = FUNC_2(VAR_0->filters, VAR_1);
  if (VAR_2->filter->cleanup)
   VAR_2->filter->cleanup(VAR_2->filter, VAR_2->payload);
 }

 FUNC_1(VAR_0->filters);
 FUNC_0(VAR_0);
}
