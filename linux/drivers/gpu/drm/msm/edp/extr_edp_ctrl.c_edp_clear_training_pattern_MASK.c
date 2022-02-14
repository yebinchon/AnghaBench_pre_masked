
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edp_ctrl {int dpcd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct edp_ctrl*,int ) ;

__attribute__((used)) static int FUNC_2(struct edp_ctrl *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0, 0);

 FUNC_0(VAR_0->dpcd);

 return VAR_1;
}
