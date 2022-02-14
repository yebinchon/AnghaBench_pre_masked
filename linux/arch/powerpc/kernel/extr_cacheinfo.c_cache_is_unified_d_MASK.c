
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct TYPE_2__ {int size_prop; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (struct device_node const*,int ,int *) ;

__attribute__((used)) static int FUNC_1(const struct device_node *VAR_3)
{
 return FUNC_0(VAR_3,
  VAR_2[VAR_1].size_prop, ((void*)0)) ?
  VAR_1 : VAR_0;
}
