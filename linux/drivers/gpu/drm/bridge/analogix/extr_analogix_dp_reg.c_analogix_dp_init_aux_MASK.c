
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct analogix_dp_device {scalar_t__ reg_base; TYPE_1__* plat_data; } ;
struct TYPE_2__ {int dev_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct analogix_dp_device*) ;
 int FUNC_4 (struct analogix_dp_device*,int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,scalar_t__) ;

void FUNC_9(struct analogix_dp_device *VAR_10)
{
 u32 VAR_11;


 VAR_11 = VAR_9 | VAR_5;
 FUNC_8(VAR_11, VAR_10->reg_base + VAR_3);

 FUNC_4(VAR_10, VAR_4, 1);
 FUNC_7(10, 11);
 FUNC_4(VAR_10, VAR_4, 0);

 FUNC_3(VAR_10);


 if (VAR_10->plat_data && FUNC_5(VAR_10->plat_data->dev_type))
  VAR_11 = 0;
 else
  VAR_11 = FUNC_0(3);


 VAR_11 |= FUNC_1(0) |
        VAR_7;

 FUNC_8(VAR_11, VAR_10->reg_base + VAR_1);


 VAR_11 = VAR_8 | FUNC_2(1);
 FUNC_8(VAR_11, VAR_10->reg_base + VAR_0);


 VAR_11 = FUNC_6(VAR_10->reg_base + VAR_2);
 VAR_11 &= ~VAR_6;
 FUNC_8(VAR_11, VAR_10->reg_base + VAR_2);
}
