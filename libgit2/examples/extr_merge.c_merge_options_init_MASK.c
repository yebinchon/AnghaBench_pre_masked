
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ annotated_count; int * annotated; scalar_t__ heads_count; int * heads; } ;
typedef TYPE_1__ merge_options ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1(merge_options *VAR_0)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->heads = ((void*)0);
 VAR_0->heads_count = 0;
 VAR_0->annotated = ((void*)0);
 VAR_0->annotated_count = 0;
}
