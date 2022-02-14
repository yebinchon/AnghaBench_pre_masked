
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int ** attrs; } ;
struct sensor_group {TYPE_2__ sg; TYPE_4__* sgattrs; } ;
typedef int __be32 ;
struct TYPE_6__ {int attr; } ;
struct TYPE_9__ {TYPE_1__ attr; } ;
struct TYPE_8__ {scalar_t__ opal_no; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,TYPE_4__*,int) ;
 scalar_t__ FUNC_2 (int const) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(const __be32 *VAR_2, int VAR_3, struct sensor_group *VAR_4,
      u32 VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); VAR_7++)
   if (FUNC_2(VAR_2[VAR_6]) == VAR_0[VAR_7].opal_no) {
    FUNC_1(VAR_5, &VAR_4->sgattrs[VAR_8], VAR_7);
    VAR_4->sg.attrs[VAR_8] =
     &VAR_4->sgattrs[VAR_8].attr.attr;
    VAR_8++;
   }

 return FUNC_3(VAR_1, &VAR_4->sg);
}
