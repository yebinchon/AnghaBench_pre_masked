
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qce_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct qce_device*,int ) ;

void FUNC_1(struct qce_device *VAR_7, u32 *VAR_8, u32 *VAR_9, u32 *VAR_10)
{
 u32 VAR_11;

 VAR_11 = FUNC_0(VAR_7, VAR_6);
 *VAR_8 = (VAR_11 & VAR_0) >> VAR_1;
 *VAR_9 = (VAR_11 & VAR_2) >> VAR_3;
 *VAR_10 = (VAR_11 & VAR_4) >> VAR_5;
}
