
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_card_driver {int stop_iso; int free_iso_context; int (* update_phy_reg ) (struct fw_card*,int,int,int ) ;} ;
struct fw_card {int transaction_list; int done; struct fw_card_driver* driver; int link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 struct fw_card_driver VAR_3 ;
 int FUNC_1 (struct fw_card*) ;
 int FUNC_2 (struct fw_card*) ;
 int FUNC_3 (struct fw_card*,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct fw_card*,int,int,int ) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct fw_card *VAR_4)
{
 struct fw_card_driver VAR_5 = VAR_3;

 VAR_4->driver->update_phy_reg(VAR_4, 4,
         VAR_1 | VAR_0, 0);
 FUNC_3(VAR_4, 0, 1);

 FUNC_6(&VAR_2);
 FUNC_4(&VAR_4->link);
 FUNC_7(&VAR_2);


 VAR_5.free_iso_context = VAR_4->driver->free_iso_context;
 VAR_5.stop_iso = VAR_4->driver->stop_iso;
 VAR_4->driver = &VAR_5;

 FUNC_2(VAR_4);


 FUNC_1(VAR_4);
 FUNC_9(&VAR_4->done);

 FUNC_0(!FUNC_5(&VAR_4->transaction_list));
}
