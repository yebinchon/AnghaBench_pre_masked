
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiimote_data {int dummy; } ;
typedef int cmd ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (struct wiimote_data*,int *,int) ;
 int FUNC_1 (struct wiimote_data*,int *) ;

void FUNC_2(struct wiimote_data *VAR_1, __u8 VAR_2)
{
 __u8 VAR_3[2];

 VAR_3[0] = VAR_0;
 VAR_3[1] = VAR_2;

 FUNC_1(VAR_1, &VAR_3[1]);
 FUNC_0(VAR_1, VAR_3, sizeof(VAR_3));
}
