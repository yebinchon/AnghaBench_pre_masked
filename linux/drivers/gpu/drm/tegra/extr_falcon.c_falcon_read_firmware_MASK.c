
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int firmware; } ;
struct falcon {int dev; TYPE_1__ firmware; } ;


 int FUNC_0 (int *,char const*,int ) ;

int FUNC_1(struct falcon *VAR_0, const char *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_0(&VAR_0->firmware.firmware, VAR_1, VAR_0->dev);
 if (VAR_2 < 0)
  return VAR_2;

 return 0;
}
