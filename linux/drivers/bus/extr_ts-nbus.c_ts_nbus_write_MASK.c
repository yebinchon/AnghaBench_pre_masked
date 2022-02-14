
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ts_nbus {int lock; int csn; int rdy; int txrx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ts_nbus*,int ,int ) ;

int FUNC_5(struct ts_nbus *VAR_2, u8 VAR_3, u16 VAR_4)
{
 int VAR_5;


 FUNC_2(&VAR_2->lock);


 FUNC_1(VAR_2->txrx, 1);


 FUNC_4(VAR_2, VAR_0, VAR_3);


 for (VAR_5 = 1; VAR_5 >= 0; VAR_5--)
  FUNC_4(VAR_2, VAR_1, (u8)(VAR_4 >> (VAR_5 * 8)));


 FUNC_1(VAR_2->csn, 1);
 while (FUNC_0(VAR_2->rdy) != 0) {
  FUNC_1(VAR_2->csn, 0);
  FUNC_1(VAR_2->csn, 1);
 }

 FUNC_3(&VAR_2->lock);

 return 0;
}
