
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct device {int dummy; } ;
struct coresight_device {scalar_t__ type; TYPE_1__* ea; } ;
struct TYPE_2__ {scalar_t__ var; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct coresight_device* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_2, const void *VAR_3)
{
 struct coresight_device *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5;

 if (VAR_4->type == VAR_1 ||
      VAR_4->type == VAR_0) {

  if (!VAR_4->ea)
   return 0;




  VAR_5 = (unsigned long)VAR_4->ea->var;

  if ((u32)VAR_5 == *(u32 *)VAR_3)
   return 1;
 }

 return 0;
}
