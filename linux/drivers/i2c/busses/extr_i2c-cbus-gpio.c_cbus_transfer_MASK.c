
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbus_host {int lock; int clk; int sel; int dev; int dat; } ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int FUNC_0 (struct cbus_host*) ;
 int FUNC_1 (struct cbus_host*,int) ;
 int FUNC_2 (struct cbus_host*,unsigned int,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct cbus_host *VAR_4, char VAR_5, unsigned VAR_6,
    unsigned VAR_7, unsigned VAR_8)
{
 unsigned long VAR_9;
 int VAR_10;


 FUNC_7(&VAR_4->lock, VAR_9);


 FUNC_6(VAR_4->sel, 0);


 FUNC_5(VAR_4->dat, 1);


 FUNC_2(VAR_4, VAR_6, VAR_0);


 FUNC_1(VAR_4, VAR_5 == VAR_2);


 FUNC_2(VAR_4, VAR_7, VAR_1);

 if (VAR_5 == VAR_3) {
  FUNC_2(VAR_4, VAR_8, 16);
  VAR_10 = 0;
 } else {
  VAR_10 = FUNC_4(VAR_4->dat);
  if (VAR_10) {
   FUNC_3(VAR_4->dev, "failed setting direction\n");
   goto out;
  }
  FUNC_6(VAR_4->clk, 1);

  VAR_10 = FUNC_0(VAR_4);
  if (VAR_10 < 0) {
   FUNC_3(VAR_4->dev, "failed receiving data\n");
   goto out;
  }
 }


 FUNC_6(VAR_4->sel, 1);
 FUNC_6(VAR_4->clk, 1);
 FUNC_6(VAR_4->clk, 0);

out:
 FUNC_8(&VAR_4->lock, VAR_9);

 return VAR_10;
}
