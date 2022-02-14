
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ helper_subtype; } ;
struct coresight_device {scalar_t__ type; TYPE_1__ subtype; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct coresight_device *VAR_3)
{
 if (!FUNC_0(VAR_0))
  return 0;
 if (VAR_3->type != VAR_2)
  return 0;
 if (VAR_3->subtype.helper_subtype != VAR_1)
  return 0;
 return 1;
}
