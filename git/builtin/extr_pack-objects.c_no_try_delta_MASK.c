
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct attr_check {TYPE_1__* items; } ;
struct TYPE_4__ {int index; } ;
struct TYPE_3__ {int value; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct attr_check* FUNC_1 (char*,int *) ;
 int FUNC_2 (int ,char const*,struct attr_check*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_3(const char *VAR_1)
{
 static struct attr_check *VAR_2;

 if (!VAR_2)
  VAR_2 = FUNC_1("delta", ((void*)0));
 FUNC_2(VAR_0->index, VAR_1, VAR_2);
 if (FUNC_0(VAR_2->items[0].value))
  return 1;
 return 0;
}
