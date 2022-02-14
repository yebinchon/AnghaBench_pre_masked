
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ container; } ;
struct i2c_payloads {TYPE_1__ payloads; } ;
struct i2c_payload {int dummy; } ;



__attribute__((used)) static struct i2c_payload *FUNC_0(struct i2c_payloads *VAR_0)
{
 return (struct i2c_payload *)VAR_0->payloads.container;
}
