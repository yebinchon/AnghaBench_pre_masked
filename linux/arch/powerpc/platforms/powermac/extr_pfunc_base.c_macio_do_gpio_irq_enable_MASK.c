
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmf_function {TYPE_1__* node; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (unsigned int,int ,int ,int ,struct pmf_function*) ;

__attribute__((used)) static int FUNC_2(struct pmf_function *VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_2->node, 0);
 if (!VAR_3)
  return -VAR_0;
 return FUNC_1(VAR_3, VAR_1, 0, VAR_2->node->name, VAR_2);
}
