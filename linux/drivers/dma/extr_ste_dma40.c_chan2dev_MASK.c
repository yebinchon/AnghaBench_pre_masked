
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dev; } ;
struct d40_chan {TYPE_2__ chan; } ;
struct TYPE_3__ {struct device device; } ;



__attribute__((used)) static struct device *FUNC_0(struct d40_chan *VAR_0)
{
 return &VAR_0->chan.dev->device;
}
