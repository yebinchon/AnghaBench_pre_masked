
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hv_device {TYPE_4__* channel; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_5__ {int b; } ;
struct TYPE_6__ {TYPE_1__ if_type; } ;
struct TYPE_7__ {TYPE_2__ offer; } ;
struct TYPE_8__ {TYPE_3__ offermsg; } ;


 int VAR_0 ;
 struct hv_device* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 struct hv_device *VAR_4 = FUNC_0(VAR_1);

 if (!VAR_4->channel)
  return -VAR_0;
 return FUNC_1(VAR_3, "{%pUl}\n",
         VAR_4->channel->offermsg.offer.if_type.b);
}
