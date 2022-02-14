
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ input; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_2);

 if (VAR_1.input) {
  VAR_4 = -VAR_0;
  goto out;
 }

 VAR_4 = FUNC_0(VAR_3);

out:
 FUNC_2(&VAR_2);
 return VAR_4;
}
