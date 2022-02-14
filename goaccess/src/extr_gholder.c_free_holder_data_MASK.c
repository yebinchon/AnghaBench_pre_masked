
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* protocol; struct TYPE_5__* method; struct TYPE_5__* data; } ;
struct TYPE_4__ {TYPE_3__* metrics; int * sub_list; } ;
typedef TYPE_1__ GHolderItem ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2 (GHolderItem VAR_0)
{
  if (VAR_0.sub_list != ((void*)0))
    FUNC_0 (VAR_0.sub_list);
  if (VAR_0.metrics->data != ((void*)0))
    FUNC_1 (VAR_0.metrics->data);
  if (VAR_0.metrics->method != ((void*)0))
    FUNC_1 (VAR_0.metrics->method);
  if (VAR_0.metrics->protocol != ((void*)0))
    FUNC_1 (VAR_0.metrics->protocol);
  if (VAR_0.metrics != ((void*)0))
    FUNC_1 (VAR_0.metrics);
}
