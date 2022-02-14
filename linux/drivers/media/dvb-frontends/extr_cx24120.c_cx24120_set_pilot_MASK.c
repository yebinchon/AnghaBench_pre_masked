
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ delsys; void* pilot_val; } ;
struct cx24120_state {TYPE_2__ dnxt; TYPE_1__* i2c; } ;
typedef enum fe_pilot { ____Placeholder_fe_pilot } fe_pilot ;
struct TYPE_3__ {int dev; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;



 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static int FUNC_1(struct cx24120_state *VAR_4, enum fe_pilot VAR_5)
{
 FUNC_0(&VAR_4->i2c->dev, "(%d)\n", VAR_5);


 if (VAR_4->dnxt.delsys != VAR_3) {
  VAR_4->dnxt.pilot_val = VAR_1;
  return 0;
 }

 switch (VAR_5) {
 case 129:
  VAR_4->dnxt.pilot_val = VAR_1;
  break;
 case 128:
  VAR_4->dnxt.pilot_val = VAR_2;
  break;
 case 130:
 default:
  VAR_4->dnxt.pilot_val = VAR_0;
 }

 return 0;
}
