
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct host1x_firewall {scalar_t__ class; TYPE_1__* job; } ;
struct TYPE_2__ {int (* is_valid_class ) (scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct host1x_firewall *VAR_1, u32 VAR_2)
{
 if (!VAR_1->job->is_valid_class) {
  if (VAR_1->class != VAR_2)
   return -VAR_0;
 } else {
  if (!VAR_1->job->is_valid_class(VAR_1->class))
   return -VAR_0;
 }

 return 0;
}
