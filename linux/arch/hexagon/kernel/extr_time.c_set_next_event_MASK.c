
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int dummy; } ;
struct TYPE_2__ {int enable; int match; int clear; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_2, struct clock_event_device *VAR_3)
{


 FUNC_0(1, &VAR_1->clear);
 FUNC_0(0, &VAR_1->clear);

 FUNC_0(VAR_2, &VAR_1->match);
 FUNC_0(1 << VAR_0, &VAR_1->enable);
 return 0;
}
