
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct ide_tp_ops {int (* read_status ) (TYPE_1__*) ;} ;
struct TYPE_8__ {struct ide_tp_ops* tp_ops; } ;
typedef TYPE_1__ ide_hwif_t ;
struct TYPE_9__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (scalar_t__,unsigned long) ;
 int FUNC_9 (int) ;

int FUNC_10(ide_drive_t *VAR_5, u8 VAR_6, u8 VAR_7,
      unsigned long VAR_8, u8 *VAR_9)
{
 ide_hwif_t *VAR_10 = VAR_5->hwif;
 const struct ide_tp_ops *VAR_11 = VAR_10->tp_ops;
 unsigned long VAR_12;
 bool VAR_13 = VAR_3;
 int VAR_14;
 u8 VAR_15;

 FUNC_9(1);
 VAR_15 = VAR_11->read_status(VAR_10);

 if (VAR_15 & VAR_0) {
  if (!VAR_13) {
   FUNC_3(VAR_12);
   FUNC_1();
  }
  VAR_8 += VAR_4;
  while ((VAR_15 = VAR_11->read_status(VAR_10)) & VAR_0) {
   if (FUNC_8(VAR_4, VAR_8)) {





    VAR_15 = VAR_11->read_status(VAR_10);
    if ((VAR_15 & VAR_0) == 0)
     break;

    if (!VAR_13)
     FUNC_2(VAR_12);
    *VAR_9 = VAR_15;
    return -VAR_1;
   }
  }
  if (!VAR_13)
   FUNC_2(VAR_12);
 }







 for (VAR_14 = 0; VAR_14 < 10; VAR_14++) {
  FUNC_9(1);
  VAR_15 = VAR_11->read_status(VAR_10);

  if (FUNC_0(VAR_15, VAR_6, VAR_7)) {
   *VAR_9 = VAR_15;
   return 0;
  }
 }
 *VAR_9 = VAR_15;
 return -VAR_2;
}
