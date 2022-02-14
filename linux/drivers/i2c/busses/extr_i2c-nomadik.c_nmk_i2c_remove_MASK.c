
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct nmk_i2c_dev {int clk; scalar_t__ virtbase; int adap; } ;
struct amba_device {struct resource res; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct nmk_i2c_dev* FUNC_0 (struct amba_device*) ;
 int FUNC_1 (struct nmk_i2c_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nmk_i2c_dev*) ;
 int FUNC_4 (struct nmk_i2c_dev*) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct resource*) ;

__attribute__((used)) static int FUNC_9(struct amba_device *VAR_2)
{
 struct resource *VAR_3 = &VAR_2->res;
 struct nmk_i2c_dev *VAR_4 = FUNC_0(VAR_2);

 FUNC_6(&VAR_4->adap);
 FUNC_4(VAR_4);
 FUNC_3(VAR_4);
 FUNC_1(VAR_4);

 FUNC_5(VAR_4->virtbase + VAR_0, VAR_1);
 FUNC_2(VAR_4->clk);
 FUNC_7(VAR_3->start, FUNC_8(VAR_3));

 return 0;
}
