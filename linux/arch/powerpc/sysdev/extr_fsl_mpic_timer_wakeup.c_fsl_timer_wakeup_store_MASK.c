
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int time64_t ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_7__ {TYPE_1__* timer; } ;
struct TYPE_6__ {int irq; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ FUNC_2 (char const*,int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_4,
    struct device_attribute *VAR_5,
    const char *VAR_6,
    size_t VAR_7)
{
 time64_t VAR_8;
 int VAR_9;

 if (FUNC_2(VAR_6, 0, &VAR_8))
  return -VAR_0;

 FUNC_6(&VAR_3);

 if (VAR_2->timer) {
  FUNC_0(VAR_2->timer->irq);
  FUNC_3(VAR_2->timer);
  VAR_2->timer = ((void*)0);
 }

 if (!VAR_8) {
  FUNC_7(&VAR_3);
  return VAR_7;
 }

 VAR_2->timer = FUNC_4(VAR_1,
      VAR_2, VAR_8);
 if (!VAR_2->timer) {
  FUNC_7(&VAR_3);
  return -VAR_0;
 }

 VAR_9 = FUNC_1(VAR_2->timer->irq);
 if (VAR_9) {
  FUNC_3(VAR_2->timer);
  VAR_2->timer = ((void*)0);
  FUNC_7(&VAR_3);

  return VAR_9;
 }

 FUNC_5(VAR_2->timer);

 FUNC_7(&VAR_3);

 return VAR_7;
}
