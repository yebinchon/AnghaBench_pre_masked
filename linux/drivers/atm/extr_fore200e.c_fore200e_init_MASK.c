
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fore200e {int state; TYPE_1__* bus; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* configure ) (struct fore200e*) ;scalar_t__ (* map ) (struct fore200e*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct fore200e*) ;
 scalar_t__ FUNC_1 (struct fore200e*) ;
 scalar_t__ FUNC_2 (struct fore200e*) ;
 scalar_t__ FUNC_3 (struct fore200e*) ;
 scalar_t__ FUNC_4 (struct fore200e*) ;
 scalar_t__ FUNC_5 (struct fore200e*) ;
 scalar_t__ FUNC_6 (struct fore200e*) ;
 scalar_t__ FUNC_7 (struct fore200e*) ;
 scalar_t__ FUNC_8 (struct fore200e*) ;
 scalar_t__ FUNC_9 (struct fore200e*,struct device*) ;
 scalar_t__ FUNC_10 (struct fore200e*,int) ;
 int FUNC_11 (struct fore200e*) ;
 scalar_t__ FUNC_12 (struct fore200e*) ;
 scalar_t__ FUNC_13 (struct fore200e*) ;

__attribute__((used)) static int FUNC_14(struct fore200e *VAR_5, struct device *VAR_6)
{
    if (FUNC_9(VAR_5, VAR_6) < 0)
 return -VAR_2;

    if (VAR_5->bus->configure(VAR_5) < 0)
 return -VAR_2;

    if (VAR_5->bus->map(VAR_5) < 0)
 return -VAR_2;

    if (FUNC_10(VAR_5, 1) < 0)
 return -VAR_2;

    if (FUNC_8(VAR_5) < 0)
 return -VAR_2;

    if (FUNC_6(VAR_5) < 0)
 return -VAR_2;

    if (FUNC_3(VAR_5) < 0)
 return -VAR_3;

    if (FUNC_5(VAR_5) < 0)
 return -VAR_3;

    if (FUNC_4(VAR_5) < 0)
 return -VAR_3;

    if (FUNC_2(VAR_5) < 0)
 return -VAR_3;

    if (FUNC_0(VAR_5) < 0)
 return -VAR_3;

    if (FUNC_1(VAR_5) < 0)
 return -VAR_1;

    if (FUNC_7(VAR_5) < 0)
 return -VAR_0;

    FUNC_11(VAR_5);


    VAR_5->state = VAR_4;
    return 0;
}
