
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, unsigned int VAR_3)
{
 int VAR_4 = VAR_0 != 0;

 if (VAR_4) {
  if (VAR_1 <= -1)
   FUNC_1(VAR_2, "Using polling mode (specify irq)\n");
 } else
  FUNC_0(VAR_2, "Please specify I/O base\n");

 return VAR_4;
}
