
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct uld_ctx {TYPE_1__ dev; } ;
typedef enum cxgb4_state { ____Placeholder_cxgb4_state } cxgb4_state ;


 int VAR_0 ;




 int FUNC_0 (struct uld_ctx*) ;
 int FUNC_1 (struct uld_ctx*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(void *VAR_1, enum cxgb4_state VAR_2)
{
 struct uld_ctx *VAR_3 = VAR_1;
 int VAR_4 = 0;

 switch (VAR_2) {
 case 128:
  if (VAR_3->dev.state != VAR_0) {

   return 0;
  }
  FUNC_1(VAR_3);
  VAR_4 = FUNC_2();
  break;

 case 131:
  FUNC_0(VAR_3);
  break;

 case 129:
 case 130:
 default:
  break;
 }
 return VAR_4;
}
