
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct analogix_dp_device {scalar_t__ reg_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,scalar_t__) ;

void FUNC_1(struct analogix_dp_device *VAR_9, bool VAR_10)
{
 u32 VAR_11;

 if (VAR_10)
  VAR_11 = VAR_7 | VAR_5 |
        VAR_4 | VAR_2;
 else
  VAR_11 = VAR_8 | VAR_6 |
        VAR_3 | VAR_1;

 FUNC_0(VAR_11, VAR_9->reg_base + VAR_0);
}
