
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parsed_object_pool {int dummy; } ;
struct TYPE_2__ {scalar_t__ parsed; } ;
struct commit {TYPE_1__ object; int parents; scalar_t__ index; } ;


 int FUNC_0 (struct parsed_object_pool*,struct commit*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct commit*,int *) ;

void FUNC_3(struct parsed_object_pool *VAR_0, struct commit *VAR_1)
{
 FUNC_2(VAR_1, ((void*)0));
 FUNC_0(VAR_0, VAR_1);
 VAR_1->index = 0;
 FUNC_1(VAR_1->parents);

 VAR_1->object.parsed = 0;
}
