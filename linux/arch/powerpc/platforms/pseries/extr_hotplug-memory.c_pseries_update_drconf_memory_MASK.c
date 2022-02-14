
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct of_reconfig_data {TYPE_2__* prop; TYPE_1__* old_prop; } ;
struct of_drconf_cell_v1 {int base_addr; int flags; } ;
typedef int __be32 ;
struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_3__ {scalar_t__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 unsigned long FUNC_3 () ;
 int FUNC_4 (int ,unsigned long) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_5(struct of_reconfig_data *VAR_3)
{
 struct of_drconf_cell_v1 *VAR_4, *VAR_5;
 unsigned long VAR_6;
 u32 VAR_7;
 __be32 *VAR_8;
 int VAR_9, VAR_10 = -VAR_1;

 if (VAR_2)
  return 0;

 VAR_6 = FUNC_3();
 if (!VAR_6)
  return -VAR_1;

 if (!VAR_3->old_prop)
  return 0;

 VAR_8 = (__be32 *) VAR_3->old_prop->value;
 if (!VAR_8)
  return -VAR_1;






 VAR_7 = FUNC_0(*VAR_8++);
 VAR_5 = (struct of_drconf_cell_v1 *)VAR_8;

 VAR_8 = (__be32 *)VAR_3->prop->value;
 VAR_8++;
 VAR_4 = (struct of_drconf_cell_v1 *)VAR_8;

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  if ((FUNC_0(VAR_5[VAR_9].flags) & VAR_0) &&
      (!(FUNC_0(VAR_4[VAR_9].flags) & VAR_0))) {
   VAR_10 = FUNC_4(
    FUNC_1(VAR_5[VAR_9].base_addr),
           VAR_6);
   break;
  } else if ((!(FUNC_0(VAR_5[VAR_9].flags) &
       VAR_0)) &&
       (FUNC_0(VAR_4[VAR_9].flags) &
       VAR_0)) {
   VAR_10 = FUNC_2(FUNC_1(VAR_5[VAR_9].base_addr),
       VAR_6);
   VAR_10 = (VAR_10 < 0) ? -VAR_1 : 0;
   break;
  }
 }
 return VAR_10;
}
