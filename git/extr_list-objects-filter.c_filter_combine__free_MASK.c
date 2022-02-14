
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct combine_filter_data {size_t nr; TYPE_3__* sub; } ;
struct TYPE_4__ {scalar_t__ size; } ;
struct TYPE_5__ {TYPE_1__ set; } ;
struct TYPE_6__ {TYPE_2__ omits; int seen; int filter; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0)
{
 struct combine_filter_data *VAR_1 = VAR_0;
 size_t VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->nr; VAR_2++) {
  FUNC_2(VAR_1->sub[VAR_2].filter);
  FUNC_3(&VAR_1->sub[VAR_2].seen);
  if (VAR_1->sub[VAR_2].omits.set.size)
   FUNC_0("expected oidset to be cleared already");
 }
 FUNC_1(VAR_1->sub);
}
