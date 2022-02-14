
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int must_resume; } ;
struct device {TYPE_1__ power; } ;
struct TYPE_4__ {scalar_t__ event; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;

bool FUNC_0(struct device *VAR_2)
{
 return !VAR_2->power.must_resume && VAR_1.event != VAR_0;
}
