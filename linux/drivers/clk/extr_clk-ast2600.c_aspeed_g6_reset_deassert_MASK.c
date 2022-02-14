
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct reset_controller_dev {int dummy; } ;
struct aspeed_reset {int map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 struct aspeed_reset* FUNC_2 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_3(struct reset_controller_dev *VAR_2,
        unsigned long VAR_3)
{
 struct aspeed_reset *VAR_4 = FUNC_2(VAR_2);
 u32 VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6 = VAR_3 >= 32 ? VAR_1 : VAR_0;


 return FUNC_1(VAR_4->map, VAR_6 + 0x04, VAR_5);
}
