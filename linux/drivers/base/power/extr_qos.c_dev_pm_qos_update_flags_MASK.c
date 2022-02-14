
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* qos; } ;
struct device {TYPE_1__ power; } ;
typedef int s32 ;
struct TYPE_4__ {int flags_req; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;

int FUNC_7(struct device *VAR_2, s32 VAR_3, bool VAR_4)
{
 s32 VAR_5;
 int VAR_6;

 FUNC_5(VAR_2);
 FUNC_3(&VAR_1);

 if (FUNC_0(VAR_2->power.qos) || !VAR_2->power.qos->flags_req) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_4)
  VAR_5 |= VAR_3;
 else
  VAR_5 &= ~VAR_3;

 VAR_6 = FUNC_1(VAR_2->power.qos->flags_req, VAR_5);

 out:
 FUNC_4(&VAR_1);
 FUNC_6(VAR_2);
 return VAR_6;
}
