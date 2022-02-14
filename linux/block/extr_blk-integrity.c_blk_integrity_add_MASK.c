
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gendisk {int integrity_kobj; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct gendisk*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,int *,char*,char*) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct gendisk *VAR_2)
{
 if (FUNC_1(&VAR_2->integrity_kobj, &VAR_1,
     &FUNC_0(VAR_2)->kobj, "%s", "integrity"))
  return;

 FUNC_2(&VAR_2->integrity_kobj, VAR_0);
}
