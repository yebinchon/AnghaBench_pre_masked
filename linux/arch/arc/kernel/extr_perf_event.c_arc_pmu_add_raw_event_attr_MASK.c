
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* attr; TYPE_2__** attrs; TYPE_1__* raw_entry; } ;
struct TYPE_7__ {int mode; int name; } ;
struct TYPE_8__ {TYPE_2__ attr; int show; } ;
struct TYPE_9__ {int id; TYPE_3__ attr; } ;
struct TYPE_6__ {int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_5__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(int VAR_3, char *VAR_4)
{
 FUNC_1(VAR_1->raw_entry[VAR_3].name, VAR_4, VAR_0 - 1);
 VAR_1->attr[VAR_3].attr.attr.name = VAR_1->raw_entry[VAR_3].name;
 VAR_1->attr[VAR_3].attr.attr.mode = FUNC_0(0444);
 VAR_1->attr[VAR_3].attr.show = VAR_2;
 VAR_1->attr[VAR_3].id = VAR_3;
 VAR_1->attrs[VAR_3] = &(VAR_1->attr[VAR_3].attr.attr);
}
