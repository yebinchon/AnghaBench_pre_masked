
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {TYPE_1__* tp_ops; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_5__ {int (* read_status ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(ide_hwif_t *VAR_3, unsigned long VAR_4)
{
 u8 VAR_5 = 0;

 while (VAR_4--) {




  FUNC_0(1);
  VAR_5 = VAR_3->tp_ops->read_status(VAR_3);
  if ((VAR_5 & VAR_0) == 0)
   return 0;





  if (VAR_5 == 0xff)
   return -VAR_2;
  FUNC_3();
  FUNC_2();
 }
 return -VAR_1;
}
