
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int name; int major; int sg_table; int gendev_rel_comp; int gendev; int * portdev; int irq; TYPE_1__* host; scalar_t__ present; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_8__ {int get_lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(ide_hwif_t *VAR_3)
{
 FUNC_0(FUNC_8());
 FUNC_0(FUNC_9());

 FUNC_11(&VAR_2);

 if (VAR_3->present) {
  FUNC_2(VAR_3);
  VAR_3->present = 0;
 }

 FUNC_6(VAR_3);

 if (!VAR_3->host->get_lock)
  FUNC_5(VAR_3->irq, VAR_3);

 FUNC_4(VAR_3->portdev);
 FUNC_4(&VAR_3->gendev);
 FUNC_14(&VAR_3->gendev_rel_comp);




 FUNC_3(FUNC_1(VAR_3->major, 0), VAR_0<<VAR_1);
 FUNC_10(VAR_3->sg_table);
 FUNC_13(VAR_3->major, VAR_3->name);

 FUNC_7(VAR_3);

 FUNC_12(&VAR_2);
}
