
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct lpi2c_imx_struct {TYPE_1__ adapter; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 unsigned long VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct lpi2c_imx_struct *VAR_6)
{
 unsigned long VAR_7 = VAR_5;
 u32 VAR_8;

 do {
  VAR_8 = FUNC_2(VAR_6->base + VAR_2) & 0xff;

  if (FUNC_2(VAR_6->base + VAR_3) & VAR_4) {
   FUNC_0(&VAR_6->adapter.dev, "NDF detected\n");
   return -VAR_0;
  }

  if (FUNC_4(VAR_5, VAR_7 + FUNC_1(500))) {
   FUNC_0(&VAR_6->adapter.dev, "txfifo empty timeout\n");
   return -VAR_1;
  }
  FUNC_3();

 } while (VAR_8);

 return 0;
}
