
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct subsys_interface {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int fclk; int hclk; int pclk; } ;
struct TYPE_5__ {TYPE_1__ max; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,unsigned long) ;
 TYPE_2__ VAR_4 ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct device *VAR_6,
          struct subsys_interface *VAR_7)
{
 unsigned long VAR_8;

 VAR_3 = FUNC_1(((void*)0), "hclk");
 if (FUNC_0(VAR_3)) {
  FUNC_4("cannot find hclk clock\n");
  return -VAR_0;
 }

 VAR_2 = FUNC_1(((void*)0), "fclk");
 if (FUNC_0(VAR_2)) {
  FUNC_4("cannot find fclk clock\n");
  goto err_fclk;
 }

 VAR_8 = FUNC_2(VAR_2);
 if (VAR_8 > 200000000) {
  FUNC_5("fclk %ld MHz, assuming 266MHz capable part\n",
   VAR_8 / 1000000);
  VAR_4.max.fclk = 266000000;
  VAR_4.max.hclk = 133000000;
  VAR_4.max.pclk = 66000000;
 }

 VAR_1 = FUNC_1(((void*)0), "armclk");
 if (FUNC_0(VAR_1)) {
  FUNC_4("cannot find arm clock\n");
  goto err_armclk;
 }

 VAR_5 = FUNC_1(((void*)0), "xtal");
 if (FUNC_0(VAR_5)) {
  FUNC_4("cannot find xtal clock\n");
  goto err_xtal;
 }

 return FUNC_6(&VAR_4);

err_xtal:
 FUNC_3(VAR_1);
err_armclk:
 FUNC_3(VAR_2);
err_fclk:
 FUNC_3(VAR_3);

 return -VAR_0;
}
