
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switch_dev {int dummy; } ;
struct b53_device {TYPE_1__* ports; int allow_vid_4095; } ;
struct TYPE_2__ {int pvid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct b53_device*) ;
 struct b53_device* FUNC_1 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_2(struct switch_dev *VAR_1, int VAR_2, int VAR_3)
{
 struct b53_device *VAR_4 = FUNC_1(VAR_1);

 if (VAR_3 > 15 && FUNC_0(VAR_4))
  return -VAR_0;
 if (VAR_3 == 4095 && !VAR_4->allow_vid_4095)
  return -VAR_0;

 VAR_4->ports[VAR_2].pvid = VAR_3;

 return 0;
}
