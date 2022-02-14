
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int suspend_state_t ;
struct TYPE_2__ {int (* valid ) (int ) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(suspend_state_t VAR_2)
{
 if (VAR_1)
  return VAR_1->valid(VAR_2);

 return -VAR_0;
}
