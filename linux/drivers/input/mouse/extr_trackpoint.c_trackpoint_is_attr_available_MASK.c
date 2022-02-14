
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct trackpoint_data {scalar_t__ variant_id; } ;
struct psmouse {struct trackpoint_data* private; } ;
struct attribute {int dummy; } ;
struct TYPE_6__ {struct attribute attr; } ;
struct TYPE_8__ {TYPE_2__ dattr; } ;
struct TYPE_5__ {struct attribute attr; } ;
struct TYPE_7__ {TYPE_1__ dattr; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct psmouse *VAR_3,
      struct attribute *VAR_4)
{
 struct trackpoint_data *VAR_5 = VAR_3->private;

 return VAR_5->variant_id == VAR_0 ||
  VAR_4 == &VAR_2.dattr.attr ||
  VAR_4 == &VAR_1.dattr.attr;
}
