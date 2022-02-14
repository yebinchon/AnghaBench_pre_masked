
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct nmk_i2c_dev {int sm; int clk_freq; int tft; int rft; scalar_t__ virtbase; TYPE_1__* adev; int clk; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (unsigned long long,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;




 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int const,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct nmk_i2c_dev *VAR_7)
{
 u32 VAR_8, VAR_9;
 u32 VAR_10, VAR_11;
 u32 VAR_12;
 u16 VAR_13;

 FUNC_5(0x0, VAR_7->virtbase + VAR_1);
 FUNC_5(0x0, VAR_7->virtbase + VAR_3);
 FUNC_5(0x0, VAR_7->virtbase + VAR_6);
 FUNC_5(0x0, VAR_7->virtbase + VAR_4);
 FUNC_5(0x0, VAR_7->virtbase + VAR_2);

 VAR_10 = FUNC_2(VAR_7->clk);
 VAR_12 = FUNC_1(1000000000ULL, VAR_10);
 switch (VAR_7->sm) {
 case 131:
 case 130:
  VAR_13 = FUNC_0(100, VAR_12);
  break;
 case 129:
  VAR_13 = FUNC_0(10, VAR_12);
  break;
 case 128:
 default:
  VAR_13 = FUNC_0(250, VAR_12);
  break;
 }
 VAR_13 += 1;

 FUNC_3(&VAR_7->adev->dev, "calculated SLSU = %04x\n", VAR_13);
 FUNC_5(VAR_13 << 16, VAR_7->virtbase + VAR_5);






 VAR_11 = (VAR_7->clk_freq > 100000) ? 3 : 2;
 VAR_8 = 0 << 16;
 VAR_9 = (VAR_10/(VAR_7->clk_freq * VAR_11)) & 0xffff;


 FUNC_5((VAR_8 | VAR_9), VAR_7->virtbase + VAR_0);







 if (VAR_7->sm > 131) {
  FUNC_4(&VAR_7->adev->dev,
   "do not support this mode defaulting to std. mode\n");
  VAR_9 = VAR_10/(100000 * 2) & 0xffff;
  FUNC_5((VAR_8 | VAR_9), VAR_7->virtbase + VAR_0);
  FUNC_5(128 << 4,
    VAR_7->virtbase + VAR_1);
 }
 FUNC_5(VAR_7->sm << 4, VAR_7->virtbase + VAR_1);


 FUNC_5(VAR_7->tft, VAR_7->virtbase + VAR_6);
 FUNC_5(VAR_7->rft, VAR_7->virtbase + VAR_4);
}
