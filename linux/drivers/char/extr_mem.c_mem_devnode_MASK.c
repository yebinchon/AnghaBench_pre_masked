
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ umode_t ;
struct device {int devt; } ;
struct TYPE_2__ {scalar_t__ mode; } ;


 size_t FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static char *FUNC_1(struct device *VAR_1, umode_t *VAR_2)
{
 if (VAR_2 && VAR_0[FUNC_0(VAR_1->devt)].mode)
  *VAR_2 = VAR_0[FUNC_0(VAR_1->devt)].mode;
 return ((void*)0);
}
