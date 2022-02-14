
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct psb_intel_sdvo {TYPE_2__* i2c; } ;
struct i2c_adapter {struct psb_intel_sdvo* algo_data; } ;
struct TYPE_4__ {TYPE_1__* algo; } ;
struct TYPE_3__ {int (* functionality ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static u32 FUNC_1(struct i2c_adapter *VAR_0)
{
 struct psb_intel_sdvo *VAR_1 = VAR_0->algo_data;
 return VAR_1->i2c->algo->functionality(VAR_1->i2c);
}
