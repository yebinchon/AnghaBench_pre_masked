
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ts_nbus {int lock; int rdy; int csn; int txrx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ts_nbus*,int*) ;
 int FUNC_5 (struct ts_nbus*,int ) ;
 int FUNC_6 (struct ts_nbus*,int ,int) ;

int FUNC_7(struct ts_nbus *VAR_3, u8 VAR_4, u16 *VAR_5)
{
 int VAR_6, VAR_7;
 u8 VAR_8;


 FUNC_2(&VAR_3->lock);


 FUNC_1(VAR_3->txrx, 0);


 FUNC_6(VAR_3, VAR_2, VAR_4);


 FUNC_5(VAR_3, VAR_0);


 do {
  *VAR_5 = 0;
  VAR_8 = 0;
  for (VAR_7 = 1; VAR_7 >= 0; VAR_7--) {

   VAR_6 = FUNC_4(VAR_3, &VAR_8);
   if (VAR_6 < 0)
    goto err;


   *VAR_5 |= VAR_8 << (VAR_7 * 8);
  }
  FUNC_1(VAR_3->csn, 1);
  VAR_6 = FUNC_0(VAR_3->rdy);
 } while (VAR_6);

err:

 FUNC_5(VAR_3, VAR_1);

 FUNC_3(&VAR_3->lock);

 return VAR_6;
}
