
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct lpi2c_imx_struct {TYPE_2__ adapter; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct lpi2c_imx_struct*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct lpi2c_imx_struct *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3->adapter.dev.parent);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = VAR_2;
 FUNC_5(VAR_4, VAR_3->base + VAR_0);
 FUNC_5(0, VAR_3->base + VAR_0);

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5)
  goto rpm_put;

 VAR_4 = FUNC_4(VAR_3->base + VAR_0);
 VAR_4 |= VAR_1;
 FUNC_5(VAR_4, VAR_3->base + VAR_0);

 return 0;

rpm_put:
 FUNC_2(VAR_3->adapter.dev.parent);
 FUNC_3(VAR_3->adapter.dev.parent);

 return VAR_5;
}
