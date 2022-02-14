
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct walker_data {TYPE_1__* alt; } ;
struct walker {struct walker_data* data; } ;
struct ref {int dummy; } ;
struct TYPE_2__ {int base; } ;


 int FUNC_0 (int ,struct ref*) ;

__attribute__((used)) static int FUNC_1(struct walker *VAR_0, struct ref *VAR_1)
{
 struct walker_data *VAR_2 = VAR_0->data;
 return FUNC_0(VAR_2->alt->base, VAR_1);
}
