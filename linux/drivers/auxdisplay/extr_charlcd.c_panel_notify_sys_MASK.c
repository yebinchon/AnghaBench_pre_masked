
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct charlcd {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct charlcd*,char*) ;
 struct charlcd* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_2, unsigned long VAR_3,
       void *VAR_4)
{
 struct charlcd *VAR_5 = VAR_1;

 switch (VAR_3) {
 case 130:
  FUNC_0(VAR_5,
        "\x0cReloading\nSystem...\x1b[Lc\x1b[Lb\x1b[L+");
  break;
 case 129:
  FUNC_0(VAR_5, "\x0cSystem Halted.\x1b[Lc\x1b[Lb\x1b[L+");
  break;
 case 128:
  FUNC_0(VAR_5, "\x0cPower off.\x1b[Lc\x1b[Lb\x1b[L+");
  break;
 default:
  break;
 }
 return VAR_0;
}
