
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef enum ucode_state { ____Placeholder_ucode_state } ucode_state ;
struct TYPE_6__ {int cpu_index; } ;
struct TYPE_5__ {int (* request_microcode_fw ) (int,int *,int) ;} ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 size_t FUNC_0 () ;
 int FUNC_1 () ;
 size_t FUNC_2 (char const*,int ,unsigned long*) ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 size_t FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int,int *,int) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_6,
       struct device_attribute *VAR_7,
       const char *VAR_8, size_t VAR_9)
{
 enum ucode_state VAR_10 = VAR_1;
 int VAR_11 = VAR_2.cpu_index;
 unsigned long VAR_12;
 ssize_t VAR_13 = 0;

 VAR_13 = FUNC_2(VAR_8, 0, &VAR_12);
 if (VAR_13)
  return VAR_13;

 if (VAR_12 != 1)
  return VAR_9;

 VAR_10 = VAR_4->request_microcode_fw(VAR_11, &VAR_5->dev, 1);
 if (VAR_10 != VAR_0)
  return VAR_9;

 FUNC_1();

 VAR_13 = FUNC_0();
 if (VAR_13)
  goto put;

 FUNC_4(&VAR_3);
 VAR_13 = FUNC_3();
 FUNC_5(&VAR_3);

put:
 FUNC_6();

 if (VAR_13 >= 0)
  VAR_13 = VAR_9;

 return VAR_13;
}
