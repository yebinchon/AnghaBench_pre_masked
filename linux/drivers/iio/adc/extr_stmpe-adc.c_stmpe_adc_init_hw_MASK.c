
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmpe_adc {struct stmpe* stmpe; } ;
struct stmpe {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct stmpe*) ;
 int FUNC_2 (struct stmpe*,int ) ;
 int FUNC_3 (struct stmpe*,int ) ;
 int FUNC_4 (struct stmpe*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct stmpe_adc *VAR_2)
{
 int VAR_3;
 struct stmpe *VAR_4 = VAR_2->stmpe;

 VAR_3 = FUNC_3(VAR_4, VAR_0);
 if (VAR_3) {
  FUNC_0(VAR_4->dev, "Could not enable clock for ADC\n");
  return VAR_3;
 }

 VAR_3 = FUNC_1(VAR_4);
 if (VAR_3) {
  FUNC_2(VAR_4, VAR_0);
  return VAR_3;
 }


 FUNC_4(VAR_4, VAR_1, 0);
 FUNC_4(VAR_4, VAR_1 + 1, 0);

 return 0;
}
