
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct reset_controller_dev {int dummy; } ;
struct aspeed_reset {int map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__* VAR_3 ;
 int FUNC_1 (int ,scalar_t__,int*) ;
 struct aspeed_reset* FUNC_2 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_3(struct reset_controller_dev *VAR_4,
          unsigned long VAR_5)
{
 struct aspeed_reset *VAR_6 = FUNC_2(VAR_4);
 u32 VAR_7 = VAR_1;
 u32 VAR_8 = VAR_3[VAR_5];
 int VAR_9, VAR_10;

 if (VAR_8 >= VAR_0) {
  VAR_8 -= VAR_0;
  VAR_7 = VAR_2;
 }

 VAR_9 = FUNC_1(VAR_6->map, VAR_7, &VAR_10);
 if (VAR_9)
  return VAR_9;

 return !!(VAR_10 & FUNC_0(VAR_8));
}
