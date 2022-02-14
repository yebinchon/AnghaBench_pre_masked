
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct repository {int dummy; } ;
struct commit_graph {int dummy; } ;
struct TYPE_2__ {scalar_t__ parsed; } ;
struct commit {TYPE_1__ object; } ;


 int FUNC_0 (struct repository*,struct commit*,struct commit_graph*,int ) ;
 scalar_t__ FUNC_1 (struct commit*,struct commit_graph*,int *) ;

__attribute__((used)) static int FUNC_2(struct repository *VAR_0,
         struct commit_graph *VAR_1,
         struct commit *VAR_2)
{
 uint32_t VAR_3;

 if (VAR_2->object.parsed)
  return 1;

 if (FUNC_1(VAR_2, VAR_1, &VAR_3))
  return FUNC_0(VAR_0, VAR_2, VAR_1, VAR_3);

 return 0;
}
