
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsi_data {TYPE_1__* vc; } ;
struct TYPE_2__ {int source; } ;


 int FUNC_0 () ;


 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dsi_data*) ;
 int FUNC_3 (struct dsi_data*,int) ;
 int FUNC_4 (struct dsi_data*,int) ;
 int FUNC_5 (struct dsi_data*,int) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct dsi_data *VAR_1, int VAR_2)
{
 FUNC_1(!FUNC_2(VAR_1));

 FUNC_1(FUNC_6());

 if (!FUNC_5(VAR_1, VAR_2))
  return 0;

 switch (VAR_1->vc[VAR_2].source) {
 case 128:
  return FUNC_4(VAR_1, VAR_2);
 case 129:
  return FUNC_3(VAR_1, VAR_2);
 default:
  FUNC_0();
  return -VAR_0;
 }
}
