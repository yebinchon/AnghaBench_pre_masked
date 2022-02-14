
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ads8688_state {int vref_mv; } ;
typedef int ssize_t ;
struct TYPE_2__ {int scale; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct ads8688_state* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
       struct device_attribute *VAR_2, char *VAR_3)
{
 struct ads8688_state *VAR_4 = FUNC_1(FUNC_0(VAR_1));

 return FUNC_2(VAR_3, "0.%09u 0.%09u 0.%09u\n",
         VAR_0[0].scale * VAR_4->vref_mv,
         VAR_0[1].scale * VAR_4->vref_mv,
         VAR_0[2].scale * VAR_4->vref_mv);
}
