
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mode; int name; } ;
struct TYPE_4__ {int store; TYPE_2__ attr; } ;
struct sg_attr {int handle; TYPE_1__ attr; } ;
struct TYPE_6__ {int store; int attr_name; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(int VAR_1, struct sg_attr *VAR_2, int VAR_3)
{
 VAR_2->handle = VAR_1;
 FUNC_0(&VAR_2->attr.attr);
 VAR_2->attr.attr.name = VAR_0[VAR_3].attr_name;
 VAR_2->attr.attr.mode = 0220;
 VAR_2->attr.store = VAR_0[VAR_3].store;
}
