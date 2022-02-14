
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int attr_rdpmc; scalar_t__ attr_rdpmc_broken; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (char const*,int ,unsigned long*) ;
 int FUNC_1 (int ,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_5,
         struct device_attribute *VAR_6,
         const char *VAR_7, size_t VAR_8)
{
 unsigned long VAR_9;
 ssize_t VAR_10;

 VAR_10 = FUNC_0(VAR_7, 0, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_9 > 2)
  return -VAR_0;

 if (VAR_4.attr_rdpmc_broken)
  return -VAR_1;

 if ((VAR_9 == 2) != (VAR_4.attr_rdpmc == 2)) {





  if (VAR_9 == 2)
   FUNC_3(&VAR_2);
  else
   FUNC_2(&VAR_2);
  FUNC_1(VAR_3, ((void*)0), 1);
 }

 VAR_4.attr_rdpmc = VAR_9;

 return VAR_8;
}
