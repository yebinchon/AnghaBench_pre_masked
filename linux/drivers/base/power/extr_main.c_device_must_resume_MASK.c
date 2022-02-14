
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int may_skip_resume; } ;
struct device {TYPE_1__ power; } ;
struct TYPE_10__ {scalar_t__ event; } ;
typedef TYPE_2__ pm_message_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,TYPE_2__,int *) ;
 int FUNC_3 (struct device*,TYPE_2__,int *) ;
 int FUNC_4 (struct device*,TYPE_2__,int *) ;
 int FUNC_5 (struct device*) ;
 TYPE_2__ FUNC_6 (TYPE_2__) ;

__attribute__((used)) static bool FUNC_7(struct device *VAR_1, pm_message_t VAR_2,
          bool VAR_3)
{
 pm_message_t VAR_4 = FUNC_6(VAR_2);







 if (VAR_3 &&
     !FUNC_4(VAR_1, VAR_2, ((void*)0)) &&
     !FUNC_2(VAR_1, VAR_4, ((void*)0)) &&
     !FUNC_3(VAR_1, VAR_4, ((void*)0)))
  return !FUNC_5(VAR_1) &&
   (VAR_4.event != VAR_0 ||
    (FUNC_0(VAR_1) && !FUNC_1(VAR_1)));





 return !VAR_1->power.may_skip_resume;
}
