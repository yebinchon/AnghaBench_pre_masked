
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int cmci_disabled; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ,scalar_t__*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_5,
     struct device_attribute *VAR_6,
     const char *VAR_7, size_t VAR_8)
{
 u64 VAR_9;

 if (FUNC_0(VAR_7, 0, &VAR_9) < 0)
  return -VAR_0;

 FUNC_1(&VAR_4);
 if (VAR_1.cmci_disabled ^ !!VAR_9) {
  if (VAR_9) {

   FUNC_3(VAR_2, ((void*)0), 1);
   VAR_1.cmci_disabled = 1;
  } else {

   VAR_1.cmci_disabled = 0;
   FUNC_3(VAR_3, ((void*)0), 1);
  }
 }
 FUNC_2(&VAR_4);

 return VAR_8;
}
