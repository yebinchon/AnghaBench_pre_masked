
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* groups; } ;
struct wacom {int lock; TYPE_1__ led; } ;
struct hid_device {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {unsigned int select; } ;


 struct wacom* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (char const*,int,unsigned int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct hid_device* FUNC_4 (struct device*) ;
 int FUNC_5 (struct wacom*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0, int VAR_1,
          const char *VAR_2, size_t VAR_3)
{
 struct hid_device *VAR_4 = FUNC_4(VAR_0);
 struct wacom *VAR_5 = FUNC_0(VAR_4);
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, 10, &VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_2(&VAR_5->lock);

 VAR_5->led.groups[VAR_1].select = VAR_6 & 0x3;
 VAR_7 = FUNC_5(VAR_5);

 FUNC_3(&VAR_5->lock);

 return VAR_7 < 0 ? VAR_7 : VAR_3;
}
