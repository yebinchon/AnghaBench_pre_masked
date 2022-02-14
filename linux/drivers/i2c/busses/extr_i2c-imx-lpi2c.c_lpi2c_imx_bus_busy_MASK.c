
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct lpi2c_imx_struct {TYPE_1__ adapter; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 unsigned long VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (unsigned long,scalar_t__) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct lpi2c_imx_struct *VAR_7)
{
 unsigned long VAR_8 = VAR_6;
 unsigned int VAR_9;

 while (1) {
  VAR_9 = FUNC_2(VAR_7->base + VAR_2);


  if (VAR_9 & VAR_3) {
   FUNC_5(VAR_9, VAR_7->base + VAR_2);
   return -VAR_0;
  }

  if (VAR_9 & (VAR_4 | VAR_5))
   break;

  if (FUNC_4(VAR_6, VAR_8 + FUNC_1(500))) {
   FUNC_0(&VAR_7->adapter.dev, "bus not work\n");
   return -VAR_1;
  }
  FUNC_3();
 }

 return 0;
}
