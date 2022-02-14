
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct lpi2c_imx_struct {TYPE_1__ adapter; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned long,scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct lpi2c_imx_struct *VAR_5)
{
 unsigned long VAR_6 = VAR_4;
 unsigned int VAR_7;

 FUNC_5(VAR_0 << 8, VAR_5->base + VAR_2);

 do {
  VAR_7 = FUNC_2(VAR_5->base + VAR_1);
  if (VAR_7 & VAR_3)
   break;

  if (FUNC_4(VAR_4, VAR_6 + FUNC_1(500))) {
   FUNC_0(&VAR_5->adapter.dev, "stop timeout\n");
   break;
  }
  FUNC_3();

 } while (1);
}
