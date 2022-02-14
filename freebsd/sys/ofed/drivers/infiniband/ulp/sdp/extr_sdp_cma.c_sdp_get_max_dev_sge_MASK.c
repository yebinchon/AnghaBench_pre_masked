
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device_attr {int max_sge; } ;
struct ib_device {struct ib_device_attr attrs; } ;



__attribute__((used)) static int
FUNC_0(struct ib_device *VAR_0)
{
 struct ib_device_attr *VAR_1;
 static int VAR_2 = -1;

 if (VAR_2 > 0)
  goto out;

 VAR_1 = &VAR_0->attrs;
 VAR_2 = VAR_1->max_sge;

out:
 return VAR_2;
}
