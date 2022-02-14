
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvcall_mpp_x_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct hvcall_mpp_x_data*) ;
 int VAR_2 ;

void FUNC_2(void)
{
 struct hvcall_mpp_x_data VAR_3;

 if (FUNC_0(VAR_0) && !FUNC_1(&VAR_3))
  VAR_2 |= VAR_1;
 else
  VAR_2 &= ~VAR_1;
}
