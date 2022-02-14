
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiimote_data {int dummy; } ;
typedef int cmd ;
typedef scalar_t__ __u8 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct wiimote_data*,scalar_t__*,int) ;
 int FUNC_1 (struct wiimote_data*,scalar_t__*) ;

void FUNC_2(struct wiimote_data *VAR_1)
{
 __u8 VAR_2[2];

 VAR_2[0] = VAR_0;
 VAR_2[1] = 0;

 FUNC_1(VAR_1, &VAR_2[1]);
 FUNC_0(VAR_1, VAR_2, sizeof(VAR_2));
}
