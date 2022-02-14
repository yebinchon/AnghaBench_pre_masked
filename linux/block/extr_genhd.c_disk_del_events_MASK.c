
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gendisk {TYPE_1__* ev; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_3__ {int node; } ;


 int FUNC_0 (struct gendisk*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct gendisk*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void FUNC_6(struct gendisk *VAR_2)
{
 if (VAR_2->ev) {
  FUNC_0(VAR_2);

  FUNC_3(&VAR_1);
  FUNC_2(&VAR_2->ev->node);
  FUNC_4(&VAR_1);
 }

 FUNC_5(&FUNC_1(VAR_2)->kobj, VAR_0);
}
