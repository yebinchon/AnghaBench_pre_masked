
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct TYPE_3__ {TYPE_2__* qos; } ;
struct device {TYPE_1__ power; } ;
typedef int ssize_t ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {int resume_latency_req; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (char const*,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
           struct device_attribute *VAR_3,
           const char *VAR_4, size_t VAR_5)
{
 s32 VAR_6;
 int VAR_7;

 if (!FUNC_1(VAR_4, 0, &VAR_6)) {




  if (VAR_6 < 0 || VAR_6 == VAR_1)
   return -VAR_0;

  if (VAR_6 == 0)
   VAR_6 = VAR_1;
 } else if (FUNC_2(VAR_4, "n/a")) {
  VAR_6 = 0;
 } else {
  return -VAR_0;
 }

 VAR_7 = FUNC_0(VAR_2->power.qos->resume_latency_req,
     VAR_6);
 return VAR_7 < 0 ? VAR_7 : VAR_5;
}
