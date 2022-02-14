
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct arasan_cf_pdata {unsigned int cf_if_clk; } ;
struct arasan_cf_dev {TYPE_1__* host; scalar_t__ vbase; int clk; } ;
struct TYPE_2__ {int lock; int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct arasan_cf_dev*,int) ;
 int FUNC_1 (struct arasan_cf_dev*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*) ;
 struct arasan_cf_pdata* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct arasan_cf_dev *VAR_7)
{
 struct arasan_cf_pdata *VAR_8 = FUNC_6(VAR_7->host->dev);
 unsigned int VAR_9;
 unsigned long VAR_10;
 int VAR_11 = 0;

 VAR_11 = FUNC_3(VAR_7->clk);
 if (VAR_11) {
  FUNC_5(VAR_7->host->dev, "clock enable failed");
  return VAR_11;
 }

 VAR_11 = FUNC_4(VAR_7->clk, 166000000);
 if (VAR_11) {
  FUNC_7(VAR_7->host->dev, "clock set rate failed");
  FUNC_2(VAR_7->clk);
  return VAR_11;
 }

 FUNC_8(&VAR_7->host->lock, VAR_10);


 VAR_9 = VAR_2;
 if (VAR_8 && VAR_8->cf_if_clk <= VAR_3)
  VAR_9 = VAR_8->cf_if_clk;

 FUNC_10(VAR_9, VAR_7->vbase + VAR_4);

 FUNC_10(VAR_6 | VAR_1, VAR_7->vbase + VAR_5);
 FUNC_1(VAR_7, VAR_0, 1);
 FUNC_0(VAR_7, 1);
 FUNC_9(&VAR_7->host->lock, VAR_10);

 return VAR_11;
}
