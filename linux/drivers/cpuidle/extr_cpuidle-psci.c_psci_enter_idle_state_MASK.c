
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cpuidle_driver {int dummy; } ;
struct cpuidle_device {int dummy; } ;


 int FUNC_0 (int ,int,int ) ;
 int * FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct cpuidle_device *VAR_2,
    struct cpuidle_driver *VAR_3, int VAR_4)
{
 u32 *VAR_5 = FUNC_1(VAR_1);

 return FUNC_0(VAR_0,
        VAR_4, VAR_5[VAR_4 - 1]);
}
