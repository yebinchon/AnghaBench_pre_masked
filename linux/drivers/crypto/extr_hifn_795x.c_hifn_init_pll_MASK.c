
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct hifn_device {int pk_clk_freq; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int FUNC_0 (int *,char*,unsigned int,char*) ;
 char* VAR_13 ;
 int FUNC_1 (struct hifn_device*,unsigned int,unsigned int) ;
 int FUNC_2 (int) ;
 unsigned int FUNC_3 (char*,int *,int) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void FUNC_5(struct hifn_device *VAR_14)
{
 unsigned int VAR_15, VAR_16;
 u32 VAR_17;

 VAR_17 = VAR_0 | VAR_12;

 if (FUNC_4(VAR_13, "ext", 3) == 0)
  VAR_17 |= VAR_11;
 else
  VAR_17 |= VAR_10;

 if (VAR_13[3] != '\0')
  VAR_15 = FUNC_3(VAR_13 + 3, ((void*)0), 10);
 else {
  VAR_15 = 66;
  FUNC_0(&VAR_14->pdev->dev, "assuming %uMHz clock speed, override with hifn_pll_ref=%.3s<frequency>\n",
    VAR_15, VAR_13);
 }

 VAR_16 = VAR_2 / VAR_15;

 VAR_17 |= (VAR_16 / 2 - 1) << VAR_5;
 if (VAR_16 <= 8)
  VAR_17 |= VAR_3;
 else
  VAR_17 |= VAR_4;


 FUNC_1(VAR_14, VAR_0, VAR_17 |
       VAR_8 | VAR_6 | VAR_1);


 FUNC_2(10);


 FUNC_1(VAR_14, VAR_0, VAR_17 |
       VAR_8 | VAR_6);


 FUNC_1(VAR_14, VAR_0, VAR_17 |
       VAR_9 | VAR_7);







 VAR_14->pk_clk_freq = 1000000 * (VAR_15 + 1) * VAR_16 / 2;
}
