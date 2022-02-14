
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int initialized; TYPE_2__* filter; } ;
typedef TYPE_1__ git_filter_def ;
struct TYPE_5__ {int (* initialize ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(git_filter_def *VAR_0)
{
 int VAR_1 = 0;

 if (!VAR_0->initialized && VAR_0->filter && VAR_0->filter->initialize) {
  if ((VAR_1 = VAR_0->filter->initialize(VAR_0->filter)) < 0)
   return VAR_1;
 }

 VAR_0->initialized = 1;
 return 0;
}
