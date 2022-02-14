
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_5__ {scalar_t__ base; int gpios; } ;
struct TYPE_4__ {int ngpio; struct device* parent; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,TYPE_1__*,scalar_t__*) ;
 int FUNC_2 (int) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 if (VAR_1.base == 0)
  return -VAR_0;

 VAR_5 = FUNC_4(VAR_1.base);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_1.base);

 FUNC_5(VAR_1.base);

 if (VAR_5)
  return VAR_5;






 VAR_2.ngpio = FUNC_2(VAR_1.gpios) * 8;





 if (VAR_1.gpios & FUNC_0(5))
  VAR_2.ngpio -= (8 - 5);

 VAR_2.parent = VAR_3;

 return FUNC_1(VAR_3, &VAR_2, &VAR_1.base);
}
